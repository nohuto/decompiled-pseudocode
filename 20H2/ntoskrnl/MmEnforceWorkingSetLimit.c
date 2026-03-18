/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14023CEFC
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14090B210 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x14090B2D4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, __int64 a2)
{
  unsigned __int64 *v2; // rsi
  int v3; // r12d
  unsigned int v4; // r15d
  char v5; // di
  char v6; // r14
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // r13
  char v10; // r8
  BOOL v11; // r9d
  char v12; // cl
  char v13; // r10
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = &a1[1].ActiveProcessorsPadding[6];
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
  SharedVm = MiGetSharedVm(v2, a2);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4ECC0;
  v9 = v8;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4ECC0);
  v16 = *((_DWORD *)v2 + 46);
  v10 = v16;
  if ( (v5 & 8) != 0 )
  {
    v10 = v16 & 0x7F;
    LOBYTE(v16) = v16 & 0x7F;
  }
  v11 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    v10 &= ~0x40u;
    v11 = 1;
    LOBYTE(v16) = v10;
  }
  v12 = v6 | 0x80;
  if ( v10 >= 0 )
    v12 = v6;
  v13 = v12 | 0x40;
  if ( (v10 & 0x40) == 0 )
    v13 = v12;
  if ( v13 < 0 && (v13 & 0x40) != 0 && v2[14] + 6 >= v2[19] )
  {
    v5 = -6;
    v4 = -1073741748;
  }
  if ( (v5 & 4) != 0 )
  {
    v10 |= 0x80u;
    v11 = 1;
    LOBYTE(v16) = v10;
  }
  if ( (v5 & 1) != 0 )
  {
    v11 = 1;
    LOBYTE(v16) = v10 | 0x40;
  }
  if ( v11 )
    *((_WORD *)v2 + 92) = v16;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v14) = v9;
  MiUnlockWorkingSetExclusive(v2, v14);
  if ( v3 )
    KiUnstackDetachProcess(v18, 0LL);
  return v4;
}
