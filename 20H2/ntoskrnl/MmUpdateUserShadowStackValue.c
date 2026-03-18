/*
 * XREFs of MmUpdateUserShadowStackValue @ 0x1403F2DE0
 * Callers:
 *     PspFreeUserFiberShadowStack @ 0x14090C9C4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmUpdateUserShadowStackValue(unsigned __int64 a1, signed __int64 a2)
{
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rsi
  int v5; // eax
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // r12
  unsigned __int64 valid; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  volatile signed __int64 *v16; // rcx
  BOOL v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edi
  int v22; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int32 *v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v27; // [rsp+90h] [rbp+18h]
  unsigned int v28; // [rsp+98h] [rbp+20h] BYREF

  v28 = 0;
  v24 = 0LL;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v28);
  v4 = v3;
  v23 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)v3 + 12);
    if ( (v5 & 0x100000) != 0 && (v5 & 0x1000000) == 0 && (v5 & 0x4000000) != 0 )
    {
      v6 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v8 = MiLockWorkingSetShared((__int64)v6);
        v27 = v8;
        valid = MiLockLowestValidPageTable((__int64)v6, v7, &v24);
        v10 = MI_READ_PTE_LOCK_FREE(v24);
        v25[0] = v10;
        if ( valid == ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (v10 & 1) != 0 )
          break;
        MiUnlockPageTableInternal((__int64)v6, valid);
        MiUnlockWorkingSetShared((__int64)v6, v8);
      }
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v25) >> 12) & 0xFFFFFFFFFLL;
      v15 = 48 * v14 - 0x58000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22, v11, v12, v13);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      v16 = (volatile signed __int64 *)((a1 & 0xFFF) + MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000, v13));
      v17 = a2 == _InterlockedCompareExchange64(v16, 0LL, a2);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, 0x11u, 0x80000000);
      v18 = MiCaptureDirtyBitToPfn(48 * v14 - 0x58000000000LL);
      if ( v18 )
        v19 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
      else
        v19 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v18 )
        MiReleasePageFileInfo(v19, v18, 1);
      MiUnlockPageTableInternal((__int64)v6, valid);
      MiUnlockWorkingSetShared((__int64)v6, v27);
      v20 = !v17 ? 0xC0000272 : 0;
    }
    else
    {
      v20 = -1073741800;
    }
  }
  else
  {
    v20 = v28;
  }
  if ( v4 )
    MiUnlockAndDereferenceVad((PVOID)v4);
  return v20;
}
