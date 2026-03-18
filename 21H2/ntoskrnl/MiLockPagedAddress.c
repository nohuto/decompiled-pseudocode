/*
 * XREFs of MiLockPagedAddress @ 0x140245DF4
 * Callers:
 *     MiLockPagedRange @ 0x1406C2718 (MiLockPagedRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 AnyMultiplexedVm; // rsi
  int v6; // r9d
  char v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v7 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v8 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = v7;
      MiMakeSystemAddressValid(v2, 0, 0, v6, 4);
      v9 = MI_READ_PTE_LOCK_FREE(v2);
      v20 = v9;
      if ( (v9 & 1) != 0 )
        break;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
      LOBYTE(v16) = v7;
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v16);
      v17 = MmAccessFault(0LL, BugCheckParameter4);
      v18 = v17;
      if ( v17 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v18, 0LL, BugCheckParameter4);
      }
LABEL_16:
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
    if ( (v9 & 0x200) == 0 )
      break;
    v14 = MiCopyOnWrite((__int64)(v2 << 25) >> 16);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
    if ( v14 < 0 )
    {
      LOBYTE(v15) = v7;
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v15);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v14);
      goto LABEL_16;
    }
  }
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v10, 0LL) )
    v3 = MiCaptureDirtyBitToPfn(v10);
  else
    v8 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)), v3, 1LL);
    v11 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
      MiWriteValidPteVolatile(v2, 3LL);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(BugCheckParameter4, 0LL, 1LL);
  }
  MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
  LOBYTE(v12) = v7;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v12);
  return v8;
}
