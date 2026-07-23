/*
 * XREFs of IommuMapDevice @ 0x1404D90D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IommupHvGetDeviceCapabilities @ 0x1404DA184 (IommupHvGetDeviceCapabilities.c)
 *     IommupHvUnmapDevice @ 0x1404DA570 (IommupHvUnmapDevice.c)
 *     HalpIommuLocateFromDevice @ 0x1407656C0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuMapDevice(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int *v4; // rsi
  ULONG_PTR v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // r15
  int DeviceCapabilities; // ebx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  unsigned int *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  unsigned int *v30; // rdx
  _QWORD *v31; // r8
  _QWORD *v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  __int64 v40; // rdx
  unsigned int *v42; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v43; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v45; // [rsp+90h] [rbp+40h]

  v45 = a1;
  *a4 = 0LL;
  v4 = 0LL;
  BugCheckParameter2[0] = 0LL;
  v5 = 0LL;
  v6 = a1;
  v42 = 0LL;
  v7 = 0LL;
  v43 = 0LL;
  v8 = 0LL;
  LOBYTE(a1) = 0;
  if ( *(_DWORD *)a2 != 1 || (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 10) & 3) != 0 )
  {
    DeviceCapabilities = -1073741637;
    goto LABEL_40;
  }
  if ( HalpHvIommu )
  {
    DeviceCapabilities = IommupHvGetDeviceCapabilities(a2, &v43, &v42);
    if ( DeviceCapabilities < 0 )
      return (unsigned int)DeviceCapabilities;
    v4 = v42;
    v5 = v43;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_140C4A2C0)(
            (unsigned int)v43,
            *(unsigned int *)(*(_QWORD *)v6 + 16LL),
            *v42,
            *(_DWORD *)(a3 + 4) & 0x1F | (4 * (*(_DWORD *)(a3 + 4) & 0x100)) | (*(_DWORD *)(a3 + 4) >> 4) & 0x3E0u);
  }
  else
  {
    DeviceCapabilities = HalpIommuLocateFromDevice(a2, &v42, BugCheckParameter2);
    if ( DeviceCapabilities < 0 )
      return (unsigned int)DeviceCapabilities;
    v5 = BugCheckParameter2[0];
    LOBYTE(v11) = 1;
    v4 = v42;
    v43 = BugCheckParameter2[0];
    v12 = (*((__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))v42 + 25))(
            *((_QWORD *)v42 + 2),
            BugCheckParameter2[0],
            v11);
  }
  DeviceCapabilities = v12;
  if ( v12 < 0 )
    return (unsigned int)DeviceCapabilities;
  v14 = (void *)HalpMmAllocCtxAlloc(v13, 104LL);
  v15 = (__int64)v14;
  if ( !v14 )
    goto LABEL_11;
  memset(v14, 0, 0x68uLL);
  *(_QWORD *)(v15 + 24) = v4;
  *(_QWORD *)(v15 + 40) = v5;
  ExInitializePushLock((PKSPIN_LOCK)(v15 + 48));
  v16 = *(_DWORD *)(a3 + 4);
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_DWORD *)(v15 + 56) = (v16 >> 9) & 0x1F;
  *(_QWORD *)(v15 + 96) = v15 + 88;
  *(_QWORD *)(v15 + 88) = v15 + 88;
  v18 = (void *)HalpMmAllocCtxAlloc(v17, 12360LL);
  v7 = (__int64)v18;
  if ( !v18 )
    goto LABEL_11;
  memset(v18, 0, 0x3048uLL);
  if ( !HalpHvIommu )
  {
    v20 = v4 + 96;
    goto LABEL_16;
  }
  v20 = v4 + 6;
  v21 = HalpMmAllocCtxAlloc(v19, v4[11] << 9);
  *(_QWORD *)(v7 + 12352) = v21;
  if ( !v21 )
  {
LABEL_11:
    DeviceCapabilities = -1073741670;
LABEL_42:
    if ( HalpHvIommu )
      IommupHvUnmapDevice(v5);
    else
      (*((void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))v4 + 25))(*((_QWORD *)v4 + 2), v5, 0LL);
    if ( v15 )
      HalpMmAllocCtxFree(a1, v15);
    goto LABEL_47;
  }
LABEL_16:
  *(_QWORD *)(v7 + 40) = v15;
  *(_BYTE *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 60) = v20[4];
  v22 = HalpMmAllocCtxAlloc(v19, 40LL);
  v8 = (_QWORD *)v22;
  if ( !v22 )
    goto LABEL_11;
  *(_QWORD *)(v22 + 16) = v4;
  v23 = (_QWORD *)(v22 + 24);
  v23[1] = v23;
  *v23 = v23;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = v42;
    v5 = v43;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)v45 + 24LL));
  v26 = *(_QWORD *)v45 + 48LL;
  v27 = *(_QWORD *)v26;
  if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
    goto LABEL_38;
  *(_QWORD *)(v15 + 8) = v26;
  *(_QWORD *)v15 = v27;
  *(_QWORD *)(v27 + 8) = v15;
  *(_QWORD *)v26 = v15;
  v28 = *(_QWORD *)v45 + 32LL;
  v29 = *(_QWORD **)v28;
  if ( *(_QWORD *)v28 == v28 )
    goto LABEL_26;
  do
  {
    v30 = (unsigned int *)v29[2];
    v31 = v29;
    if ( v30 == v4 )
      goto LABEL_28;
    v29 = (_QWORD *)*v29;
  }
  while ( v29 != (_QWORD *)v28 );
  if ( v30 != v4 )
  {
LABEL_26:
    v32 = *(_QWORD **)v28;
    if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
      goto LABEL_38;
    *v8 = v32;
    v31 = v8;
    v8[1] = v28;
    v32[1] = v8;
    *(_QWORD *)v28 = v8;
    v8 = 0LL;
  }
LABEL_28:
  v33 = v31 + 3;
  v34 = v31[3];
  if ( *(_QWORD **)(v34 + 8) != v31 + 3 )
LABEL_38:
    __fastfail(3u);
  *(_QWORD *)v7 = v34;
  *(_QWORD *)(v7 + 8) = v33;
  *(_QWORD *)(v34 + 8) = v7;
  *v33 = v7;
  KxReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)v45 + 24LL));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        a1 = (unsigned int)CurrentIrql + 1;
        v37 = CurrentPrcb->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v5 = v43;
        v4 = v42;
      }
    }
  }
  __writecr8(CurrentIrql);
  LOBYTE(a1) = 1;
  *a4 = v15;
LABEL_40:
  v7 = 0LL;
  if ( DeviceCapabilities < 0 )
  {
    v15 = 0LL;
    if ( (_BYTE)a1 )
      goto LABEL_42;
  }
LABEL_47:
  if ( v8 )
    HalpMmAllocCtxFree(a1, (__int64)v8);
  if ( v7 )
  {
    v40 = *(_QWORD *)(v7 + 12352);
    if ( v40 )
      HalpMmAllocCtxFree(a1, v40);
    HalpMmAllocCtxFree(a1, v7);
  }
  return (unsigned int)DeviceCapabilities;
}
