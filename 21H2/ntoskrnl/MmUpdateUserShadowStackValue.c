/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1403F4628
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x14090A2D4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  char *v7; // rsi
  int v8; // eax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // r12
  unsigned __int64 valid; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  volatile signed __int64 *v19; // rcx
  BOOL v20; // r14d
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  int v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v30; // [rsp+90h] [rbp+18h]
  unsigned int v31; // [rsp+98h] [rbp+20h] BYREF

  v31 = 0;
  v27 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v31);
  v7 = (char *)v3;
  v26 = v3;
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 48);
    if ( (v8 & 0x100000) != 0 && (v8 & 0x1000000) == 0 && (v8 & 0x4000000) != 0 )
    {
      v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v11 = MiLockWorkingSetShared((__int64)v9, v4, v5, v6);
        v30 = v11;
        valid = MiLockLowestValidPageTable((__int64)v9, v10, &v27);
        v13 = MI_READ_PTE_LOCK_FREE(v27);
        v28[0] = v13;
        if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v13 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)v9, valid);
        MiUnlockWorkingSetShared((__int64)v9, v11);
      }
      v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v28) >> 12) & 0xFFFFFFFFFLL;
      v18 = 48 * v17 - 0x58000000000LL;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25, v14, v15, v16);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v19 = (volatile signed __int64 *)((a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000));
      v20 = a2 == _InterlockedCompareExchange64(v19, 0LL, a2);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000);
      v21 = MiCaptureDirtyBitToPfn(48 * v17 - 0x58000000000LL);
      if ( v21 )
        v22 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v18 + 40) >> 39) & 0x3FFLL));
      else
        v22 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v22, v21, 1);
      MiUnlockPageTableInternal((__int64)v9, valid);
      MiUnlockWorkingSetShared((__int64)v9, v30);
      v23 = !v20 ? 0xC0000272 : 0;
    }
    else
    {
      v23 = -1073741800;
    }
  }
  else
  {
    v23 = v31;
  }
  if ( v7 )
    MiUnlockAndDereferenceVad(v7);
  return v23;
}
