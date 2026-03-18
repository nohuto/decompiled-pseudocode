/*
 * XREFs of IoMmuDeletePage @ 0x1C0026D28
 * Callers:
 *     IoMmuDeleteTreeNode @ 0x1C005614C (IoMmuDeleteTreeNode.c)
 *     IoMmuUpdatePfn @ 0x1C00566D0 (IoMmuUpdatePfn.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuDeletePage(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0);
}
