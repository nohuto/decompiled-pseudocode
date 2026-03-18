/*
 * XREFs of PipFreeGroupTree @ 0x140A4F61C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140A4F61C (PipFreeGroupTree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     PipFreeGroupTree @ 0x140A4F61C (PipFreeGroupTree.c)
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
