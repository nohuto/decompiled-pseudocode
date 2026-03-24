/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1402521D8
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605A6C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409089C0 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140908A84 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  __int64 v2; // rsi
  int v3; // r12d
  unsigned int v4; // r15d
  char v5; // di
  char v6; // r14
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r13
  __int64 v10; // r8
  char v11; // r8
  BOOL v12; // r9d
  char v13; // cl
  char v14; // r10
  int v16; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  v3 = 0;
  v4 = 0;
  v5 = a2 & 0xF7;
  v18[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  memset(&v18[1], 0, 32);
  v6 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v6 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v3 = 1;
    KiStackAttachProcess((ULONG_PTR)a1);
  }
  SharedVm = MiGetSharedVm(v2);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  v9 = v8;
  KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, v10);
  v16 = *(_DWORD *)(v2 + 184);
  v11 = v16;
  if ( (v5 & 8) != 0 )
  {
    v11 = v16 & 0x7F;
    LOBYTE(v16) = v16 & 0x7F;
  }
  v12 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    v11 &= ~0x40u;
    v12 = 1;
    LOBYTE(v16) = v11;
  }
  v13 = v6 | 0x80;
  if ( v11 >= 0 )
    v13 = v6;
  v14 = v13 | 0x40;
  if ( (v11 & 0x40) == 0 )
    v14 = v13;
  if ( v14 < 0 && (v14 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v2 + 112) + 6LL) >= *(_QWORD *)(v2 + 152) )
  {
    v5 = -6;
    v4 = -1073741748;
  }
  if ( (v5 & 4) != 0 )
  {
    v11 |= 0x80u;
    v12 = 1;
    LOBYTE(v16) = v11;
  }
  if ( (v5 & 1) != 0 )
  {
    v12 = 1;
    LOBYTE(v16) = v11 | 0x40;
  }
  if ( v12 )
    *(_WORD *)(v2 + 184) = v16;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetExclusive(v2, v9);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v18, 0);
  return v4;
}
