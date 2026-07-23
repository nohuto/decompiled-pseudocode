/*
 * XREFs of IommuUnmapDevice @ 0x1404D9DA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IommupHvUnmapDevice @ 0x1404DA570 (IommupHvUnmapDevice.c)
 */

__int64 __fastcall IommuUnmapDevice(__int64 a1, _QWORD *a2, __int64 a3)
{
  ULONG_PTR v4; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *i; // rax
  _QWORD *v11; // rbx
  _QWORD *j; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdx

  v4 = a2[5];
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(v4);
  }
  else
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD, ULONG_PTR, __int64))(a2[3] + 200LL))(*(_QWORD *)(a2[3] + 16LL), v4, a3);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v8 = (KSPIN_LOCK *)(a1 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v9 = 0LL;
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
  {
    v9 = i;
    if ( i[2] == a2[3] )
      break;
  }
  v11 = 0LL;
  for ( j = (_QWORD *)v9[3]; j != v9 + 3; j = (_QWORD *)*j )
  {
    v11 = j;
    if ( (_QWORD *)j[5] == a2 )
      break;
  }
  v13 = *v11;
  v14 = (_QWORD *)v11[1];
  if ( *(_QWORD **)(*v11 + 8LL) != v11
    || (_QWORD *)*v14 != v11
    || (*v14 = v13, *(_QWORD *)(v13 + 8) = v14, v15 = *a2, v16 = (_QWORD *)a2[1], *(_QWORD **)(*a2 + 8LL) != a2)
    || (_QWORD *)*v16 != a2 )
  {
    __fastfail(3u);
  }
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = (unsigned int)CurrentIrql + 1;
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v17, (__int64)a2);
  v24 = v11[1544];
  if ( v24 )
    HalpMmAllocCtxFree(v23, v24);
  HalpMmAllocCtxFree(v23, (__int64)v11);
  return 0LL;
}
