/*
 * XREFs of IommuUnmapDevice @ 0x140527130
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IommupHvUnmapDevice @ 0x140527B98 (IommupHvUnmapDevice.c)
 */

__int64 __fastcall IommuUnmapDevice(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v7; // r14
  _QWORD *v8; // rdx
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  _QWORD *j; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx

  v4 = *a1;
  if ( HalpHvIommu )
  {
    IommupHvUnmapDevice(a2[5]);
  }
  else
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2[3] + 200LL))(*(_QWORD *)(a2[3] + 16LL), a2[5], a3);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v7 = (KSPIN_LOCK *)(v4 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
  v8 = 0LL;
  for ( i = *(_QWORD **)(v4 + 32); i != (_QWORD *)(v4 + 32); i = (_QWORD *)*i )
  {
    v8 = i;
    if ( i[2] == a2[3] )
      break;
  }
  v10 = 0LL;
  for ( j = (_QWORD *)v8[3]; j != v8 + 3; j = (_QWORD *)*j )
  {
    v10 = j;
    if ( (_QWORD *)j[5] == a2 )
      break;
  }
  v12 = *v10;
  v13 = (_QWORD *)v10[1];
  if ( *(_QWORD **)(*v10 + 8LL) != v10
    || (_QWORD *)*v13 != v10
    || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = *a2, v15 = (_QWORD *)a2[1], *(_QWORD **)(*a2 + 8LL) != a2)
    || (_QWORD *)*v15 != a2 )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  KxReleaseSpinLock(v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = (unsigned int)CurrentIrql + 1;
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  HalpMmAllocCtxFree(v16, (__int64)a2);
  v23 = v10[2056];
  if ( v23 )
    HalpMmAllocCtxFree(v22, v23);
  HalpMmAllocCtxFree(v22, (__int64)v10);
  return 0LL;
}
