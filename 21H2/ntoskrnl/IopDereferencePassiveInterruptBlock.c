/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x14050D470
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14050D7F0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1408A1800 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050D37C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050D3F4 (IopAcquirePassiveInterruptBlockLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // bp
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  unsigned __int8 v12; // di
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0;
  v16 = 0;
  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v17);
  IopAcquirePassiveInterruptBlockLock((__int64)P, &v16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v3 = *(_QWORD **)P;
    v4 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v4 != P )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v6 = v16;
    if ( v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = v16;
      v9 = ~(unsigned __int16)(-1LL << (v16 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v6 = v16;
  }
  __writecr8(v6);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v11 = KeGetCurrentIrql(), v11 <= 0xFu) )
  {
    v12 = v17;
    if ( v17 <= 0xFu && v11 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v12 = v17;
      v15 = ~(unsigned __int16)(-1LL << (v17 + 1));
      v10 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
  }
  else
  {
    v12 = v17;
  }
  __writecr8(v12);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
