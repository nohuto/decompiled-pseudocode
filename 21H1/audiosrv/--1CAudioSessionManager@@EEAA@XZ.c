/*
 * XREFs of ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CE668
 * Callers:
 *     ??_ECAudioSessionManager@@EEAAPEAXI@Z @ 0x1800CEB40 (--_ECAudioSessionManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002CB20 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C3370 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C37D4 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800C8018 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CE49C (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800CEB7C (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?GetValueAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@PEAU__POSITION@@@Z @ 0x1800D0004 (-GetValueAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x1800D0738 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800D07DC (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800D089C (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  CAudioSessionManager *v1; // rdi
  char *v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 StartPosition; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  int i; // r14d
  CAudioSession **v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // r14
  __int64 *v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rcx
  char *v14; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v15; // [rsp+28h] [rbp-60h] BYREF
  void *v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A8h] [rbp+20h]

  v1 = this;
  *(_QWORD *)this = &CAudioSessionManager::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x30u, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
  }
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v2 = (char *)v1 + 16;
  v14 = (char *)v1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 16));
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 16);
  v23 = (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 16);
  while ( 1 )
  {
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v1 + 56);
    v6 = StartPosition;
    if ( !StartPosition )
      break;
    v21 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetValueAt(
                       v5,
                       StartPosition);
    v22 = v21;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      (char *)v1 + 56,
      v6);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids);
    }
    (*(void (__fastcall **)(__int64, CAudioSessionManager *))(*(_QWORD *)v21 + 232LL))(v21, v1);
    (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v21 + 232LL))(
      v21,
      g_PolicyEventsHandler);
    try
    {
      ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v16, &v22);
    }
    catch ( ATL::CAtlException *v15 )
    {
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v1 = this;
      v3 = v23;
      v2 = v14;
      continue;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v3);
  for ( i = 0; i < (int)v17; ++i )
  {
    v8 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v16, i);
    CAudioSession::ForceExpire(*v8);
    v9 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v16, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(&v16);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)v1 + 37) - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  while ( *((_QWORD *)v1 + 30) )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      (char *)v1 + 232,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)v1 + 33);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)v1 + 29);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 192));
  v10 = (__int64 *)*((_QWORD *)v1 + 21);
  if ( v10 )
  {
    v11 = (__int64 *)*((_QWORD *)v1 + 22);
    v12 = (__int64 *)*((_QWORD *)v1 + 21);
    if ( v10 != v11 )
    {
      do
      {
        v13 = *v12;
        if ( *v12 )
        {
          *v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ++v12;
      }
      while ( v12 != v11 );
    }
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)v1 + 23) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)v1 + 21) = 0LL;
    *((_QWORD *)v1 + 22) = 0LL;
    *((_QWORD *)v1 + 23) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 128));
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll((char *)v1 + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 16));
  *((_DWORD *)v1 + 3) = -1073741823;
}
