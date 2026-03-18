/*
 * XREFs of IommuEnableDevicePasid @ 0x140525930
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall IommuEnableDevicePasid(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r14
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
  __int64 *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // r15
  void (__fastcall *v30)(_QWORD, __int64, __int64); // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  int v36; // eax
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v44; // r14
  KSPIN_LOCK *v45; // r15
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  _QWORD *v50; // r9
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rax
  unsigned __int8 v58; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v60; // r9
  int v61; // eax
  __int64 v62; // rdx
  KIRQL v64; // [rsp+60h] [rbp+8h]
  __int64 v65; // [rsp+68h] [rbp+10h]

  v2 = a1[1];
  v4 = *a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v65 = v2;
  v7 = 0LL;
  v64 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v9 = (_QWORD *)HalpMmAllocCtxAlloc(v8, 40LL);
  v11 = v9;
  if ( !v9 )
    goto LABEL_2;
  v9[2] = *(_QWORD *)(a2 + 24);
  v9[4] = v9 + 3;
  v9[3] = v9 + 3;
  v20 = (void *)HalpMmAllocCtxAlloc(v10, 16456LL);
  v5 = (__int64)v20;
  if ( !v20 )
    goto LABEL_2;
  memset(v20, 0, 0x4048uLL);
  if ( HalpHvIommu )
  {
    v22 = v6 + 24;
    v23 = HalpMmAllocCtxAlloc(v21, (unsigned int)(*(_DWORD *)(v6 + 44) << 9));
    *(_QWORD *)(v5 + 16448) = v23;
    if ( !v23 )
      goto LABEL_2;
  }
  else
  {
    v22 = v6 + 400;
  }
  *(_QWORD *)(v5 + 40) = a2;
  *(_BYTE *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = v2;
  v19 = HalpHvIommu == 0;
  *(_DWORD *)(v5 + 60) = *(_DWORD *)(v22 + 16);
  if ( !v19 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C4C590)(*(_QWORD *)(a2 + 40), *(unsigned int *)(v2 + 16));
    if ( v12 < 0 )
      goto LABEL_3;
    goto LABEL_43;
  }
  v24 = (__int64 *)(v6 + 384);
  v25 = *(_QWORD *)(v6 + 384);
  if ( v25 != v6 + 384 )
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
  v26 = *(_QWORD *)(a2 + 88);
  if ( v26 && v26 != v7 )
  {
    v12 = -1073741823;
LABEL_22:
    v7 = 0LL;
    goto LABEL_3;
  }
  if ( v7 && *(_DWORD *)(v7 + 16) == *(_DWORD *)(v4 + 16) )
  {
    v2 = v65;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v6 + 216))(
            *(_QWORD *)(v6 + 16),
            v7,
            *(unsigned int *)(v65 + 16));
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
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), *(v29 - 7), v7);
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != (_QWORD *)(v7 + 24) );
        v28 = *(_QWORD *)(v7 + 56);
      }
      *(_QWORD *)(v7 + 56) = 0LL;
      v30 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v6 + 360);
      if ( v30 )
        v30(*(_QWORD *)(v6 + 16), v7, v28);
      else
        HalpMmAllocCtxFree(v27, v28);
      v2 = v65;
    }
    if ( !*(_QWORD *)(a2 + 88) )
    {
      v31 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 88) = v7;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), v31, v7);
      v32 = v7 + 24;
      v33 = (_QWORD *)(a2 + 96);
      v34 = *(_QWORD *)v32;
      if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
        goto LABEL_64;
      *v33 = v34;
      *(_QWORD *)(a2 + 104) = v32;
      *(_QWORD *)(v34 + 8) = v33;
      *(_QWORD *)v32 = v33;
    }
    goto LABEL_43;
  }
  v35 = (void *)HalpMmAllocCtxAlloc(v21, 64LL);
  v7 = (__int64)v35;
  if ( !v35 )
  {
LABEL_2:
    v12 = -1073741670;
    goto LABEL_3;
  }
  memset(v35, 0, 0x40uLL);
  v36 = *(_DWORD *)(v4 + 16);
  v37 = v7 + 24;
  *(_DWORD *)(v7 + 16) = v36;
  *(_QWORD *)(v7 + 32) = v7 + 24;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v6 + 216))(
          *(_QWORD *)(v6 + 16),
          v7,
          *(unsigned int *)(v65 + 16));
  if ( v12 < 0 )
    goto LABEL_3;
  v38 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 88) = v7;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(v6 + 208))(*(_QWORD *)(v6 + 16), v38, v7);
  v39 = *(_QWORD *)v37;
  v40 = (_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
    goto LABEL_64;
  *v40 = v39;
  *(_QWORD *)(a2 + 104) = v37;
  *(_QWORD *)(v39 + 8) = v40;
  *(_QWORD *)v37 = v40;
  v41 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    goto LABEL_64;
  *(_QWORD *)(v7 + 8) = v24;
  *(_QWORD *)v7 = v41;
  *(_QWORD *)(v41 + 8) = v7;
  *v24 = v7;
  v2 = v65;
LABEL_43:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v44 = (KSPIN_LOCK *)(v2 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v45 = (KSPIN_LOCK *)(a2 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 16));
  ++*(_DWORD *)(a2 + 32);
  v46 = (_QWORD *)(v65 + 40);
  v47 = *(_QWORD **)(v65 + 40);
  if ( v47 == (_QWORD *)(v65 + 40) )
    goto LABEL_52;
  v48 = *(_QWORD *)(a2 + 24);
  do
  {
    v49 = v47[2];
    v50 = v47;
    if ( v49 == v48 )
      goto LABEL_54;
    v47 = (_QWORD *)*v47;
  }
  while ( v47 != v46 );
  if ( v49 != v48 )
  {
LABEL_52:
    v51 = *v46;
    if ( *(_QWORD **)(*v46 + 8LL) != v46 )
      goto LABEL_64;
    *v11 = v51;
    v50 = v11;
    v11[1] = v46;
    *(_QWORD *)(v51 + 8) = v11;
    *v46 = v11;
    v11 = 0LL;
  }
LABEL_54:
  v52 = v50 + 3;
  v53 = v50[3];
  if ( *(_QWORD **)(v53 + 8) != v50 + 3 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 8) = v52;
  v54 = (__int64 *)(a2 + 112);
  *(_QWORD *)v5 = v53;
  *(_QWORD *)(v53 + 8) = v5;
  *v52 = v5;
  v55 = v5;
  v56 = *v54;
  v5 = 0LL;
  v57 = (_QWORD *)(v55 + 16);
  if ( *(__int64 **)(*v54 + 8) != v54 )
LABEL_64:
    __fastfail(3u);
  *v57 = v56;
  v57[1] = v54;
  *(_QWORD *)(v56 + 8) = v57;
  *v54 = (__int64)v57;
  KxReleaseSpinLock(v45);
  KxReleaseSpinLock(v44);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v58 = KeGetCurrentIrql();
      if ( v58 <= 0xFu && CurrentIrql <= 0xFu && v58 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v60 = CurrentPrcb->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
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
    v15 = v64;
    if ( v64 <= 0xFu && v14 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v13 = (unsigned int)v64 + 1;
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v64 + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  else
  {
    v15 = v64;
  }
  __writecr8(v15);
  if ( v11 )
    HalpMmAllocCtxFree(v13, (__int64)v11);
  if ( v5 )
  {
    v62 = *(_QWORD *)(v5 + 16448);
    if ( v62 )
      HalpMmAllocCtxFree(v13, v62);
    HalpMmAllocCtxFree(v13, v5);
  }
  if ( v7 )
    HalpMmAllocCtxFree(v13, v7);
  return (unsigned int)v12;
}
