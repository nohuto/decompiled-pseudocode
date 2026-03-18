/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140243EC4
 * Callers:
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     IoReferenceIoAttributionFromThread @ 0x1402F5EA0 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  v14 = 0LL;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = IoReferenceIoAttributionFromThread(CurrentThread, &v14);
    if ( (int)result >= 0 )
    {
      v5 = v14;
      if ( v14 == 8LL * *(_QWORD *)(v3 + 120) )
      {
        v6 = v14;
      }
      else
      {
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v8 = *(_QWORD *)(v3 + 120);
        v9 = v7;
        v10 = 8 * v8;
        *(_QWORD *)(v3 + 120) = (v5 >> 3) | v8 & 0xE000000000000000uLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v13 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
        if ( !v10 )
          return result;
        v6 = v10;
      }
      return IoDiskIoAttributionDereference(v6);
    }
  }
  return result;
}
