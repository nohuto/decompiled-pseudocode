/*
 * XREFs of CmInitSystem2 @ 0x140A6FC5C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1407BE5D4 (CmpRegisterTraceLoggingProvider.c)
 *     CmFcInitSystem3 @ 0x140A35450 (CmFcInitSystem3.c)
 */

int CmInitSystem2()
{
  int result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  result = IoCreateDriver(&v1, (_DMA_OPERATIONS *)VRegSetup);
  if ( result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, result, 0LL, 0LL);
  return result;
}
