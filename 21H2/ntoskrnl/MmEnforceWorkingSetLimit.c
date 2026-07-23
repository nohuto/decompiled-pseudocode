/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1402F69E8
 * Callers:
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406F56C0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908B20 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140908BE4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  __int64 v11; // r9
  char v12; // r8
  BOOL v13; // r9d
  char v14; // cl
  char v15; // r10
  int v17; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v19[3]; // [rsp+40h] [rbp-40h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  v3 = 0;
  v4 = 0;
  v5 = a2 & 0xF7;
  v19[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  memset(&v19[1], 0, 32);
  v6 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v6 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v3 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v19);
  }
  SharedVm = MiGetSharedVm(v2);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  v9 = v8;
  KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, v10, v11);
  v17 = *(_DWORD *)(v2 + 184);
  v12 = v17;
  if ( (v5 & 8) != 0 )
  {
    v12 = v17 & 0x7F;
    LOBYTE(v17) = v17 & 0x7F;
  }
  v13 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    v12 &= ~0x40u;
    v13 = 1;
    LOBYTE(v17) = v12;
  }
  v14 = v6 | 0x80;
  if ( v12 >= 0 )
    v14 = v6;
  v15 = v14 | 0x40;
  if ( (v12 & 0x40) == 0 )
    v15 = v14;
  if ( v15 < 0 && (v15 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v2 + 112) + 6LL) >= *(_QWORD *)(v2 + 152) )
  {
    v5 = -6;
    v4 = -1073741748;
  }
  if ( (v5 & 4) != 0 )
  {
    v12 |= 0x80u;
    v13 = 1;
    LOBYTE(v17) = v12;
  }
  if ( (v5 & 1) != 0 )
  {
    v13 = 1;
    LOBYTE(v17) = v12 | 0x40;
  }
  if ( v13 )
    *(_WORD *)(v2 + 184) = v17;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetExclusive(v2, v9);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  return v4;
}
