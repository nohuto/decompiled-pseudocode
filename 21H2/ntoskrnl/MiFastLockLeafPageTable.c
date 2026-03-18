/*
 * XREFs of MiFastLockLeafPageTable @ 0x14031D9B0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiLockPageLeafPageTable @ 0x14031BF80 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiLockPoolCommitPageTable @ 0x1403528A4 (MiLockPoolCommitPageTable.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // r10d
  char v6; // al
  _DWORD *MmInternal; // rbx
  BOOL v8; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+90h] [rbp+18h]
  unsigned __int64 v20; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  if ( (unsigned __int8)(v6 - 1) <= 2u || v6 == 7 )
    goto LABEL_7;
  if ( v6 != 5 )
  {
    if ( v6 == 4 )
    {
      if ( a2 < ((MmPfnDatabase + (MxPfnAllocation << 12) + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
        && a2 >= MmPfnDatabase )
      {
        return 0LL;
      }
    }
    else if ( !v6 )
    {
LABEL_6:
      v5 = 1;
    }
LABEL_7:
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( (MiFlags & 0x1000000) != 0 && MmInternal && !MmInternal[3120] )
    {
      MmInternal[3120] = 1;
      v18 = 0;
      v8 = 0;
      v9 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v20 = v9;
      v19 = a3 | 2;
      if ( !v5 )
        goto LABEL_15;
      v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
            if ( (v16 & 0x20) != 0 )
              LOBYTE(v11) = v11 | 0x20;
            if ( (v16 & 0x42) != 0 )
              LOBYTE(v11) = v11 | 0x42;
          }
        }
        v8 = 0;
      }
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 0x80u) != 0LL )
        {
          v18 = 3;
          v20 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        while ( 1 )
        {
LABEL_15:
          v12 = *(_QWORD *)v20;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL
            && v20 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
          {
            if ( (v12 & 1) == 0 )
            {
LABEL_42:
              v8 = 0;
              break;
            }
            if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
            {
              v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v13 )
              {
                v14 = *((_QWORD *)&v13->Flink + ((v20 >> 3) & 0x1FF));
                if ( (v14 & 0x20) != 0 )
                  LOBYTE(v12) = v12 | 0x20;
                if ( (v14 & 0x42) != 0 )
                  LOBYTE(v12) = v12 | 0x42;
              }
            }
          }
          if ( (v12 & 1) == 0 )
            goto LABEL_42;
          if ( (v12 & 0x80u) == 0LL )
          {
            v8 = MiLockPageTableInternal(a1, v20, v19) != 0;
            break;
          }
          v18 = 2;
          v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
      }
      --MmInternal[3120];
      if ( !v8 || !v18 )
        return v8;
      if ( v18 == 3 )
        v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x81) == 0x81 )
      {
        if ( v18 != 3 )
          return 2LL;
        return 3;
      }
      else
      {
        MiUnlockPageTableInternal(a1, v20);
        return 0;
      }
    }
    return 0LL;
  }
  if ( a2 < qword_140C540A0 || a2 >= qword_140C540A0 + 0x100000000000LL )
    goto LABEL_6;
  return 0LL;
}
