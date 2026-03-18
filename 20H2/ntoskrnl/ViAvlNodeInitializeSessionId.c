/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14037183C
 * Callers:
 *     VfAvlReserveNode @ 0x1403717B0 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
