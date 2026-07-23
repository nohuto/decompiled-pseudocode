/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x1408C20AC
 * Callers:
 *     LpcRequestWaitReplyPort @ 0x1408C1D60 (LpcRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPortEx @ 0x1408C1D80 (LpcRequestWaitReplyPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(__int64 a1, __int128 *a2, unsigned __int64 a3, __int64 a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 1179650;
  if ( a5 != 1 )
    v7 = 131074;
  v8 = AlpcpProcessSynchronousRequest(a1, v7, a2, 0LL, a3, 0LL, 0LL, 0LL, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( v8 == -1073740029 )
    v8 = -1073741769;
  if ( v8 == -1073740031 )
    return (unsigned int)-1073741229;
  return v8;
}
