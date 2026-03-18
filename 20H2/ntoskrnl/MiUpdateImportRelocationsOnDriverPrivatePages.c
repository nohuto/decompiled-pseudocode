/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x1403976B0 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r9
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // di
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int updated; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int8 v27; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v27 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = v27;
  if ( v7 >= v26 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  v9 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
LABEL_7:
    v10 = MI_READ_PTE_LOCK_FREE(v7);
    v25 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_21;
    if ( (v10 & 1) != 0 )
    {
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL;
      v14 = 48 * v13 - 0x58000000000LL;
      if ( !(unsigned int)MI_PFN_IS_PROTO(v14) )
      {
        v30 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v30, v15, v16, v17);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v13 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v9 >> 3, v13);
        MiLockPageInline(48 * v13 - 0x58000000000LL, v19, v20, v21);
        v22 = 0LL;
        v23 = 0LL;
        if ( updated != 1 )
        {
          v22 = MiCaptureDirtyBitToPfn(v14);
          v23 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v14);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v22 )
          MiReleasePageFileInfo(v23, v22, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v8 = v27;
        v4 = a3;
      }
LABEL_21:
      v7 += 8LL;
      v9 += 8LL;
      continue;
    }
    if ( (v10 & 0x400) != 0 )
      goto LABEL_21;
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
    v3 = 0LL;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
    v12 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
    if ( v12 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v11, v12);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v8 = v27;
  }
  while ( v7 < v26 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
