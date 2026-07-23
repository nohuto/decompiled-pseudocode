/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x140397C78 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r9
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // di
  __int64 v11; // r15
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int updated; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  unsigned __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned __int8 v35; // [rsp+90h] [rbp+8h]
  int v38; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v35 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v8, v9, (_DWORD *)v5);
  v10 = v35;
  if ( v7 >= v34 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  v11 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0);
LABEL_7:
    v12 = MI_READ_PTE_LOCK_FREE(v7);
    v33 = v12;
    v13 = v12;
    if ( !v12 )
      goto LABEL_21;
    if ( (v12 & 1) != 0 )
    {
      v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL;
      v19 = 48 * v18 - 0x58000000000LL;
      if ( !(unsigned int)MI_PFN_IS_PROTO(v19) )
      {
        v38 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v38, v20, v21, v22);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v18 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v11 >> 3, v18);
        MiLockPageInline(48 * v18 - 0x58000000000LL, v24, v25, v26);
        v27 = 0LL;
        v28 = 0LL;
        if ( updated != 1 )
        {
          v27 = MiCaptureDirtyBitToPfn(v19);
          v28 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v19 + 40) >> 39) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v19);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v27 )
          MiReleasePageFileInfo(v28, v27, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v29, v30, v31);
        v10 = v35;
        v4 = a3;
      }
LABEL_21:
      v7 += 8LL;
      v11 += 8LL;
      continue;
    }
    if ( (v12 & 0x400) != 0 )
      goto LABEL_21;
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    v3 = 0LL;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
    v14 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
    if ( v14 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v13, v14);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v15, v16, v17);
    v10 = v35;
  }
  while ( v7 < v34 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
}
