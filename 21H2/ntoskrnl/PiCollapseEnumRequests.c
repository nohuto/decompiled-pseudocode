/*
 * XREFs of PiCollapseEnumRequests @ 0x14037D268
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14076DAC4 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *i; // rbx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 **v11; // rax
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v9 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      v10 = *(_DWORD *)(v3 + 24);
      if ( v10 >= 9 && (v10 <= 10 || v10 == 14) )
      {
        v11 = *(__int64 ***)(v3 + 8);
        if ( v9[1] != v3
          || *v11 != (__int64 *)v3
          || (*v11 = v9, v9[1] = (__int64)v11, v12 = *(__int64 **)(a1 + 8), *v12 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v12;
        *v12 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v9;
    }
    while ( v9 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = -1LL << ((unsigned __int8)v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)v6;
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    LOBYTE(v6) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*(_QWORD *)(i[2] + 312) + 40LL), v6);
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
