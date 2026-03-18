/*
 * XREFs of CmInitSystem2 @ 0x140B2359C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MmLockRegistryRecoverySections @ 0x140582708 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     CmpRegisterTraceLoggingProvider @ 0x14084F7E4 (CmpRegisterTraceLoggingProvider.c)
 *     CmFcInitSystem3 @ 0x140B0183C (CmFcInitSystem3.c)
 */

int CmInitSystem2()
{
  int result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  result = IoCreateDriver(&v1, (__int64 (__fastcall *)(void **, _QWORD))VRegSetup);
  if ( result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, result, 0LL, 0LL);
  if ( CmBugcheckRecoveryEnabled )
    return MmLockRegistryRecoverySections();
  return result;
}
