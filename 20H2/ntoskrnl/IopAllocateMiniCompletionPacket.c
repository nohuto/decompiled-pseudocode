/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x14070AE4C
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 *     IoAllocateMiniCompletionPacket @ 0x14070AE10 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 */

_BYTE *__fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  _BYTE *result; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  SIZE_T v8; // rdx

  v3 = a1;
  if ( a1 == 4 )
  {
    v8 = 80LL;
LABEL_7:
    result = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v8, 0x20706349u, LowPoolPriority);
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[7].L;
  ++L->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result )
    goto LABEL_3;
  ++L->AllocateMisses;
  if ( !a2 )
  {
    v8 = 56LL;
    goto LABEL_7;
  }
  v3 = 3;
  result = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 0x38uLL, 0x20706349u);
LABEL_8:
  if ( result )
LABEL_3:
    result[16] = v3;
  return result;
}
