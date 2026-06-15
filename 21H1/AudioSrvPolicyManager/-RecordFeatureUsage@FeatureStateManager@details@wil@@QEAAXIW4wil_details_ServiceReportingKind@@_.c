/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800086B4
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180009090 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180008560 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180008BB4 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180008C64 (-EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18000D460 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18000D498 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  char v10; // bl
  int v11; // eax

  if ( *a1 && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)a1) )
  {
    v8 = *((_QWORD *)a1 + 3);
    if ( a3 == 254 )
    {
      wil::details_abi::FeatureStateData::RecordUsage(*((PSRWLOCK *)a1 + 3));
      v10 = 1;
    }
    else
    {
      if ( a3 >= 0xC8 && ((int)a3 < 256 || a3 >= 0x200) )
        return;
      AcquireSRWLockExclusive(*((PSRWLOCK *)a1 + 3));
      if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
      {
        wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(v8 + 8, a3, a2);
        v10 = *(_BYTE *)(v8 + 64);
      }
      else
      {
        v10 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                v8 + 72,
                a3,
                a2,
                a4);
      }
      if ( v8 )
        ReleaseSRWLockExclusive((PSRWLOCK)v8);
    }
    if ( v10 && !wil::details::g_processShutdownInProgress )
    {
      v11 = (int)wil::details::g_pfnDllShutdownInProgress;
      if ( wil::details::g_pfnDllShutdownInProgress )
        v11 = wil::details::g_pfnDllShutdownInProgress();
      if ( !v11 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)a1 + 4);
        wil::details::FeatureStateManager::EnsureTimerUnderLock(a1);
        if ( a1 != (_BYTE *)-32LL )
          ReleaseSRWLockExclusive((PSRWLOCK)a1 + 4);
      }
    }
  }
}
