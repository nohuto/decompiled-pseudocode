/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x1408BD68C
 * Callers:
 *     LpcRequestWaitReplyPort @ 0x1408BD370 (LpcRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPortEx @ 0x1408BD390 (LpcRequestWaitReplyPortEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edx
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
