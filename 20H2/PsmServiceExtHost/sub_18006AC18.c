/*
 * XREFs of sub_18006AC18 @ 0x18006AC18
 * Callers:
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 * Callees:
 *     sub_180070460 @ 0x180070460 (sub_180070460.c)
 */

BOOLEAN __fastcall sub_18006AC18(_QWORD *a1)
{
  BOOLEAN result; // al
  void *v3; // r8
  void *v4; // r8

  result = sub_180070460(a1 + 2);
  if ( a1[320] )
    result = TpReleasePool();
  v3 = (void *)a1[317];
  if ( v3 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  v4 = (void *)a1[319];
  if ( v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return result;
}
