/*
 * XREFs of IommuDisableDevicePasid @ 0x1404D81D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IommuHvSetAddressSpace @ 0x1404DA080 (IommuHvSetAddressSpace.c)
 */

__int64 __fastcall IommuDisableDevicePasid(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  KIRQL v4; // r14
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  _QWORD *v7; // rsi
  _QWORD *i; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *j; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned int v15; // ebp
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  KIRQL v34; // [rsp+78h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v34 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v7 = 0LL;
  for ( i = *(_QWORD **)(v2 + 40); i != (_QWORD *)(v2 + 40); i = (_QWORD *)*i )
  {
    v7 = i;
    if ( i[2] == *(_QWORD *)(a2 + 24) )
      break;
  }
  v9 = 0LL;
  v10 = v7 + 3;
  for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
  {
    v9 = j;
    if ( j[5] == a2 )
      break;
  }
  v12 = *v9;
  v13 = (_QWORD *)v9[1];
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
    goto LABEL_46;
  v14 = HalpHvIommu == 0;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( !v14 )
  {
    v15 = *(_DWORD *)(v2 + 16);
    v16 = *(_QWORD *)(a2 + 40);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C4A2D8)((unsigned int)v16, v15) == 3473497 )
      KeBugCheckEx(0x159u, 0x3001uLL, (unsigned int)v16, v15, 0LL);
    v4 = v34;
  }
  v17 = *(_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v10 == v10 )
  {
    if ( HalpHvIommu )
      IommuHvSetAddressSpace(a1, 0LL);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v17 + 224))(
        *(_QWORD *)(v17 + 16),
        *(_QWORD *)(a2 + 64),
        *(unsigned int *)(v2 + 16),
        0LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 16));
  --*(_DWORD *)(a2 + 32);
  v18 = v9[2];
  v19 = (_QWORD *)v9[3];
  if ( *(_QWORD **)(v18 + 8) != v9 + 2 || (_QWORD *)*v19 != v9 + 2 )
    goto LABEL_46;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( !*(_DWORD *)(a2 + 32) && !HalpHvIommu )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v17 + 208))(*(_QWORD *)(v17 + 16), *(_QWORD *)(a2 + 40), 0LL);
    v20 = *(_QWORD *)(a2 + 72);
    v21 = *(_QWORD **)(a2 + 80);
    if ( *(_QWORD *)(v20 + 8) == a2 + 72 && *v21 == a2 + 72 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *(_QWORD *)(a2 + 64) = 0LL;
      goto LABEL_29;
    }
LABEL_46:
    __fastfail(3u);
  }
LABEL_29:
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 16));
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 24));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = (unsigned int)CurrentIrql + 1;
        v25 = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v27 = v9[1544];
  if ( v27 )
    HalpMmAllocCtxFree(v22, v27);
  HalpMmAllocCtxFree(v22, (__int64)v9);
  KxReleaseSpinLock(&IommupPasidTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && v4 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v14 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
  }
  __writecr8(v4);
  return 0LL;
}
