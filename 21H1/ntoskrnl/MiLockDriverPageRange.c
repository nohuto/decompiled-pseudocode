/*
 * XREFs of MiLockDriverPageRange @ 0x140527EE4
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x140539BD8 (MmWriteSystemImageTracepoint.c)
 *     MiLockHotPatchPages @ 0x1408C6834 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408C68E4 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408CC1A4 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiReferenceDriverPage @ 0x140394620 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
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
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  ULONG_PTR BugCheckParameter1; // [rsp+28h] [rbp-89h]
  int v28; // [rsp+30h] [rbp-81h] BYREF
  __int64 v29; // [rsp+38h] [rbp-79h]
  __int64 v30; // [rsp+40h] [rbp-71h] BYREF
  __int64 v31; // [rsp+48h] [rbp-69h]
  __int128 v32[10]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+118h] [rbp+67h]
  unsigned __int8 v36; // [rsp+130h] [rbp+7Fh]

  v34 = a3;
  v7 = a3;
  v8 = a1;
  memset((char *)&v32[1] + 8, 0, 0x60uLL);
  v9 = *v8;
  v10 = 0;
  *(_QWORD *)&v32[0] = 0LL;
  v29 = 0LL;
  v11 = *(_QWORD *)(v9 + 48) + (v7 << 12);
  BugCheckParameter1 = v11;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = v12;
  if ( (v8[7] & 2) != 0 )
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v32[0] + 1) = 0LL;
  v31 = (a6 + 48) & -(__int64)(a6 != 0);
LABEL_4:
  v14 = 0LL;
  v36 = MiLockWorkingSetShared(a2);
LABEL_27:
  v16 = v34;
  while ( (unsigned int)v16 <= a4 )
  {
    if ( v14 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_11;
      MiUnlockPageTableInternal(a2, v14, v15);
    }
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v14, 0LL);
    v16 = v34;
LABEL_11:
    if ( v8[6] && v16 < v8[5] && _bittest64((const signed __int64 *)v8[6], v16) )
      goto LABEL_45;
    v30 = MI_READ_PTE_LOCK_FREE(v13);
    if ( (v30 & 1) != 0 )
    {
      v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFLL;
      if ( (v8[7] & 2) != 0 )
        v19 += (v12 >> 3) & 0x1FF;
      v20 = 48 * v19 - 0x58000000000LL;
      if ( !MI_PFN_IS_PROTO(v20) )
      {
        if ( _bittest64((const signed __int64 *)a1[4], v34) )
        {
          v8 = a1;
        }
        else
        {
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28, v21, v15, v22);
            while ( *(__int64 *)(v20 + 24) < 0 );
          }
          MiReferenceDriverPage(48 * v19 - 0x58000000000LL);
          if ( (a5 & 1) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v32[0] = BugCheckParameter1;
            KeSetPagePrivilege(v19, v32, 256);
            *((_DWORD *)a1 + 14) |= 1u;
          }
          if ( v31 )
            *(_QWORD *)(v31 + 8LL * v34) = v19;
          v25 = MiCaptureDirtyBitToPfn(48 * v19 - 0x58000000000LL);
          if ( v25 )
          {
            v26 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
            v29 = v26;
          }
          else
          {
            v26 = v29;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v25 )
            MiReleasePageFileInfo(v26, v25, 1);
          v8 = a1;
          _bittestandset64((signed __int64 *)a1[4], v34);
        }
        v11 = BugCheckParameter1;
        goto LABEL_45;
      }
      if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v20 + 8) <= 0 )
      {
        MiUnlockPageTableInternal(a2, v14, v15);
        MiUnlockWorkingSetShared(a2, v36);
        v8 = a1;
        MiMakeDriverPagesPrivate(*a1, v13, v13 + 8LL * (a4 - v34), 8);
        MiLockWorkingSetShared(a2);
        MiLockPageTableInternal(a2, v14, 0LL);
        v11 = BugCheckParameter1;
        goto LABEL_27;
      }
      v11 = BugCheckParameter1;
      v23 = MiCopyOnWrite(BugCheckParameter1, (ULONG_PTR *)v13, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v16 = v34;
      v24 = v23;
      if ( v23 < 0 )
      {
        MiUnlockPageTableInternal(a2, v14, v15);
        MiUnlockWorkingSetShared(a2, v36);
        MiCopyOnWriteCheckConditions(a2, v24);
        MiLockWorkingSetShared(a2);
        MiLockPageTableInternal(a2, v14, 0LL);
        v8 = a1;
        goto LABEL_27;
      }
      v8 = a1;
    }
    else
    {
      MiUnlockPageTableInternal(a2, v14, v17);
      MiUnlockWorkingSetShared(a2, v36);
      WORD4(v32[1]) = 6;
      memset(&v32[2], 0, 32);
      if ( (int)MmAccessFault(0LL, v11, 0, (ULONG_PTR)&v32[1] + 9) >= 0 )
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
      v16 = v34 + 1;
      v12 += 8LL;
      BugCheckParameter1 = v11;
      ++v34;
      if ( (v8[7] & 2) == 0 || (v12 & 0xFFF) == 0 )
        v13 += 8LL;
    }
  }
  MiUnlockPageTableInternal(a2, v14, v15);
  MiUnlockWorkingSetShared(a2, v36);
  return v10;
}
