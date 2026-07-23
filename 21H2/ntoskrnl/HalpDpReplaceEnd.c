/*
 * XREFs of HalpDpReplaceEnd @ 0x1408667D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDpReplaceEnd(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x206C6148u);
  ExFreePoolWithTag(P, 0x206C6148u);
  return 0LL;
}
