/*
 * XREFs of IoMmuDeletePage @ 0x1C0026CB0
 * Callers:
 *     IoMmuDeleteTreeNode @ 0x1C005608C (IoMmuDeleteTreeNode.c)
 *     IoMmuUpdatePfn @ 0x1C0056610 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuDeletePage(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
