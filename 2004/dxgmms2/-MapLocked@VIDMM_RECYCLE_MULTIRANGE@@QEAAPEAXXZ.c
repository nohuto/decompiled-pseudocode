/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00C2680
 * Callers:
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00C2630 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012C04 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0060E30 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C3C94 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_MULTIRANGE::MapLocked(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *result; // rax
  void *v3; // r14
  __int64 v4; // rcx
  int v5; // edx
  char v6; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // r9
  __int64 v17; // r10
  __int64 v18; // rcx
  PVOID v19; // rax
  struct _MDL *v20; // rcx
  void *v21; // r9
  __int64 v22; // r10
  unsigned __int8 v23; // [rsp+40h] [rbp-68h] BYREF
  char v24; // [rsp+41h] [rbp-67h]
  PVOID MappedBase; // [rsp+48h] [rbp-60h] BYREF
  PVOID VirtualAddress[3]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-40h] BYREF

  VirtualAddress[2] = this;
  result = (void *)*((_QWORD *)this + 22);
  if ( !result )
  {
    VirtualAddress[0] = 0LL;
    MappedBase = 0LL;
    v3 = (void *)(*((_QWORD *)this + 5) - *((_QWORD *)this + 6));
    VirtualAddress[1] = v3;
    v23 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL),
      &ApcState);
    v4 = *((_QWORD *)this + 10);
    v5 = **(_DWORD **)(v4 + 32);
    if ( (unsigned int)(v5 - 3) > 1 )
    {
      v6 = 0;
      v24 = 0;
      VirtualAddress[0] = *((PVOID *)this + 6);
    }
    else
    {
      v6 = 1;
      v24 = 1;
      v7 = VidMmRecycleHeapMapSection(
             *(PVOID *)(v4 + 56),
             *((_QWORD *)this + 6),
             (unsigned __int64)v3,
             v5 == 4,
             VirtualAddress,
             &MappedBase,
             0,
             &v23);
      v10 = v7;
      if ( v7 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8);
        v11[3] = v3;
        v11[4] = *((_QWORD *)this + 6);
        v11[5] = *((_QWORD *)this + 10);
        v11[6] = v10;
        v11[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v11);
LABEL_30:
        KeUnstackDetachProcess(&ApcState);
        return 0LL;
      }
    }
    Mdl = IoAllocateMdl(VirtualAddress[0], (ULONG)v3, 0, 0, 0LL);
    *((_QWORD *)this + 23) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
      v14 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v14 + 24) = 4451LL;
      WdLogEvent5_WdLowResource(v14);
      v20 = (struct _MDL *)*((_QWORD *)this + 23);
      if ( v20 )
      {
        IoFreeMdl(v20);
        *((_QWORD *)this + 23) = 0LL;
      }
      if ( v6 )
      {
        if ( !v23 )
          PsGetCurrentProcess(v20);
        if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                       *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                       (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
        {
          if ( v21 )
            MmUnmapViewOfSection(v21, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v21, *(PVOID *)(v22 + 56), MappedBase);
        }
      }
      goto LABEL_30;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    if ( v6 )
    {
      if ( !v23 )
        PsGetCurrentProcess(v15);
      if ( (unsigned __int64)v3 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                                     *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL),
                                     (unsigned int)(**(_DWORD **)(*((_QWORD *)this + 10) + 32LL) - 5) <= 1) )
      {
        if ( v16 )
          MmUnmapViewOfSection(v16, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v16, *(PVOID *)(v17 + 56), MappedBase);
      }
    }
    v18 = *((_QWORD *)this + 23);
    if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
      v19 = *(PVOID *)(v18 + 24);
    else
      v19 = MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 22) = v19;
    KeUnstackDetachProcess(&ApcState);
    return (void *)*((_QWORD *)this + 22);
  }
  return result;
}
