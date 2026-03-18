/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14027B43C
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406596EC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409055F0 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409056B4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // r12d
  unsigned int v4; // r15d
  char v5; // di
  char v6; // r14
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r13
  char v10; // r8
  BOOL v11; // r9d
  char v12; // cl
  char v13; // r10
  int v15; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-40h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  v3 = 0;
  v4 = 0;
  v5 = a2 & 0xF7;
  v17[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  memset(&v17[1], 0, 32);
  v6 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v6 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v3 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)v17);
  }
  SharedVm = MiGetSharedVm(v2, a2);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  v9 = v8;
  KxAcquireQueuedSpinLock(&LockHandle);
  v15 = *(_DWORD *)(v2 + 184);
  v10 = v15;
  if ( (v5 & 8) != 0 )
  {
    v10 = v15 & 0x7F;
    LOBYTE(v15) = v15 & 0x7F;
  }
  v11 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    v10 &= ~0x40u;
    v11 = 1;
    LOBYTE(v15) = v10;
  }
  v12 = v6 | 0x80;
  if ( v10 >= 0 )
    v12 = v6;
  v13 = v12 | 0x40;
  if ( (v10 & 0x40) == 0 )
    v13 = v12;
  if ( v13 < 0 && (v13 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v2 + 112) + 6LL) >= *(_QWORD *)(v2 + 152) )
  {
    v5 = -6;
    v4 = -1073741748;
  }
  if ( (v5 & 4) != 0 )
  {
    v10 |= 0x80u;
    v11 = 1;
    LOBYTE(v15) = v10;
  }
  if ( (v5 & 1) != 0 )
  {
    v11 = 1;
    LOBYTE(v15) = v10 | 0x40;
  }
  if ( v11 )
    *(_WORD *)(v2 + 184) = v15;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetExclusive(v2, v9);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  return v4;
}
