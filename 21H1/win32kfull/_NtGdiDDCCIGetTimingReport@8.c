/*
 * XREFs of _NtGdiDDCCIGetTimingReport@8 @ 0x1D0095
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z @ 0x1CF71B (-DdcciGetTimingReport@CMonitorAPI@@QAEJPAXPAU_MC_TIMING_REPORT@@@Z.c)
 */

int __thiscall NtGdiDDCCIGetTimingReport(CMonitorAPI *this, void *a2, _DWORD *Address)
{
  int TimingReport; // edi
  int v5; // [esp+10h] [ebp-24h] BYREF
  int v6; // [esp+14h] [ebp-20h]
  char v7; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  TimingReport = CMonitorAPI::DdcciGetTimingReport(this, a2, (struct _MC_TIMING_REPORT *)&v5);
  if ( TimingReport >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 9u, 1u);
    *((_BYTE *)Address + 8) = v7;
    *Address = v5;
    Address[1] = v6;
    ms_exc.registration.TryLevel = -2;
  }
  return TimingReport;
}
