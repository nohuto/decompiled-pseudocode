/*
 * XREFs of IommuMapDevice @ 0x1404D74C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     IommupHvGetDeviceCapabilities @ 0x1404D8534 (IommupHvGetDeviceCapabilities.c)
 *     IommupHvUnmapDevice @ 0x1404D8920 (IommupHvUnmapDevice.c)
 *     HalpIommuLocateFromDevice @ 0x140762230 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall IommuMapDevice(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  bool v5; // zf
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // r8
  int DeviceCapabilities; // r15d
  ULONG_PTR v11; // r12
  unsigned int *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int8 CurrentIrql; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  unsigned int *v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  unsigned int *v42; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v43; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-10h] BYREF

  v5 = HalpHvIommu == 0;
  *a4 = 0LL;
  v42 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v43 = 0LL;
  BugCheckParameter2[0] = 0LL;
  if ( v5 )
  {
    DeviceCapabilities = HalpIommuLocateFromDevice(a2, &v42, BugCheckParameter2);
    if ( DeviceCapabilities < 0 )
      return (unsigned int)DeviceCapabilities;
    v11 = BugCheckParameter2[0];
    LOBYTE(v9) = 1;
    v12 = v42;
    v43 = BugCheckParameter2[0];
    v13 = (*((__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))v42 + 25))(
            *((_QWORD *)v42 + 2),
            BugCheckParameter2[0],
            v9);
  }
  else
  {
    DeviceCapabilities = IommupHvGetDeviceCapabilities(a2, &v43, &v42);
    if ( DeviceCapabilities < 0 )
      return (unsigned int)DeviceCapabilities;
    v12 = v42;
    v11 = v43;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_140C4A360)(
            (unsigned int)v43,
            *(unsigned int *)(*(_QWORD *)a1 + 16LL),
            *v42,
            *(_DWORD *)(a3 + 4) & 0x1F | (4 * (*(_DWORD *)(a3 + 4) & 0x100)) | (*(_DWORD *)(a3 + 4) >> 4) & 0x3E0u);
  }
  DeviceCapabilities = v13;
  if ( v13 < 0 )
    return (unsigned int)DeviceCapabilities;
  v15 = (void *)HalpMmAllocCtxAlloc(v14, 104LL);
  v16 = (__int64)v15;
  if ( v15 )
  {
    memset(v15, 0, 0x68uLL);
    *(_QWORD *)(v16 + 24) = v12;
    *(_QWORD *)(v16 + 40) = v11;
    ExInitializePushLock((PKSPIN_LOCK)(v16 + 48));
    v17 = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_DWORD *)(v16 + 56) = (v17 >> 9) & 0x1F;
    *(_QWORD *)(v16 + 96) = v16 + 88;
    *(_QWORD *)(v16 + 88) = v16 + 88;
    v19 = (void *)HalpMmAllocCtxAlloc(v18, 12360LL);
    v7 = (__int64)v19;
    if ( v19 )
    {
      memset(v19, 0, 0x3048uLL);
      if ( HalpHvIommu )
      {
        v21 = v12 + 6;
        v22 = HalpMmAllocCtxAlloc(v20, v12[11] << 9);
        *(_QWORD *)(v7 + 12352) = v22;
        if ( !v22 )
          goto LABEL_34;
      }
      else
      {
        v21 = v12 + 96;
      }
      *(_QWORD *)(v7 + 40) = v16;
      *(_BYTE *)(v7 + 32) = 0;
      *(_DWORD *)(v7 + 60) = v21[4];
      v23 = (_QWORD *)HalpMmAllocCtxAlloc(v20, 40LL);
      v8 = v23;
      if ( v23 )
      {
        v23[2] = v12;
        v23[4] = v23 + 3;
        v23[3] = v23 + 3;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v12 = v42;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)a1 + 24LL));
        v26 = *(_QWORD *)a1 + 48LL;
        v27 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
        {
          *(_QWORD *)(v16 + 8) = v26;
          *(_QWORD *)v16 = v27;
          *(_QWORD *)(v27 + 8) = v16;
          *(_QWORD *)v26 = v16;
          v28 = *(_QWORD *)a1 + 32LL;
          v29 = *(_QWORD **)v28;
          if ( *(_QWORD *)v28 == v28 )
            goto LABEL_22;
          do
          {
            v30 = (unsigned int *)v29[2];
            v31 = v29;
            if ( v30 == v12 )
              goto LABEL_24;
            v29 = (_QWORD *)*v29;
          }
          while ( v29 != (_QWORD *)v28 );
          if ( v30 != v12 )
          {
LABEL_22:
            v32 = *(_QWORD **)v28;
            if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
              goto LABEL_33;
            *v8 = v32;
            v31 = v8;
            v8[1] = v28;
            v32[1] = v8;
            *(_QWORD *)v28 = v8;
            v8 = 0LL;
          }
LABEL_24:
          v33 = v31 + 3;
          v34 = v31[3];
          if ( *(_QWORD **)(v34 + 8) == v31 + 3 )
          {
            *(_QWORD *)v7 = v34;
            *(_QWORD *)(v7 + 8) = v33;
            *(_QWORD *)(v34 + 8) = v7;
            *v33 = v7;
            v7 = 0LL;
            KxReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)a1 + 24LL));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v36 = KeGetCurrentIrql();
                if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v35 = (unsigned int)CurrentIrql + 1;
                  v38 = CurrentPrcb->SchedulerAssist;
                  v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v5 = (v39 & v38[5]) == 0;
                  v38[5] &= v39;
                  if ( v5 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(CurrentIrql);
            *a4 = v16;
            goto LABEL_39;
          }
        }
LABEL_33:
        __fastfail(3u);
      }
    }
  }
LABEL_34:
  if ( HalpHvIommu )
    IommupHvUnmapDevice(v11);
  else
    (*((void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))v12 + 25))(*((_QWORD *)v12 + 2), v11, 0LL);
  DeviceCapabilities = -1073741670;
  if ( v16 )
  {
    HalpMmAllocCtxFree(v35, v16);
LABEL_39:
    if ( v8 )
      HalpMmAllocCtxFree(v35, (__int64)v8);
  }
  if ( v7 )
  {
    v40 = *(_QWORD *)(v7 + 12352);
    if ( v40 )
      HalpMmAllocCtxFree(v35, v40);
    HalpMmAllocCtxFree(v35, v7);
  }
  return (unsigned int)DeviceCapabilities;
}
