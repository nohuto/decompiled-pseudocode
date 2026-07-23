/*
 * XREFs of MiContractPagingFiles @ 0x140273D28
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiOkToShrinkPageFiles @ 0x140273DC4 (MiOkToShrinkPageFiles.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueuePageFileExtension @ 0x14054403C (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v12; // zf

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 7464), *(_QWORD *)(a1 + 7592));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 6936);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 6944;
      do
      {
        v6 = *(_QWORD **)v5;
        result = *(unsigned __int16 *)(*(_QWORD *)v5 + 204LL);
        if ( (result & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < v3 );
    }
    if ( v4 != v3 )
    {
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
      v9 = v7;
      if ( *(_QWORD *)(a1 + 560) == -1LL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v12 )
                result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        *(_QWORD *)(a1 + 528) = 0LL;
        LOBYTE(v8) = v7;
        *(_BYTE *)(a1 + 607) |= 0x10u;
        *(_QWORD *)(a1 + 552) = a1;
        *(_QWORD *)(a1 + 560) = -1LL;
        return MiQueuePageFileExtension(a1 + 528, 0LL, v8);
      }
    }
  }
  return result;
}
