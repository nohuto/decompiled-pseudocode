/*
 * XREFs of IoMmuDeletePage @ 0x1C002863C
 * Callers:
 *     IoMmuDeleteTreeNode @ 0x1C0056F9C (IoMmuDeleteTreeNode.c)
 *     IoMmuUpdatePfn @ 0x1C0057520 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuDeletePage(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
