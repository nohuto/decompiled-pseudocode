/*
 * XREFs of MiLockDriverPageRange @ 0x14052DC44
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiLockHotPatchPages @ 0x1408CB2E4 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408CB394 (MiLockHotPatchUndoPages.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0C54 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReferenceDriverPage @ 0x140397C78 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
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
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  ULONG_PTR BugCheckParameter1; // [rsp+28h] [rbp-89h]
  int v36; // [rsp+30h] [rbp-81h] BYREF
  __int64 v37; // [rsp+38h] [rbp-79h]
  __int64 v38; // [rsp+40h] [rbp-71h] BYREF
  __int64 v39; // [rsp+48h] [rbp-69h]
  __int128 v40[10]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v42; // [rsp+118h] [rbp+67h]
  unsigned __int8 v44; // [rsp+130h] [rbp+7Fh]

  v42 = a3;
  v7 = a3;
  v8 = a1;
  memset((char *)&v40[1] + 8, 0, 0x60uLL);
  v11 = *v8;
  v12 = 0;
  v13 = 0x7FFFFFFFF8LL;
  *(_QWORD *)&v40[0] = 0LL;
  v37 = 0LL;
  v14 = *(_QWORD *)(v11 + 48) + (v7 << 12);
  BugCheckParameter1 = v14;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = v15;
  if ( (v8[7] & 2) != 0 )
    v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v40[0] + 1) = 0LL;
  v39 = (a6 + 48) & -(__int64)(a6 != 0);
LABEL_4:
  v17 = 0LL;
  v44 = MiLockWorkingSetShared(a2, v13, v9, v10);
LABEL_27:
  v18 = v42;
  while ( (unsigned int)v18 <= a4 )
  {
    if ( v17 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_11;
      MiUnlockPageTableInternal(a2, v17);
    }
    v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v17, 0);
    v18 = v42;
LABEL_11:
    if ( v8[6] && v18 < v8[5] && _bittest64((const signed __int64 *)v8[6], v18) )
      goto LABEL_45;
    v38 = MI_READ_PTE_LOCK_FREE(v16);
    if ( (v38 & 1) != 0 )
    {
      v20 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFLL;
      if ( (v8[7] & 2) != 0 )
        v20 += (v15 >> 3) & 0x1FF;
      v21 = 48 * v20 - 0x58000000000LL;
      if ( !MI_PFN_IS_PROTO(v21) )
      {
        if ( _bittest64((const signed __int64 *)a1[4], v42) )
        {
          v8 = a1;
        }
        else
        {
          v36 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v36, v22, v23, v24);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          MiReferenceDriverPage(48 * v20 - 0x58000000000LL);
          if ( (a5 & 1) != 0 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) != 3 )
          {
            *(_QWORD *)&v40[0] = BugCheckParameter1;
            KeSetPagePrivilege(v20, v40, 256);
            *((_DWORD *)a1 + 14) |= 1u;
          }
          if ( v39 )
            *(_QWORD *)(v39 + 8LL * v42) = v20;
          v33 = MiCaptureDirtyBitToPfn(48 * v20 - 0x58000000000LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
            v37 = v34;
          }
          else
          {
            v34 = v37;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v33 )
            MiReleasePageFileInfo(v34, v33, 1);
          v8 = a1;
          _bittestandset64((signed __int64 *)a1[4], v42);
        }
        v14 = BugCheckParameter1;
        goto LABEL_45;
      }
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v21 + 8) <= 0 )
      {
        MiUnlockPageTableInternal(a2, v17);
        MiUnlockWorkingSetShared(a2, v44);
        v8 = a1;
        MiMakeDriverPagesPrivate(*a1, v16, v16 + 8LL * (a4 - v42), 8);
        MiLockWorkingSetShared(a2, v30, v31, v32);
        MiLockPageTableInternal(a2, v17, 0);
        v14 = BugCheckParameter1;
        goto LABEL_27;
      }
      v14 = BugCheckParameter1;
      v25 = MiCopyOnWrite(BugCheckParameter1, (ULONG_PTR *)v16, -1LL, 0);
      v18 = v42;
      v26 = v25;
      if ( v25 < 0 )
      {
        MiUnlockPageTableInternal(a2, v17);
        MiUnlockWorkingSetShared(a2, v44);
        MiCopyOnWriteCheckConditions(a2, v26);
        MiLockWorkingSetShared(a2, v27, v28, v29);
        MiLockPageTableInternal(a2, v17, 0);
        v8 = a1;
        goto LABEL_27;
      }
      v8 = a1;
    }
    else
    {
      MiUnlockPageTableInternal(a2, v17);
      MiUnlockWorkingSetShared(a2, v44);
      WORD4(v40[1]) = 6;
      memset(&v40[2], 0, 32);
      if ( (int)MmAccessFault(0LL, v14, 0, (ULONG_PTR)&v40[1] + 9) >= 0 )
        goto LABEL_4;
      MiLockWorkingSetShared(a2, v13, v9, v10);
      MiLockPageTableInternal(a2, v17, 0);
      if ( (a5 & 2) == 0 )
      {
        v12 = -1073741701;
        break;
      }
LABEL_45:
      v14 += 4096LL;
      v18 = v42 + 1;
      v15 += 8LL;
      BugCheckParameter1 = v14;
      ++v42;
      if ( (v8[7] & 2) == 0 || (v15 & 0xFFF) == 0 )
        v16 += 8LL;
    }
  }
  MiUnlockPageTableInternal(a2, v17);
  MiUnlockWorkingSetShared(a2, v44);
  return v12;
}
