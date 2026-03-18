/*
 * XREFs of IopCancelSynchronousIrpsForThread @ 0x140893C10
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x140897140 (NtCancelSynchronousIoFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x1402ECE74 (IopCancelApcRequired.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x1406C2AC8 (IopCancelIrpsInThreadList.c)
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
