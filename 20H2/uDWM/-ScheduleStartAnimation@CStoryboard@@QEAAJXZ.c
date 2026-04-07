/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180034AF4
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180034A24 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008028 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x18000939C (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180030168 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180034CD0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180034DD8 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180034E80 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800355B4 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  char v2; // r12
  CAnimationEngine *v3; // r14
  int v4; // ebx
  int *v5; // rax
  unsigned int v6; // r10d
  unsigned int v7; // edx
  __int64 v8; // r15
  int v9; // r13d
  unsigned int v10; // r8d
  __int64 v11; // r9
  int v12; // eax
  int started; // eax
  __int64 v14; // rdx
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = 0LL;
  v4 = -2147467259;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_29;
  if ( !*((_DWORD *)this + 28) )
  {
    v2 = 1;
    goto LABEL_15;
  }
  v3 = CDesktopManager::AcquireAnimationEngine();
  if ( !v3 )
    goto LABEL_29;
  v5 = (int *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v19 = 0;
  v6 = 0;
  v7 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v9 = *v5;
  v18 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v10 = v7 + 1;
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v8) + 40LL);
      v21 = v11;
      if ( v7 + 1 < v7 )
        break;
      if ( v10 <= v6 )
      {
        v16 = v7++;
        HIDWORD(v20) = v10;
        *(_QWORD *)(v18 + 8 * v16) = v11;
      }
      else
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v18, 8u, 1, &v21);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
        if ( v4 < 0 )
          goto LABEL_25;
        v7 = HIDWORD(v20);
        v6 = v20;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_12;
    }
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x15D8u);
    goto LABEL_14;
  }
LABEL_12:
  started = CAnimationEngine::ScheduleStartAnimation(v3, v9);
  v4 = started;
  if ( started < 0 )
  {
    v17 = 5594;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v14);
    if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 128LL))(this) )
      goto LABEL_14;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v4 = started;
    if ( started >= 0 )
      goto LABEL_14;
    v17 = 5599;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, started, v17);
LABEL_14:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v18);
LABEL_15:
  if ( v4 >= 0 && !v2 )
  {
    CStoryboard::_NotifyStoryboardState(this, 3LL);
    (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 40LL))(this);
    goto LABEL_18;
  }
LABEL_29:
  CStoryboard::Abandon(this);
LABEL_18:
  if ( v3 )
    CAnimationEngine::Release(v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v4;
}
