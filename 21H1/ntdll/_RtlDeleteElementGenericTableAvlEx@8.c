/*
 * XREFs of _RtlDeleteElementGenericTableAvlEx@8 @ 0x4B2A6E00
 * Callers:
 *     _RtlDeleteElementGenericTableAvl@8 @ 0x4B2A6DC0 (_RtlDeleteElementGenericTableAvl@8.c)
 * Callees:
 *     _DeleteNodeFromTree@8 @ 0x4B2A6E48 (_DeleteNodeFromTree@8.c)
 *     _RealPredecessor@4 @ 0x4B2A71B7 (_RealPredecessor@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlDeleteElementGenericTableAvlEx(int a1, int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 32) )
    *(_DWORD *)(a1 + 32) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 36);
  DeleteNodeFromTree(a1, a2);
  --*(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  return (*(int (__thiscall **)(_DWORD, int, int))(a1 + 48))(*(_DWORD *)(a1 + 48), a1, a2);
}
