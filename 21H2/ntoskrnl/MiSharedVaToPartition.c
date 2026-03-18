/*
 * XREFs of MiSharedVaToPartition @ 0x14033D80C
 * Callers:
 *     MiCreateSharedZeroPages @ 0x14033C5F0 (MiCreateSharedZeroPages.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  _KPROCESS *Process; // rcx
  _QWORD *CloneAddress; // rax
  __int64 **Address; // rdi
  __int64 *v13; // rax
  char v14; // al
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  _KPROCESS *v17; // rcx
  _QWORD *v18; // rax

  if ( !byte_140C52954 )
    return &MiSystemPartition;
  v7 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v8;
  if ( (v8 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v8) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 < 0xFFFF800000000000uLL )
  {
    if ( !MiIsPrototypePteVadLookup(v9) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[12] && (CloneAddress = MiLocateCloneAddress((__int64)Process, a3)) != 0LL )
      {
        v7 = *(_QWORD *)(CloneAddress[7] + 24LL);
        if ( v7 )
          return (ULONG_PTR *)v7;
      }
      else
      {
        v7 = 0LL;
      }
    }
    MiLockVadTree(1);
    Address = MiLocateAddress(a2);
    MiUnlockVadTree(1, 0x11u);
    if ( !Address )
      return (ULONG_PTR *)v7;
    if ( ((_DWORD)Address[6] & 0x200000) != 0 )
      return (ULONG_PTR *)v7;
    v13 = Address[9];
    if ( !v13 )
      return (ULONG_PTR *)v7;
LABEL_31:
    if ( *v13 )
      return *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(*v13 + 60) & 0x3FF));
    return (ULONG_PTR *)v7;
  }
  v14 = *(_BYTE *)(a1 + 184) & 7;
  if ( v14 == 4 )
  {
    v15 = P;
    while ( v15 )
    {
      v16 = v15[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v16 + v15[4] )
      {
        if ( a2 >= v16 )
        {
          v13 = (__int64 *)v15[6];
          goto LABEL_31;
        }
        v15 = (_QWORD *)*v15;
      }
      else
      {
        v15 = (_QWORD *)v15[1];
      }
    }
    return (ULONG_PTR *)v7;
  }
  if ( v14 == 1 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process;
    if ( v17[1].Affinity.StaticBitmap[25] )
    {
      if ( (HIDWORD(v17[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        v18 = MiSessionLookupImage(a2);
        if ( v18 )
        {
          v13 = v18 + 10;
          goto LABEL_31;
        }
      }
    }
  }
  return (ULONG_PTR *)v7;
}
