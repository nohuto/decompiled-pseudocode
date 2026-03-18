/*
 * XREFs of LpcRequestPort @ 0x1406B16A0
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     memset @ 0x14040A280 (memset.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6[0] = a1;
  LODWORD(v6[6]) = 65538;
  LODWORD(a1) = AlpcpSendMessage((__int64)v6, a2, 0LL, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)a1;
}
