/*
 * XREFs of MiCheckProcessShadow @ 0x1402B4180
 * Callers:
 *     MmCheckProcessShadow @ 0x140248FF0 (MmCheckProcessShadow.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiCheckRelevantKernelShadows @ 0x140226600 (MiCheckRelevantKernelShadows.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // r14
  bool v6; // zf
  unsigned __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rbp
  ULONG_PTR v10; // r10
  int v11; // r11d
  __int64 v12; // r9
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct _LIST_ENTRY *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct _LIST_ENTRY *v27; // r8
  __int64 v28; // rax
  __int64 v29; // r8

  if ( (MiFlags & 0xC00000) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0
    || *(_BYTE *)(a1 - 752) == 1
    || (a2 & 4) == 0 && (__rdtsc() & 0x3FF0) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = *(_QWORD *)(a1 + 264);
  v6 = (a2 & 4) != 0 ? (*(_DWORD *)(a1 - 540) & 0x4000000) == 0 : v5 == 0;
  if ( v6 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) == 0 )
  {
    if ( !(unsigned int)MiWorkingSetIsContended(a1) )
    {
      v8 = a2 & 1;
      if ( (a2 & 1) == 0 || (unsigned int)MiLockPageTableInternal(a1, v7, 1) )
        goto LABEL_16;
    }
    return 0xFFFFFFFFLL;
  }
  v8 = a2 & 1;
  if ( (a2 & 1) != 0 )
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0);
LABEL_16:
  v9 = 0LL;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = 256;
  do
  {
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v19 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v20 = v12 | 0x20;
        if ( (v19 & 0x20) == 0 )
          v20 = *(_QWORD *)v10;
        v12 = v20;
        if ( (v19 & 0x42) != 0 )
          v12 = v20 | 0x42;
      }
    }
    v13 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v21 )
      {
        v22 = *((_QWORD *)&v21->Flink + ((v5 >> 3) & 0x1FF));
        v23 = v13 | 0x20;
        if ( (v22 & 0x20) == 0 )
          v23 = *(_QWORD *)v5;
        v13 = v23;
        if ( (v22 & 0x42) != 0 )
          v13 = v23 | 0x42;
      }
    }
    if ( (v12 & 1) != 0 )
    {
      v16 = v12 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140C4E048) )
        v13 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v13 | 0x20;
      if ( v16 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3600uLL, v10, v16, BugCheckParameter4);
        goto LABEL_38;
      }
    }
    else if ( v13 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v10, v13, v13);
      goto LABEL_38;
    }
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    --v11;
  }
  while ( v11 );
  if ( BBTBuffer || (v10 & 0xFFF) == 0 )
    goto LABEL_37;
  while ( 1 )
  {
    v14 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v24 )
      {
        v25 = *((_QWORD *)&v24->Flink + ((v10 >> 3) & 0x1FF));
        v26 = v14 | 0x20;
        if ( (v25 & 0x20) == 0 )
          v26 = *(_QWORD *)v10;
        v14 = v26;
        if ( (v25 & 0x42) != 0 )
          v14 = v26 | 0x42;
      }
    }
    v15 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v27 )
      {
        v28 = *((_QWORD *)&v27->Flink + ((v5 >> 3) & 0x1FF));
        v29 = v15 | 0x20;
        if ( (v28 & 0x20) == 0 )
          v29 = *(_QWORD *)v5;
        v15 = v29;
        if ( (v28 & 0x42) != 0 )
          v15 = v29 | 0x42;
      }
    }
    if ( (v14 & 1) != 0 && (v14 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3604uLL, v10, v14, v15);
      goto LABEL_36;
    }
    if ( (v15 & 1) != 0 && (v15 & 4) != 0 )
      break;
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    if ( (v10 & 0xFFF) == 0 )
      goto LABEL_36;
  }
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3605uLL, v10, v14, v15);
LABEL_36:
  if ( (v10 & 0xFFF) == 0 )
LABEL_37:
    v9 = 0xFFFFFFFFLL;
LABEL_38:
  if ( v8 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v9 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2);
  return v9;
}
