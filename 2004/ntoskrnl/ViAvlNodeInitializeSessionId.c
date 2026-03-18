/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14036F8EC
 * Callers:
 *     VfAvlReserveNode @ 0x14036F860 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x140370234 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (LOBYTE(v3) = MmIsSessionAddress(*(_QWORD *)a2), v3) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
