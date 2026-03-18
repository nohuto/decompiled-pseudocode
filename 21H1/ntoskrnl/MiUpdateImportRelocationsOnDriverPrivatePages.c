/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x140394620 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r9
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int8 v9; // di
  __int64 v10; // r15
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  int updated; // edi
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int8 v30; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = ((*(_QWORD *)(v5 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = v7 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 64) >> 12);
  v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v9 = v30;
  if ( v7 >= v29 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
  v10 = 0LL;
  do
  {
    if ( v3 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3, v8);
    }
    v3 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
LABEL_7:
    v11 = MI_READ_PTE_LOCK_FREE(v7);
    v28 = v11;
    v12 = v11;
    if ( !v11 )
      goto LABEL_21;
    if ( (v11 & 1) != 0 )
    {
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
      v15 = 48 * v14 - 0x58000000000LL;
      if ( !(unsigned int)MI_PFN_IS_PROTO(v15, v16, v17) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33, v18, v8, v19);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v14 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3, v20);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v10 >> 3, v14);
        MiLockPageInline(48 * v14 - 0x58000000000LL, v22, v23, v24);
        v25 = 0LL;
        v26 = 0LL;
        if ( updated != 1 )
        {
          v25 = MiCaptureDirtyBitToPfn(v15);
          v26 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v15);
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v25 )
          MiReleasePageFileInfo(v26, v25, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v9 = v30;
        v4 = a3;
      }
LABEL_21:
      v7 += 8LL;
      v10 += 8LL;
      continue;
    }
    if ( (v11 & 0x400) != 0 )
      goto LABEL_21;
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3, v8);
    v3 = 0LL;
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
    v13 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
    if ( v13 < 0 )
      KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v7 << 25) >> 16, v12, v13);
    MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v9 = v30;
  }
  while ( v7 < v29 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3, v8);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
}
