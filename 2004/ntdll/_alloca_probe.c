/*
 * XREFs of _alloca_probe @ 0x1800A2060
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlQueryWnfStateData @ 0x180044F20 (RtlQueryWnfStateData.c)
 *     RtlUnwind @ 0x180050DC0 (RtlUnwind.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180051660 (RtlpWalkFrameChain.c)
 *     RtlWow64GetProcessMachines @ 0x18007AD00 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x18007C5A0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180083BF0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x18009A5FC (ReadStringDelimited_1.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     RtlValidateProcessHeaps @ 0x1800F2FB0 (RtlValidateProcessHeaps.c)
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
