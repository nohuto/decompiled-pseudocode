/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x140267984
 * Callers:
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = (_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(v7 + 8) != a1 + 32 || (_QWORD *)*v8 != v5 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v5 = v5;
  ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  KxReleaseSpinLock(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
