/*
 * XREFs of MiLockPagedAddress @ 0x14036BAD4
 * Callers:
 *     MiLockPagedRange @ 0x140727D10 (MiLockPagedRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  unsigned __int8 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 Flink; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // ebp
  char v18; // al
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  ULONG_PTR v25; // rbx
  int v26; // ebx
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v6, v7, v8);
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0LL, 0, v9, 4);
      v10 = MI_READ_PTE_LOCK_FREE(v2);
      v28 = v10;
      v11 = v10;
      v12 = v10 & 1;
      if ( (v10 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
      v21 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v25 = v21;
      if ( v21 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v25, 0LL, BugCheckParameter1);
      }
LABEL_31:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v22, v23, v24);
    }
    if ( (v10 & 0x200) == 0 )
      break;
    v26 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, (ULONG_PTR *)v2, -1LL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v26 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v26);
      goto LABEL_31;
    }
  }
  if ( MiPteInShadowRange((unsigned __int64)&v28)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && v12
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v20 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
      Flink = v11 | 0x20;
      if ( (v20 & 0x20) == 0 )
        Flink = v11;
      v11 = Flink;
      if ( (v20 & 0x42) != 0 )
        v11 = Flink;
    }
  }
  v16 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27, Flink, v14, v15);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v16, 0) )
  {
    v17 = 1;
    v3 = MiCaptureDirtyBitToPfn(v16);
  }
  else
  {
    v17 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v17 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL)), v3, 1);
    v18 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v18 & 0x20) == 0 || (v18 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
  return v17;
}
