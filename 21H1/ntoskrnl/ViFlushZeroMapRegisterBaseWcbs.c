/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x14059B508
 * Callers:
 *     VfPutDmaAdapter @ 0x1409C9C10 (VfPutDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409C6FAC (SUBTRACT_MAP_REGISTERS.c)
 */

__int64 __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_QWORD **)(a1 + 128);
  while ( v4 != (_QWORD *)(a1 + 128) )
  {
    v5 = v4 - 9;
    v4 = (_QWORD *)*v4;
    if ( !v5[11] && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      v10 = v5[9];
      v11 = (_QWORD *)v5[10];
      if ( *(_QWORD **)(v10 + 8) != v5 + 9 || (_QWORD *)*v11 != v5 + 9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v5 + 12));
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      break;
    }
  }
  KxReleaseSpinLock(v1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
