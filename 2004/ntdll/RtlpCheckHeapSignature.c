/*
 * XREFs of RtlpCheckHeapSignature @ 0x18005E4C0
 * Callers:
 *     RtlValidateHeap @ 0x18005E080 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005E390 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E430 (RtlUnlockHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8640 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F89FC (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F8E44 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800F8F88 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F904C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9340 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F94E4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9630 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9BB4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800F9D80 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800F9F14 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA098 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA128 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800FA24C (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
