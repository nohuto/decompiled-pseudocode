/*
 * XREFs of sub_180070460 @ 0x180070460
 * Callers:
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_18006AC18 @ 0x18006AC18 (sub_18006AC18.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_180070460(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  BOOLEAN result; // al

  v1 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  v3 = *(void **)(a1 + 8);
  result = RtlReleaseSRWLockExclusive(v1);
  if ( v3 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return result;
}
