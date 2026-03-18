/*
 * XREFs of MiAdvanceToLastUntrimmableVa @ 0x140252ED0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14031B1C0 (MiComputePxeWalkAction.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 */

unsigned __int64 __fastcall MiAdvanceToLastUntrimmableVa(unsigned __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  unsigned __int64 Address; // r10
  int v5; // eax
  _QWORD **v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx

  v2 = 0;
  MiLockVadTree(1LL);
  Address = MiLocateAddress(a1);
  while ( Address )
  {
    v5 = *(_DWORD *)(Address + 48);
    v3 = v5 & 0x70;
    if ( (((_DWORD)v3 - 16) & 0xFFFFFFDF) != 0
      && ((v5 & 0x200000) == 0 || (v5 & 0x800000) == 0 && (v5 & 0x180000u) < 0x100000)
      && (_DWORD)v3 != 80 )
    {
      break;
    }
    ++v2;
    a1 = ((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12) | 0xFFF;
    if ( v2 > 0x100 )
      break;
    v7 = *(_QWORD ***)(Address + 8);
    v8 = Address;
    if ( v7 )
    {
      v9 = *v7;
      for ( Address = *(_QWORD *)(Address + 8); v9; v9 = (_QWORD *)*v9 )
        Address = (unsigned __int64)v9;
    }
    else
    {
      while ( 1 )
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Address || *(_QWORD *)Address == v8 )
          break;
        v8 = Address;
      }
    }
  }
  LOBYTE(v3) = 17;
  MiUnlockVadTree(1LL, v3);
  return a1;
}
