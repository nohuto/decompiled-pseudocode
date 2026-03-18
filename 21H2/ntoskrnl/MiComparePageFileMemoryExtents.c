/*
 * XREFs of MiComparePageFileMemoryExtents @ 0x140599764
 * Callers:
 *     MiFindPageFileMemoryExtent @ 0x140599D58 (MiFindPageFileMemoryExtent.c)
 *     MiMovePageFileMemoryExtents @ 0x14059A35C (MiMovePageFileMemoryExtents.c)
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComparePageFileMemoryExtents(_DWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_DWORD *)(a2 + 28) )
    return (unsigned int)-(*a1 < *(_DWORD *)(a2 + 24));
  else
    return 1LL;
}
