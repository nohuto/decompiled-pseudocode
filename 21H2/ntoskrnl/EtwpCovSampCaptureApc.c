/*
 * XREFs of EtwpCovSampCaptureApc @ 0x1405AE650
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF390 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1405AFA0C (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140942B8C (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct _KTHREAD *result; // rax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0;
  v4 = a1 - 56;
  v5 = *a3;
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v17, 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 56 + 48) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 264));
    *(_QWORD *)(v4 + 64) = 0LL;
    v8 = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 264));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  v14 = qword_140C198C8;
  memset((void *)(v4 + 56), 0, 0x58uLL);
  v15 = *(_QWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 144) = 0;
  EtwpCovSampCaptureReleaseToLookaside(v14, v15, v4);
  if ( (int)EtwpCovSampSafeForUserAddressCapture(1LL, &v18) >= 0 && !v18 )
    EtwpCovSampCaptureUserAddresses(v5, v6);
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}
