/*
 * XREFs of PipFreeGroupTree @ 0x140A5E5B8
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140A5E5B8 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140A5E5B8 (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
