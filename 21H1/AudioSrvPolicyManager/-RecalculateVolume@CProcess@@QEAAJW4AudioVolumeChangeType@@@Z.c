/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18001BAC0
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180016160 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180017E78 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180035B60 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  AudioStateMonitorManager *v6; // rcx
  int v8; // [rsp+20h] [rbp-40h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-20h] BYREF
  char v10; // [rsp+48h] [rbp-18h]
  LPCRITICAL_SECTION v11; // [rsp+50h] [rbp-10h] BYREF
  char v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF

  v11 = (LPCRITICAL_SECTION)(a1 + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v11);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 144);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
    {
      v13 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
             v5,
             &GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4,
             &v13) >= 0 )
      {
        LOBYTE(v8) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v13 + 24LL))(
          v13,
          a2,
          0LL,
          0xFFFFFFFFLL,
          v8,
          0LL);
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v6 = *(AudioStateMonitorManager **)(a1 + 736);
  if ( v6 )
    AudioStateMonitorManager::RecalculateVolume(v6);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v12 )
    LeaveCriticalSection(v11);
  return 0LL;
}
