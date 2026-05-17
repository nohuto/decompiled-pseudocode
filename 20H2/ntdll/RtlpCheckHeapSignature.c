/*
 * XREFs of RtlpCheckHeapSignature @ 0x18005E5D0
 * Callers:
 *     RtlValidateHeap @ 0x18005E190 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005E4A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E540 (RtlUnlockHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8B50 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8F0C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9354 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800F9498 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F955C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9850 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FA0C4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA290 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA5A8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800FA75C (RtlpBreakPointHeap.c)
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
