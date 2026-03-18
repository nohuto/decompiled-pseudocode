/*
 * XREFs of MiLockDriverPageRange @ 0x14052BF04
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MiLockHotPatchPages @ 0x1408CD9C4 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CDA74 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D3334 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiReferenceDriverPage @ 0x1403976B0 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeSetPagePrivilege @ 0x140511338 (KeSetPagePrivilege.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockDriverPageRange(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6)
{
  __int64 v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // edi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  ULONG_PTR BugCheckParameter1; // [rsp+28h] [rbp-89h]
  int v27; // [rsp+30h] [rbp-81h] BYREF
  __int64 v28; // [rsp+38h] [rbp-79h]
  __int64 v29; // [rsp+40h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-69h]
  __int128 v31[10]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v33; // [rsp+118h] [rbp+67h]
  unsigned __int8 v35; // [rsp+130h] [rbp+7Fh]

  v33 = a3;
  v7 = a3;
  v8 = a1;
  memset((char *)&v31[1] + 8, 0, 0x60uLL);
  v9 = *v8;
  v10 = 0;
  *(_QWORD *)&v31[0] = 0LL;
  v28 = 0LL;
  v11 = *(_QWORD *)(v9 + 48) + (v7 << 12);
  BugCheckParameter1 = v11;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v12;
  if ( (v8[7] & 2) != 0 )
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v31[0] + 1) = 0LL;
  v30 = (a6 + 48) & -(__int64)(a6 != 0);
LABEL_4:
  v14 = 0LL;
  v35 = MiLockWorkingSetShared(a2);
LABEL_27:
  v15 = v33;
  while ( (unsigned int)v15 <= a4 )
  {
    if ( v14 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_11;
      MiUnlockPageTableInternal(a2, v14);
    }
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v14, 0LL);
    v15 = v33;
LABEL_11:
    if ( v8[6] && v15 < v8[5] && _bittest64((const signed __int64 *)v8[6], v15) )
      goto LABEL_45;
    v29 = MI_READ_PTE_LOCK_FREE(v13);
    if ( (v29 & 1) != 0 )
    {
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL;
      if ( (v8[7] & 2) != 0 )
        v17 += (v12 >> 3) & 0x1FF;
      v18 = 48 * v17 - 0x58000000000LL;
      if ( !MI_PFN_IS_PROTO(v18) )
      {
        if ( _bittest64((const signed __int64 *)a1[4], v33) )
        {
          v8 = a1;
        }
        else
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v27, v19, v20, v21);
            while ( *(__int64 *)(v18 + 24) < 0 );
          }
          MiReferenceDriverPage(48 * v17 - 0x58000000000LL);
          if ( (a5 & 1) != 0 && ((*(_QWORD *)(v18 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v31[0] = BugCheckParameter1;
            KeSetPagePrivilege(v17, v31, 256);
            *((_DWORD *)a1 + 14) |= 1u;
          }
          if ( v30 )
            *(_QWORD *)(v30 + 8LL * v33) = v17;
          v24 = MiCaptureDirtyBitToPfn(48 * v17 - 0x58000000000LL);
          if ( v24 )
          {
            v25 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
            v28 = v25;
          }
          else
          {
            v25 = v28;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v24 )
            MiReleasePageFileInfo(v25, v24, 1);
          v8 = a1;
          _bittestandset64((signed __int64 *)a1[4], v33);
        }
        v11 = BugCheckParameter1;
        goto LABEL_45;
      }
      if ( (*(_QWORD *)(v18 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v18 + 8) <= 0 )
      {
        MiUnlockPageTableInternal(a2, v14);
        MiUnlockWorkingSetShared(a2, v35);
        v8 = a1;
        MiMakeDriverPagesPrivate(*a1, v13, v13 + 8LL * (a4 - v33), 8);
        MiLockWorkingSetShared(a2);
        MiLockPageTableInternal(a2, v14, 0LL);
        v11 = BugCheckParameter1;
        goto LABEL_27;
      }
      v11 = BugCheckParameter1;
      v22 = MiCopyOnWrite(BugCheckParameter1, (ULONG_PTR *)v13, -1LL, 0);
      v15 = v33;
      v23 = v22;
      if ( v22 < 0 )
      {
        MiUnlockPageTableInternal(a2, v14);
        MiUnlockWorkingSetShared(a2, v35);
        MiCopyOnWriteCheckConditions(a2, v23);
        MiLockWorkingSetShared(a2);
        MiLockPageTableInternal(a2, v14, 0LL);
        v8 = a1;
        goto LABEL_27;
      }
      v8 = a1;
    }
    else
    {
      MiUnlockPageTableInternal(a2, v14);
      MiUnlockWorkingSetShared(a2, v35);
      WORD4(v31[1]) = 6;
      memset(&v31[2], 0, 32);
      if ( (int)MmAccessFault(0LL, v11, 0, (ULONG_PTR)&v31[1] + 9) >= 0 )
        goto LABEL_4;
      MiLockWorkingSetShared(a2);
      MiLockPageTableInternal(a2, v14, 0LL);
      if ( (a5 & 2) == 0 )
      {
        v10 = -1073741701;
        break;
      }
LABEL_45:
      v11 += 4096LL;
      v15 = v33 + 1;
      v12 += 8LL;
      BugCheckParameter1 = v11;
      ++v33;
      if ( (v8[7] & 2) == 0 || (v12 & 0xFFF) == 0 )
        v13 += 8LL;
    }
  }
  MiUnlockPageTableInternal(a2, v14);
  MiUnlockWorkingSetShared(a2, v35);
  return v10;
}
