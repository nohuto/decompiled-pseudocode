/*
 * XREFs of MiLockPagedAddress @ 0x140368CD4
 * Callers:
 *     MiLockPagedRange @ 0x140713A80 (MiLockPagedRange.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 Flink; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  unsigned int v16; // ebp
  char v17; // al
  __int64 v19; // rax
  int v20; // eax
  ULONG_PTR v21; // rbx
  int v22; // ebx
  __int64 v23; // r8
  int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v6 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0LL, 0, v6, 4);
      v7 = MI_READ_PTE_LOCK_FREE(v2);
      v25 = v7;
      v9 = v7;
      v10 = v7 & 1;
      if ( (v7 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4, v8);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      v20 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v21 = v20;
      if ( v20 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v21, 0LL, BugCheckParameter1);
      }
LABEL_31:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v7 & 0x200) == 0 )
      break;
    v22 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, (ULONG_PTR *)v2, 0xFFFFFFFFFFFFFFFFuLL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4, v23);
    if ( v22 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v22);
      goto LABEL_31;
    }
  }
  if ( MiPteInShadowRange((unsigned __int64)&v25)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && v10
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v19 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
      Flink = v9 | 0x20;
      if ( (v19 & 0x20) == 0 )
        Flink = v9;
      v9 = Flink;
      if ( (v19 & 0x42) != 0 )
        v9 = Flink;
    }
  }
  v14 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24, Flink, v12, v13);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v14, 0) )
  {
    v16 = 1;
    v3 = MiCaptureDirtyBitToPfn(v14);
  }
  else
  {
    v16 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v16 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL)), v3, 1);
    v17 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v17 & 0x20) == 0 || (v17 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4, v15);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  return v16;
}
