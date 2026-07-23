/*
 * XREFs of IommuEnableDevicePasid @ 0x1404D84E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall IommuEnableDevicePasid(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r12
  int v12; // edi
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  KIRQL v15; // bp
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  int v35; // eax
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v43; // r15
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  _QWORD *v48; // r9
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  unsigned __int8 v56; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v58; // r9
  int v59; // eax
  __int64 v60; // rdx
  KIRQL v62; // [rsp+60h] [rbp+8h]
  __int64 v63; // [rsp+68h] [rbp+10h]

  v2 = a1[1];
  v4 = *a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v63 = v2;
  v7 = 0LL;
  v62 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v9 = (_QWORD *)HalpMmAllocCtxAlloc(v8, 40LL);
  v11 = v9;
  if ( !v9 )
    goto LABEL_2;
  v9[2] = *(_QWORD *)(a2 + 24);
  v9[4] = v9 + 3;
  v9[3] = v9 + 3;
  v20 = (void *)HalpMmAllocCtxAlloc(v10, 12360LL);
  v5 = (__int64)v20;
  if ( !v20 )
    goto LABEL_2;
  memset(v20, 0, 0x3048uLL);
  if ( HalpHvIommu )
  {
    v22 = v6 + 24;
    v23 = HalpMmAllocCtxAlloc(v21, (unsigned int)(*(_DWORD *)(v6 + 44) << 9));
    *(_QWORD *)(v5 + 12352) = v23;
    if ( !v23 )
      goto LABEL_2;
  }
  else
  {
    v22 = v6 + 384;
  }
  *(_QWORD *)(v5 + 40) = a2;
  *(_BYTE *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = v2;
  v19 = HalpHvIommu == 0;
  *(_DWORD *)(v5 + 60) = *(_DWORD *)(v22 + 16);
  if ( !v19 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C4A2D0)(*(_QWORD *)(a2 + 40), *(unsigned int *)(v2 + 16));
    if ( v12 < 0 )
      goto LABEL_3;
    goto LABEL_40;
  }
  v24 = (__int64 *)(v6 + 368);
  v25 = *(_QWORD *)(v6 + 368);
  if ( v25 != v6 + 368 )
  {
    v21 = *(unsigned int *)(v4 + 16);
    do
    {
      v7 = v25;
      if ( *(_DWORD *)(v25 + 16) == (_DWORD)v21 )
        break;
      v25 = *(_QWORD *)v25;
    }
    while ( (__int64 *)v25 != v24 );
  }
  v26 = *(_QWORD *)(a2 + 64);
  if ( v26 && v26 != v7 )
  {
    v12 = -1073741823;
LABEL_22:
    v7 = 0LL;
    goto LABEL_3;
  }
  if ( v7 && *(_DWORD *)(v7 + 16) == *(_DWORD *)(v4 + 16) )
  {
    v2 = v63;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v6 + 216))(
            *(_QWORD *)(v6 + 16),
            v7,
            *(unsigned int *)(v63 + 16));
    if ( v12 < 0 )
      goto LABEL_22;
    v28 = *(_QWORD *)(v7 + 56);
    if ( v28 )
    {
      v29 = *(_QWORD **)(v7 + 24);
      if ( v29 != (_QWORD *)(v7 + 24) )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), *(v29 - 4), v7);
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != (_QWORD *)(v7 + 24) );
        v28 = *(_QWORD *)(v7 + 56);
      }
      HalpMmAllocCtxFree(v27, v28);
      *(_QWORD *)(v7 + 56) = 0LL;
      v2 = v63;
    }
    if ( !*(_QWORD *)(a2 + 64) )
    {
      v30 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = v7;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), v30, v7);
      v31 = v7 + 24;
      v32 = (_QWORD *)(a2 + 72);
      v33 = *(_QWORD *)v31;
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
        goto LABEL_61;
      *v32 = v33;
      *(_QWORD *)(a2 + 80) = v31;
      *(_QWORD *)(v33 + 8) = v32;
      *(_QWORD *)v31 = v32;
    }
    goto LABEL_40;
  }
  v34 = (void *)HalpMmAllocCtxAlloc(v21, 64LL);
  v7 = (__int64)v34;
  if ( !v34 )
  {
LABEL_2:
    v12 = -1073741670;
    goto LABEL_3;
  }
  memset(v34, 0, 0x40uLL);
  v35 = *(_DWORD *)(v4 + 16);
  v36 = v7 + 24;
  *(_DWORD *)(v7 + 16) = v35;
  *(_QWORD *)(v7 + 32) = v7 + 24;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v6 + 216))(
          *(_QWORD *)(v6 + 16),
          v7,
          *(unsigned int *)(v63 + 16));
  if ( v12 < 0 )
    goto LABEL_3;
  v37 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 64) = v7;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), v37, v7);
  v38 = *(_QWORD *)v36;
  v39 = (_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 )
    goto LABEL_61;
  *v39 = v38;
  *(_QWORD *)(a2 + 80) = v36;
  *(_QWORD *)(v38 + 8) = v39;
  *(_QWORD *)v36 = v39;
  v40 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    goto LABEL_61;
  *(_QWORD *)(v7 + 8) = v24;
  *(_QWORD *)v7 = v40;
  *(_QWORD *)(v40 + 8) = v7;
  *v24 = v7;
  v2 = v63;
LABEL_40:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v43 = (KSPIN_LOCK *)(a2 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 16));
  ++*(_DWORD *)(a2 + 32);
  v44 = (_QWORD *)(v63 + 40);
  v45 = *(_QWORD **)(v63 + 40);
  if ( v45 == (_QWORD *)(v63 + 40) )
    goto LABEL_49;
  v46 = *(_QWORD *)(a2 + 24);
  do
  {
    v47 = v45[2];
    v48 = v45;
    if ( v47 == v46 )
      goto LABEL_51;
    v45 = (_QWORD *)*v45;
  }
  while ( v45 != v44 );
  if ( v47 != v46 )
  {
LABEL_49:
    v49 = *v44;
    if ( *(_QWORD **)(*v44 + 8LL) != v44 )
      goto LABEL_61;
    *v11 = v49;
    v48 = v11;
    v11[1] = v44;
    *(_QWORD *)(v49 + 8) = v11;
    *v44 = v11;
    v11 = 0LL;
  }
LABEL_51:
  v50 = v48 + 3;
  v51 = v48[3];
  if ( *(_QWORD **)(v51 + 8) != v48 + 3 )
    goto LABEL_61;
  *(_QWORD *)(v5 + 8) = v50;
  v52 = (__int64 *)(a2 + 88);
  *(_QWORD *)v5 = v51;
  *(_QWORD *)(v51 + 8) = v5;
  *v50 = v5;
  v53 = v5;
  v54 = *v52;
  v5 = 0LL;
  v55 = (_QWORD *)(v53 + 16);
  if ( *(__int64 **)(*v52 + 8) != v52 )
LABEL_61:
    __fastfail(3u);
  *v55 = v54;
  v55[1] = v52;
  *(_QWORD *)(v54 + 8) = v55;
  *v52 = (__int64)v55;
  KxReleaseSpinLock(v43);
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 24));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && CurrentIrql <= 0xFu && v56 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v58 = CurrentPrcb->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v7 = 0LL;
LABEL_3:
  KxReleaseSpinLock(&IommupPasidTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v14 = KeGetCurrentIrql(), v14 <= 0xFu) )
  {
    v15 = v62;
    if ( v62 <= 0xFu && v14 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v13 = (unsigned int)v62 + 1;
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v62 + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  else
  {
    v15 = v62;
  }
  __writecr8(v15);
  if ( v11 )
    HalpMmAllocCtxFree(v13, (__int64)v11);
  if ( v5 )
  {
    v60 = *(_QWORD *)(v5 + 12352);
    if ( v60 )
      HalpMmAllocCtxFree(v13, v60);
    HalpMmAllocCtxFree(v13, v5);
  }
  if ( v7 )
    HalpMmAllocCtxFree(v13, v7);
  return (unsigned int)v12;
}
