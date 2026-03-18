/*
 * XREFs of IopCancelSynchronousIrpsForThread @ 0x14088E0C0
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x140891650 (NtCancelSynchronousIoFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x1402D814C (IopCancelApcRequired.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x1406EEBA8 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelSynchronousIrpsForThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[19]; // [rsp+20h] [rbp-98h] BYREF

  result = IopCancelApcRequired(a1, 0LL, a2);
  if ( (_DWORD)result )
  {
    memset(v5, 0, 0x88uLL);
    v5[12] = a2;
    LOBYTE(v5[16]) = 1;
    KeInitializeEvent((PRKEVENT)&v5[13], NotificationEvent, 0);
    return IopCancelIrpsInThreadList(a1, (__int64)v5);
  }
  return result;
}
