/*
 * XREFs of RtlpCheckHeapSignature @ 0x18005FAC0
 * Callers:
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005F990 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA30 (RtlUnlockHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F89A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8D5C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F91A4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800F92E8 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F96A0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9844 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA0E0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA274 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA3F8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA488 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800FA5AC (RtlpBreakPointHeap.c)
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
