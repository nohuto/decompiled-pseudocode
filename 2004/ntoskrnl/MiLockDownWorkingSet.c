/*
 * XREFs of MiLockDownWorkingSet @ 0x140555E58
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall MiLockDownWorkingSet(_KPROCESS *a1, int a2)
{
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // bp
  unsigned __int64 v7; // rbx
  __int64 Flink; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-50h] BYREF

  v3 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  memset(v15, 0, sizeof(v15));
  KiStackAttachProcess(a1, 0LL, (__int64)v15);
  SharedVm = MiGetSharedVm(v3);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v5;
  v7 = MEMORY[0xFFFFF6FB7DBEDF68];
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *(_QWORD *)(Flink + 3944);
      Flink = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        Flink = v7;
      v7 = Flink;
      if ( (v11 & 0x42) != 0 )
        v7 = Flink | 0x42;
    }
  }
  v12 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14, Flink, v9, v10);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( a2 == 1 )
    MiAddLockedPageCharge(v12, 1LL, v9);
  else
    MiRemoveLockedPageChargeAndDecRef(v12, Flink, v9, v10);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive(v3, v6);
  return KiUnstackDetachProcess((__int64)v15, 0LL);
}
