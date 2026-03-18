/*
 * XREFs of MiLockPagedAddress @ 0x140369694
 * Callers:
 *     MiLockPagedRange @ 0x140715E10 (MiLockPagedRange.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 Flink; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // ebp
  char v15; // al
  __int64 v17; // rax
  int v18; // eax
  ULONG_PTR v19; // rbx
  int v20; // ebx
  int v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

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
      v22 = v7;
      v8 = v7;
      v9 = v7 & 1;
      if ( (v7 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      v18 = MmAccessFault(0LL, BugCheckParameter1, 0, 0LL);
      v19 = v18;
      if ( v18 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v19, 0LL, BugCheckParameter1);
      }
LABEL_31:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v7 & 0x200) == 0 )
      break;
    v20 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, (ULONG_PTR *)v2, -1LL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v20 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v20);
      goto LABEL_31;
    }
  }
  if ( MiPteInShadowRange((unsigned __int64)&v22)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && v9
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v22 >> 3) & 0x1FF));
      Flink = v8 | 0x20;
      if ( (v17 & 0x20) == 0 )
        Flink = v8;
      v8 = Flink;
      if ( (v17 & 0x42) != 0 )
        v8 = Flink;
    }
  }
  v13 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v21, Flink, v11, v12);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v13, 0LL, v11) )
  {
    v14 = 1;
    v3 = MiCaptureDirtyBitToPfn(v13);
  }
  else
  {
    v14 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v14 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL)), v3, 1);
    v15 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  return v14;
}
