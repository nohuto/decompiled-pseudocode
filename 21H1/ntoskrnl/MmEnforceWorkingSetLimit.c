/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1402D8388
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140671D90 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140904310 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409043D4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  int v5; // r12d
  unsigned int v6; // r15d
  char v7; // di
  char v8; // r14
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int8 v11; // r13
  char v12; // r8
  BOOL v13; // r9d
  char v14; // cl
  char v15; // r10
  __int64 v16; // r8
  _DWORD *v17; // r9
  int v19; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v21[3]; // [rsp+40h] [rbp-40h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = (__int64)&a1[1].ActiveProcessorsPadding[6];
  v5 = 0;
  v6 = 0;
  v7 = a2 & 0xF7;
  v21[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v7 = a2;
  memset(&v21[1], 0, 32);
  v8 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v8 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)v21, a4);
  }
  SharedVm = MiGetSharedVm(v4);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4ED80;
  v11 = v10;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4ED80);
  v19 = *(_DWORD *)(v4 + 184);
  v12 = v19;
  if ( (v7 & 8) != 0 )
  {
    v12 = v19 & 0x7F;
    LOBYTE(v19) = v19 & 0x7F;
  }
  v13 = (v7 & 8) != 0;
  if ( (v7 & 2) != 0 )
  {
    v12 &= ~0x40u;
    v13 = 1;
    LOBYTE(v19) = v12;
  }
  v14 = v8 | 0x80;
  if ( v12 >= 0 )
    v14 = v8;
  v15 = v14 | 0x40;
  if ( (v12 & 0x40) == 0 )
    v15 = v14;
  if ( v15 < 0 && (v15 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v4 + 112) + 6LL) >= *(_QWORD *)(v4 + 152) )
  {
    v7 = -6;
    v6 = -1073741748;
  }
  if ( (v7 & 4) != 0 )
  {
    v12 |= 0x80u;
    v13 = 1;
    LOBYTE(v19) = v12;
  }
  if ( (v7 & 1) != 0 )
  {
    v13 = 1;
    LOBYTE(v19) = v12 | 0x40;
  }
  if ( v13 )
    *(_WORD *)(v4 + 184) = v19;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetExclusive(v4, v11);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v21, 0LL, v16, v17);
  return v6;
}
