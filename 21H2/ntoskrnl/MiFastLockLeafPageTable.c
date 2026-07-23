/*
 * XREFs of MiFastLockLeafPageTable @ 0x1402B2FD0
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     MiLockPageLeafPageTable @ 0x1402AFCE0 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiLockPoolCommitPageTable @ 0x140316120 (MiLockPoolCommitPageTable.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // r10d
  char v6; // al
  _DWORD *MmInternal; // rbx
  BOOL v8; // edx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+24h] [rbp-54h]
  unsigned int v20; // [rsp+90h] [rbp+18h]
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  if ( (unsigned __int8)(v6 - 1) > 2u && v6 != 7 )
  {
    if ( v6 == 5 )
    {
      if ( a2 >= qword_140C4FB48 && a2 < qword_140C4FB48 + 0x100000000000LL )
        return 0LL;
      goto LABEL_5;
    }
    if ( !v6 )
LABEL_5:
      v5 = 1;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x1000000) == 0 || !MmInternal || MmInternal[3120] )
    return 0LL;
  MmInternal[3120] = 1;
  v19 = 0;
  v8 = 0;
  v9 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = v9;
  v21 = v9;
  v20 = a3 | 2;
  if ( !v5 )
    goto LABEL_14;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v17 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
        if ( (v17 & 0x20) != 0 )
          LOBYTE(v12) = v12 | 0x20;
        if ( (v17 & 0x42) != 0 )
          LOBYTE(v12) = v12 | 0x42;
      }
    }
    v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v8 = 0;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 0x80u) != 0LL )
    {
      v19 = 3;
      v10 = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v21 = v10;
    }
    while ( 1 )
    {
LABEL_14:
      v13 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
          || (v13 & 1) == 0
          || (v13 & 0x20) != 0 && (v13 & 0x42) != 0 )
        {
          v10 = v21;
        }
        else
        {
          v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          v10 = v21;
          if ( v14 )
          {
            v15 = *((_QWORD *)&v14->Flink + ((v21 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              LOBYTE(v13) = v13 | 0x20;
            if ( (v15 & 0x42) != 0 )
              LOBYTE(v13) = v13 | 0x42;
          }
        }
      }
      if ( (v13 & 1) == 0 )
        break;
      if ( (v13 & 0x80u) == 0LL )
      {
        v8 = MiLockPageTableInternal(a1, v10, v20) != 0;
        goto LABEL_46;
      }
      v19 = 2;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = v10;
    }
    v8 = 0;
  }
LABEL_46:
  --MmInternal[3120];
  if ( v8 && v19 )
  {
    if ( v19 == 3 )
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x81) == 0x81 )
    {
      if ( v19 == 3 )
        return 3;
      else
        return 2;
    }
    else
    {
      MiUnlockPageTableInternal(a1, v10);
      return 0;
    }
  }
  return v8;
}
