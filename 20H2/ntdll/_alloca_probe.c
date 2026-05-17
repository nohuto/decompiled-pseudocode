/*
 * XREFs of _alloca_probe @ 0x1800A2300
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlQueryWnfStateData @ 0x180044F70 (RtlQueryWnfStateData.c)
 *     RtlUnwind @ 0x180050E10 (RtlUnwind.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051260 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1800516B0 (RtlpWalkFrameChain.c)
 *     RtlWow64GetProcessMachines @ 0x18007AE00 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007C6A0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083CF0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x18009A6FC (ReadStringDelimited_1.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     RtlValidateProcessHeaps @ 0x1800F34C0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
