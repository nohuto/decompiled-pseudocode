/*
 * XREFs of MiComputePageCommitment @ 0x1403178B0
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiCountCommittedPages @ 0x140549BE8 (MiCountCommittedPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiIsPteDecommittedPage @ 0x140317CB0 (MiIsPteDecommittedPage.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5,
        _QWORD *a6)
{
  int v6; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int IsPteDecommittedPage; // eax
  unsigned __int64 v22; // r9
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  _QWORD *CloneAddress; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r9
  bool v34; // cc
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-60h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned __int64 *v38; // [rsp+48h] [rbp-50h]
  unsigned int v39; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v41; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v39 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process[1].ActiveProcessorsPadding[8];
  v38 = &Process[1].ActiveProcessorsPadding[6];
  v41 = v7;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v9;
  if ( *(int *)(a3 + 52) >= 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v9 )
  {
    v12 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v39);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v14 = NextPageTable;
      v15 = 1LL;
      if ( v39 )
      {
        v16 = v39;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v15 <<= 9;
          --v16;
        }
        while ( v16 );
      }
      v37 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v17 = *(_QWORD *)v14;
        if ( v14 >= 0xFFFFF6FB7DBED000uLL
          && v14 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v19 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
            v20 = v17 | 0x20;
            if ( (v19 & 0x20) == 0 )
              v20 = v17;
            v17 = v20;
            if ( (v19 & 0x42) != 0 )
              v17 = v20 | 0x42;
          }
        }
        v35 = v17;
        if ( v17 )
        {
          IsPteDecommittedPage = MiIsPteDecommittedPage(&v35);
          v23 = v6;
          v6 |= 1u;
          v24 = v23 & 0xFFFFFFFE;
          if ( !IsPteDecommittedPage )
            v6 = v24;
          if ( (v6 & 2) != 0 )
          {
            v25 = v10 - v15;
            if ( (v6 & 1) == 0 )
              v25 = v10;
            v10 = v25;
          }
          else if ( (v6 & 1) == 0 )
          {
            v10 += v15;
          }
          if ( !v11 )
            goto LABEL_42;
          v26 = *(_QWORD *)(v7 + 360);
          if ( !v26 || (v6 & 1) != 0 )
            goto LABEL_41;
          CloneAddress = 0LL;
          if ( (v22 & 1) != 0 )
          {
            v28 = MI_READ_PTE_LOCK_FREE(&v35);
            if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
            {
              if ( (*(_QWORD *)(v29 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v29 + 8) > 0 )
              {
                v11 = a6;
LABEL_41:
                v7 = v41;
LABEL_42:
                v9 = v40;
                goto LABEL_43;
              }
              v31 = *(_QWORD *)(v29 + 8) | 0x8000000000000000uLL;
LABEL_57:
              CloneAddress = MiLocateCloneAddress((__int64)Process, v31);
            }
          }
          else if ( (v22 & 0x400) != 0 && !MiIsPrototypePteVadLookup(v22) && !MI_PROTO_FORMAT_COMBINED(v32) )
          {
            if ( qword_140C4DF80 && (v33 & 0x10) == 0 )
              v33 &= ~qword_140C4DF80;
            v31 = v33 >> 16;
            goto LABEL_57;
          }
          v9 = v40;
          if ( CloneAddress )
          {
            v34 = v26 <= CloneAddress[12];
            v11 = a6;
            v7 = v41;
            if ( !v34 )
              ++*a6;
          }
          else
          {
            v11 = a6;
            v7 = v41;
          }
        }
LABEL_43:
        v14 += 8LL;
        v8 += 8 * v15;
      }
      while ( (v14 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal((__int64)v38, v37);
        v12 = a5;
      }
      a4 = v42;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
