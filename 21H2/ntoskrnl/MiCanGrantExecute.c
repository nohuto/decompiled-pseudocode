/*
 * XREFs of MiCanGrantExecute @ 0x1405A6DAC
 * Callers:
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  __int64 **Address; // rbx
  int v5; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    if ( *(_WORD *)(a1 + 2412) == 332 )
    {
      if ( (KeFeatureBits & 0x40000000) != 0
        || (v3 = *(_BYTE *)(a1 + 643), (v3 & 2) != 0)
        || (KeFeatureBits & 0x80000000) == 0 && (v3 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 2172) & 1) == 0 )
          return 1;
        MiLockVadTree(1);
        Address = MiLocateAddress(a2);
        MiUnlockVadTree(1, 0x11u);
        if ( Address )
        {
          v5 = *((_DWORD *)Address + 12);
          if ( (v5 & 0x70) != 0x30 && ((v5 & 0x70) != 0x20 || (v5 & 0xF80) != 0x80) )
            return 1;
        }
      }
    }
  }
  return result;
}
