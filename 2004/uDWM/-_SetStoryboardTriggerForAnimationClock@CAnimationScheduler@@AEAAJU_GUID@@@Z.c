/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180034328
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180032840 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x18000844C (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180008710 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180009768 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029550 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x1800344EC (-UseDComposition@CStoryboard@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BA944 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int SynchronizationCommitHandle; // edi
  struct CAnimationTriggerProxy *v3; // rbx
  __int64 v4; // r14
  struct _GUID *v7; // rsi
  __int64 v8; // rax
  struct _GUID v10; // xmm0
  CAnimationClockCoordinator *v11; // rdi
  DWORD CurrentProcessId; // eax
  HANDLE hObject; // [rsp+20h] [rbp-30h] BYREF
  HANDLE v14; // [rsp+28h] [rbp-28h] BYREF
  struct _GUID v15; // [rsp+30h] [rbp-20h] BYREF

  SynchronizationCommitHandle = 0;
  v3 = 0LL;
  hObject = 0LL;
  v4 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      if ( SynchronizationCommitHandle < 0 )
        break;
      v7 = *(struct _GUID **)(*((_QWORD *)this + 2) + 8 * v4);
      v15 = v7[3];
      v8 = *(_QWORD *)&v15.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&v15.Data1 == *(_QWORD *)&a2->Data1 )
        v8 = *(_QWORD *)v15.Data4 - *(_QWORD *)a2->Data4;
      if ( !v8
        && *(_DWORD *)v7[1].Data4 != 4
        && (CStoryboard::UseDComposition((CStoryboard *)v7)
         || (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7)) )
      {
        if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
          && (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7) )
        {
          v11 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &hObject,
            0LL);
          CurrentProcessId = GetCurrentProcessId();
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                          v11,
                                          a2,
                                          CurrentProcessId,
                                          &hObject);
        }
        if ( v3 )
          goto LABEL_29;
        if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
        {
          v10 = *a2;
          v14 = 0LL;
          v15 = v10;
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 25),
                                          &v15,
                                          &v14);
          if ( SynchronizationCommitHandle >= 0 )
          {
            *(_QWORD *)&v15.Data1 = 0LL;
            SynchronizationCommitHandle = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
                                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                            (__int64)v14,
                                            (volatile signed __int32 **)&v15);
            CloseHandle(v14);
            v3 = *(struct CAnimationTriggerProxy **)&v15.Data1;
            if ( *(_QWORD *)&v15.Data1 )
            {
LABEL_29:
              if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
                CStoryboard::SetStartTrigger((CStoryboard *)v7, v3);
            }
          }
        }
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
          && (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7) )
        {
          (*(void (__fastcall **)(struct _GUID *, HANDLE))(*(_QWORD *)&v7->Data1 + 56LL))(v7, hObject);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 10) );
    if ( v3 )
      CBaseObject::Release(v3);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  return (unsigned int)SynchronizationCommitHandle;
}
