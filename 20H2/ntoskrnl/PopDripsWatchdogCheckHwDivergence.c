/*
 * XREFs of PopDripsWatchdogCheckHwDivergence @ 0x1408F1958
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408F1A30 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopDripsWatchdogCheckHwDivergence(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-20h]

  if ( a2 > a1 )
  {
    result = (unsigned int)PopDripsSwHwDivergenceThreshold;
    if ( (unsigned int)PopDripsSwHwDivergenceThreshold < (a2 - a1) / 0xF4240 )
    {
      v3 = a2;
      v4 = a1;
      result = ZwUpdateWnfStateData((__int64)&WNF_PO_SW_HW_DRIPS_DIVERGENCE, (__int64)&v3);
      if ( PopDripsSwHwDivergenceEnableLiveDump )
        return DbgkWerCaptureLiveKernelDump(L"DripsDiverge", 420, v3, v4, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
