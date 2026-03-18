/*
 * XREFs of MiLockDownWorkingSet @ 0x1405BB938
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (__int64)&a1[1].ActiveProcessors.StaticBitmap[26];
  memset(v15, 0, sizeof(v15));
  KiStackAttachProcess(a1, 0LL, (__int64)v15, a4);
  SharedVm = (volatile LONG *)MiGetSharedVm(v5);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v8 = v7;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14, v9, v11, v12);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( a2 )
    MiAddLockedPageCharge(v10, 1LL, v11);
  else
    MiRemoveLockedPageChargeAndDecRef(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(v5, v8);
  return KiUnstackDetachProcess((__int64)v15, 0LL);
}
