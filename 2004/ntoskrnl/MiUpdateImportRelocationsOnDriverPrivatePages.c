/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MiReferenceDriverPage @ 0x1403951F0 (MiReferenceDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
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
  v8 = v30;
  if ( v7 >= v29 )
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
    v28 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_21;
    if ( (v10 & 1) != 0 )
    {
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
      v14 = 48 * v13 - 0x58000000000LL;
      if ( !(unsigned int)MI_PFN_IS_PROTO(v14) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33, v15, v16, v17);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v13 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
        v3 = 0LL;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
        updated = MiUpdateImagePfnImportRelocations(a2, v4, v9 >> 3, v13);
        MiLockPageInline(48 * v13 - 0x58000000000LL, v19, v20, v21);
        v25 = 0LL;
        v26 = 0LL;
        if ( updated != 1 )
        {
          v25 = MiCaptureDirtyBitToPfn(v14);
          v26 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v14, v22, v23, v24);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v25 )
          MiReleasePageFileInfo(v26, v25, 1);
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v8 = v30;
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
    v8 = v30;
  }
  while ( v7 < v29 );
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
