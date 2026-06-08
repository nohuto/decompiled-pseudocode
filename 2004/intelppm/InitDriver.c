/*
 * XREFs of InitDriver @ 0x1C003B2B4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003B758 (ProcLibGlobalInit.c)
 * Callees:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001D14 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001D90 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0001E04 (IsHwpSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0001E78 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001EF0 (IsHwpNativeInterruptSupported.c)
 *     IsTurboModeSupported @ 0x1C0004200 (IsTurboModeSupported.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00044B0 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C002070C (IsMonitorMWaitSupported.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020924 (GetRegistryDwordValueNoDefault.c)
 *     GetHvPpmCapabilities @ 0x1C002F8E8 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v6; // r14
  __int64 v7; // rdi
  char v9[4]; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v11; // [rsp+28h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-18h] BYREF

  v4 = 12223;
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
    v4 = 16319;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v5 = 572522496LL;
  *(_WORD *)(a1 + 32) = 12;
  v6 = 0;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  v12 = 0LL;
  v11 = 0LL;
  GetCpuIdInfo(0, &v12);
  if ( (unsigned int)v12 >= 6 )
  {
    GetCpuIdInfo(6u, &v11);
    if ( (BYTE8(v11) & 1) != 0 )
    {
      v5 = 639631360LL;
      *(_QWORD *)(a1 + 120) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
      {
        v6 = 1;
        v5 = 0x8026200000LL;
      }
    }
  }
  v11 = 0LL;
  GetCpuIdInfo(1u, &v11);
  if ( (HIDWORD(v11) & 0x400000) != 0 )
    *(_QWORD *)(a1 + 128) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 136) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
      *(_QWORD *)(a1 + 112) = GetGV3PerfStateFlags;
      *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
    }
    else
    {
      v6 = 0;
      *(_QWORD *)(a1 + 144) = SetTurboDisablePolicy;
    }
  }
  v7 = v5 | 0x400000;
  if ( !v6 )
    v7 = v5;
  v9[0] = IsMonitorMWaitSupported();
  if ( v9[0] || (GetHvPpmCapabilities(0LL, 0LL, v9), v9[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v7 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 152) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 168) = GetHwpPerfControlHandler;
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v7 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 160) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 176) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_DWORD *)(a1 + 216) = 409;
  *(_QWORD *)(a1 + 224) = -65536LL;
  *(_DWORD *)(a1 + 232) = 410;
  if ( qword_1C001C700 && qword_1C001C708 && qword_1C001C710 && qword_1C001C718 )
    v7 |= 0x200000000000uLL;
  if ( dword_1C001CC18 == 2 )
  {
    v10 = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
                (__int64)L"Count",
                (__int64)&v10) >= 0 )
    {
      if ( v10 )
        *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
    }
  }
  *(_QWORD *)(a1 + 184) = InitEnergyCounters;
  *(_QWORD *)(a1 + 192) = UnInitEnergyCounters;
  *a2 |= v7;
  return 0LL;
}
