/*
 * XREFs of MiSharedVaToPartition @ 0x14028EF98
 * Callers:
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 * Callees:
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 */

ULONG_PTR *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  _KPROCESS *v10; // rcx
  __int64 CloneAddress; // rax
  __int64 **Address; // rax
  __int64 *v13; // rax
  char v14; // al
  _QWORD *v15; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rax

  if ( !byte_140C4E4DC )
    return &MiSystemPartition;
  v7 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v8;
  if ( (v8 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v8) )
    return **(ULONG_PTR ***)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    v14 = *(_BYTE *)(a1 + 184) & 7;
    if ( v14 == 4 )
    {
      v15 = &unk_140C4CBE8;
    }
    else
    {
      if ( v14 != 1 )
        return (ULONG_PTR *)v7;
      Process = KeGetCurrentThread()->ApcState.Process;
      v17 = Process[1].AffinityPadding[5];
      if ( !v17 )
        return (ULONG_PTR *)v7;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        return (ULONG_PTR *)v7;
      v15 = (_QWORD *)(v17 + 192);
      if ( !v15 )
        return (ULONG_PTR *)v7;
    }
    v18 = (_QWORD *)v15[2];
    while ( v18 )
    {
      v19 = v18[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v19 + v18[4] )
      {
        v18 = (_QWORD *)v18[1];
      }
      else
      {
        if ( a2 >= v19 )
        {
          v13 = (__int64 *)v18[6];
          goto LABEL_31;
        }
        v18 = (_QWORD *)*v18;
      }
    }
    v20 = MiSessionLookupImage(a2);
    if ( !v20 )
      return (ULONG_PTR *)v7;
    v13 = (__int64 *)(v20 + 80);
LABEL_31:
    if ( *v13 )
      return *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*v13 + 60) & 0x3FF));
    return (ULONG_PTR *)v7;
  }
  if ( MiIsPrototypePteVadLookup(v9) )
    goto LABEL_13;
  v10 = KeGetCurrentThread()->ApcState.Process;
  if ( !v10[1].Affinity.Bitmap[12] || (CloneAddress = MiLocateCloneAddress(v10, a3)) == 0 )
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
    v13 = Address[9];
    if ( !v13 )
      return (ULONG_PTR *)v7;
    goto LABEL_31;
  }
  return (ULONG_PTR *)v7;
}
