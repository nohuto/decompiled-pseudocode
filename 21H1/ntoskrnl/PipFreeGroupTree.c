/*
 * XREFs of PipFreeGroupTree @ 0x140A581B8
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140A581B8 (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140A581B8 (PipFreeGroupTree.c)
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
