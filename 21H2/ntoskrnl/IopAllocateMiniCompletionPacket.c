/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x1407D57AC
 * Callers:
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407D56C0 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 result; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  int v8; // edx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  v9 = 0LL;
  if ( a1 == 4 )
  {
    v8 = 80;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalAllocates;
    result = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[7].L;
    ++L->TotalAllocates;
    result = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result )
      goto LABEL_3;
    ++L->AllocateMisses;
    v8 = 56;
    if ( a2 )
    {
      v3 = 3;
      result = ExAllocatePool2(65LL, 56LL, 544236361LL);
      goto LABEL_9;
    }
  }
  DWORD2(v9) = 0;
  LOBYTE(v9) = 1;
  result = ExAllocatePool3(64, v8, 544236361, (unsigned int)&v9, 1);
LABEL_9:
  if ( result )
LABEL_3:
    *(_BYTE *)(result + 16) = v3;
  return result;
}
