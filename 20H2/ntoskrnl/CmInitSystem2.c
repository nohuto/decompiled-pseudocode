/*
 * XREFs of CmInitSystem2 @ 0x140A48A08
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpRegisterTraceLoggingProvider @ 0x140794260 (CmpRegisterTraceLoggingProvider.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     CmFcInitSystem3 @ 0x140A3B450 (CmFcInitSystem3.c)
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
