/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14036ECBC
 * Callers:
 *     VfAvlReserveNode @ 0x14036EC30 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14036F604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
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
