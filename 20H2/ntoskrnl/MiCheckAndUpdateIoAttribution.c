/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140248C30
 * Callers:
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 * Callees:
 *     IoReferenceIoAttributionFromThread @ 0x1402491C8 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rcx
  KIRQL v6; // al
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DDC0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DDC0;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = IoReferenceIoAttributionFromThread(CurrentThread);
    if ( (int)result >= 0 )
    {
      if ( 8LL * *(_QWORD *)(v3 + 120) )
      {
        v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v7 = *(_QWORD *)(v3 + 120);
        v8 = v6;
        v9 = v7 & 0xE000000000000000uLL;
        v10 = 8 * v7;
        *(_QWORD *)(v3 + 120) = v9;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v13 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
        if ( !v10 )
          return result;
        v5 = v10;
      }
      else
      {
        v5 = 0LL;
      }
      return IoDiskIoAttributionDereference(v5);
    }
  }
  return result;
}
