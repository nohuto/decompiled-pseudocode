/*
 * XREFs of InitDriver @ 0x1C003603C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     AllowSchedulerDirectedPerfStates @ 0x1C00020F4 (AllowSchedulerDirectedPerfStates.c)
 *     IsACountMCountSupported @ 0x1C0002324 (IsACountMCountSupported.c)
 *     GetCpuIdInfo @ 0x1C000EA60 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C001EF54 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C00211A8 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  char v6[8]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 88) = SetFFHPStateHidden;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( IsACountMCountSupported() )
  {
    v4 = 603979776LL;
    *(_QWORD *)(a1 + 120) = ACountMCountHardwareFeedback;
  }
  v7 = 0LL;
  v8 = 0LL;
  GetCpuIdInfo(0x80000000, &v7);
  if ( (unsigned int)v7 >= 7 )
  {
    GetCpuIdInfo(0x80000007, &v8);
    if ( (WORD6(v8) & 0x200) != 0 )
      *(_QWORD *)(a1 + 144) = SetPerformanceBoostMode;
  }
  if ( IsACountMCountSupported() && AllowSchedulerDirectedPerfStates() )
    v4 |= 0x400000uLL;
  v6[0] = IsMonitorMWaitSupported();
  if ( v6[0] || (GetHvPpmCapabilities(0LL, 0LL, v6), v6[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  v8 = 0LL;
  v7 = 0LL;
  GetCpuIdInfo(0x80000000, &v8);
  if ( (unsigned int)v8 >= 8 )
  {
    GetCpuIdInfo(0x80000008, &v7);
    if ( (DWORD1(v7) & 0x8000000) != 0 )
      *(_QWORD *)(a1 + 168) = GetCppcRequestMsrPerfControlHandler;
  }
  if ( qword_1C00136E0 && qword_1C00136E8 && qword_1C00136F0 && qword_1C00136F8 )
    v4 |= 0x200000000000uLL;
  *a2 |= v4;
  *(_QWORD *)(a1 + 184) = InitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 192) = UnInitEnergyCountersOnCurrentProcessor;
  result = 0LL;
  *(_DWORD *)(a1 + 216) = -1073676190;
  *(_QWORD *)(a1 + 224) = -16LL;
  return result;
}
