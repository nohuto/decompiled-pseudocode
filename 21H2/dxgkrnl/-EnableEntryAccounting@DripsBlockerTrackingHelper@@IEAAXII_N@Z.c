/*
 * XREFs of ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C02FBC90
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FADA0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02FBB6C (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02FBD34 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C02FE70C (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEBB0 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C02FA9A8 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rdi

  v5 = 4720LL * a2;
  v6 = a3;
  if ( a4 )
  {
    v7 = (char *)this + v5;
    v8 = 9LL * a3;
    if ( !v7[72 * a3 + 112] && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)&v7[72 * a3 + 120] = KeQueryPerformanceCounter(0LL);
      v7[8 * v8 + 112] = 1;
    }
  }
  else if ( *((_BYTE *)this + 72 * a3 + v5 + 112) == 1 )
  {
    DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
    *((_BYTE *)this + 72 * v6 + v5 + 112) = 0;
    *(_DWORD *)((char *)this + 72 * v6 + v5 + 144) = 0;
  }
}
