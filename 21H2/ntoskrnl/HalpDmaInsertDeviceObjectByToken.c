/*
 * XREFs of HalpDmaInsertDeviceObjectByToken @ 0x140379224
 * Callers:
 *     HalpDmaCheckAdapterToken @ 0x1404B9150 (HalpDmaCheckAdapterToken.c)
 *     HalpDmaLinkDeviceObjectByToken @ 0x1407649A0 (HalpDmaLinkDeviceObjectByToken.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpDmaInsertDeviceObjectByToken(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rdi
  __int64 *i; // rax
  _OWORD *PoolWithTag; // rax
  _QWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  v4 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaPdoListLock);
  for ( i = (__int64 *)HalpDmaPdoList; i != &HalpDmaPdoList; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      if ( !i[3] )
        i[3] = a2;
      goto LABEL_6;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206C6148u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    *((_BYTE *)PoolWithTag + 32) = a3;
    v11 = (_QWORD *)qword_140C4BF28;
    if ( *(__int64 **)qword_140C4BF28 != &HalpDmaPdoList )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &HalpDmaPdoList;
    *((_QWORD *)PoolWithTag + 1) = v11;
    *v11 = PoolWithTag;
    qword_140C4BF28 = (__int64)PoolWithTag;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_6:
  KxReleaseSpinLock(&HalpDmaPdoListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v4;
}
