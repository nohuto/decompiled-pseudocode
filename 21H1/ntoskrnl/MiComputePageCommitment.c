/*
 * XREFs of MiComputePageCommitment @ 0x1402AD4B0
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiCountCommittedPages @ 0x140543E88 (MiCountCommittedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPteDecommittedPage @ 0x1402AD8B0 (MiIsPteDecommittedPage.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  int IsPteDecommittedPage; // eax
  __int64 v22; // r9
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  __int64 CloneAddress; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  bool v36; // cc
  __int64 v37; // [rsp+30h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-60h]
  _KPROCESS *v39; // [rsp+40h] [rbp-58h]
  unsigned __int64 *v40; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v43; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v41 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = Process[1].ActiveProcessorsPadding[8];
  v40 = &Process[1].ActiveProcessorsPadding[6];
  v43 = v7;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = v9;
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
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v41);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v15 = NextPageTable;
      v16 = 1LL;
      if ( v41 )
      {
        v17 = v41;
        v14 = 0xFFFFF68000000000uLL;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v16 <<= 9;
          --v17;
        }
        while ( v17 );
      }
      v18 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = (_KPROCESS *)v18;
      do
      {
        v19 = *(_QWORD *)v15;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL
          && v15 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v18, v14)
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          v18 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v14 = *(_QWORD *)(v18 + 1928);
          if ( v14 )
          {
            v20 = *(_QWORD *)(v14 + 8 * ((v15 >> 3) & 0x1FF));
            v14 = v19 | 0x20;
            v18 = (unsigned __int8)v20;
            LOBYTE(v18) = v20 & 0x20;
            if ( (v20 & 0x20) == 0 )
              v14 = v19;
            v19 = v14;
            if ( (v20 & 0x42) != 0 )
              v19 = v14 | 0x42;
          }
        }
        v37 = v19;
        if ( v19 )
        {
          IsPteDecommittedPage = MiIsPteDecommittedPage(&v37);
          v23 = v6;
          v6 |= 1u;
          v24 = v23 & 0xFFFFFFFE;
          if ( !IsPteDecommittedPage )
            v6 = v24;
          v18 = v6 & 1;
          if ( (v6 & 2) != 0 )
          {
            v25 = v10 - v16;
            if ( (v6 & 1) == 0 )
              v25 = v10;
            v10 = v25;
          }
          else if ( (v6 & 1) == 0 )
          {
            v10 += v16;
          }
          if ( !v11 )
            goto LABEL_42;
          v26 = *(_QWORD *)(v7 + 360);
          if ( !v26 || (v6 & 1) != 0 )
            goto LABEL_41;
          CloneAddress = 0LL;
          if ( (v22 & 1) != 0 )
          {
            v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37);
            if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v29, v30) )
            {
              v14 = 0x1000000000LL;
              if ( (*(_QWORD *)(v18 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v18 + 8) > 0 )
              {
                v11 = a6;
LABEL_41:
                v7 = v43;
LABEL_42:
                v9 = v42;
                goto LABEL_43;
              }
              v32 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
LABEL_57:
              CloneAddress = MiLocateCloneAddress(Process, v32);
            }
          }
          else if ( (v22 & 0x400) != 0
                 && !(unsigned int)MiIsPrototypePteVadLookup(v22)
                 && !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v34, v14, v33, v34) )
          {
            if ( qword_140C4DE80 && (v35 & 0x10) == 0 )
              v35 &= ~qword_140C4DE80;
            v32 = v35 >> 16;
            goto LABEL_57;
          }
          v9 = v42;
          if ( CloneAddress )
          {
            v36 = v26 <= *(_QWORD *)(CloneAddress + 96);
            v11 = a6;
            v7 = v43;
            if ( !v36 )
              ++*a6;
          }
          else
          {
            v11 = a6;
            v7 = v43;
          }
        }
LABEL_43:
        v15 += 8LL;
        v8 += 8 * v16;
      }
      while ( (v15 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal(v40, v39);
        v12 = a5;
      }
      a4 = v44;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
