/*
 * XREFs of ?ResetHeap@UMPDOBJ@@QAEXXZ @ 0xF700F
 * Callers:
 *     ?UMPDAllocUserMem@UMPDOBJ@@QAEPAXK@Z @ 0x20AAEE (-UMPDAllocUserMem@UMPDOBJ@@QAEPAXK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall UMPDOBJ::ResetHeap(UMPDOBJ *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 52);
  if ( v1 )
    *(_DWORD *)(v1 + 28) = 0;
}
