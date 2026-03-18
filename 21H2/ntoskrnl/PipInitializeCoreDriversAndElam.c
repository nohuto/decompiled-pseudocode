/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140B10CAC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B0EFD8 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B10D98 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x140B10F48 (PipInitializeDriverDependentDLLs.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140B12720 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 *     KeInitAmd64SpecificState @ 0x140B12A50 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  qword_140C02BF0 = (__int64)off_140C020D8;
  qword_140C02BF8 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x140uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  VslRegisterBootDrivers();
  VslConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1, v2);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
