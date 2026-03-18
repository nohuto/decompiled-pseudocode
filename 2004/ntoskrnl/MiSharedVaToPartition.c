/*
 * XREFs of MiSharedVaToPartition @ 0x1402B8FC8
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1402B7DE0 (MiCreateSharedZeroPages.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  _KPROCESS *v12; // rcx
  __int64 CloneAddress; // rax
  __int64 **Address; // rax
  __int64 *v15; // rax
  char v16; // al
  _QWORD *v17; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rdx
  __int64 v21; // rax

  if ( !byte_140C4E45C )
    return &MiSystemPartition;
  v7 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = v8;
  if ( (v8 & 0x400) != 0 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v8) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    v16 = *(_BYTE *)(a1 + 184) & 7;
    if ( v16 == 4 )
    {
      v17 = &unk_140C4CB68;
    }
    else
    {
      if ( v16 != 1 )
        return (ULONG_PTR *)v7;
      Process = KeGetCurrentThread()->ApcState.Process;
      v19 = Process[1].AffinityPadding[5];
      if ( !v19 )
        return (ULONG_PTR *)v7;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        return (ULONG_PTR *)v7;
      v17 = (_QWORD *)(v19 + 192);
      if ( !v17 )
        return (ULONG_PTR *)v7;
    }
    v20 = (_QWORD *)v17[2];
    while ( v20 )
    {
      v11 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v11 + v20[4] )
      {
        v20 = (_QWORD *)v20[1];
      }
      else
      {
        if ( a2 >= v11 )
        {
          v15 = (__int64 *)v20[6];
          goto LABEL_31;
        }
        v20 = (_QWORD *)*v20;
      }
    }
    v21 = MiSessionLookupImage(a2, 0LL, v11);
    if ( !v21 )
      return (ULONG_PTR *)v7;
    v15 = (__int64 *)(v21 + 80);
LABEL_31:
    if ( *v15 )
      return *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*v15 + 60) & 0x3FF));
    return (ULONG_PTR *)v7;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v11, v9, v11, v10) )
    goto LABEL_13;
  v12 = KeGetCurrentThread()->ApcState.Process;
  if ( !v12[1].Affinity.Bitmap[12] || (CloneAddress = MiLocateCloneAddress(v12, a3)) == 0 )
  {
    v7 = 0LL;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(CloneAddress + 56) + 24LL);
  if ( !v7 )
  {
LABEL_13:
    Address = MiLocateAddress(a2);
    if ( !Address )
      return (ULONG_PTR *)v7;
    if ( ((_DWORD)Address[6] & 0x100000) != 0 )
      return (ULONG_PTR *)v7;
    v15 = Address[9];
    if ( !v15 )
      return (ULONG_PTR *)v7;
    goto LABEL_31;
  }
  return (ULONG_PTR *)v7;
}
