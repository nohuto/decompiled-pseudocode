/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068080
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A030 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026158 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00602F0 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0062E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char v4; // r15
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v9; // r8
  volatile signed __int32 **v10; // rax
  _QWORD *v11; // rcx
  _QWORD **v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r9
  _QWORD *v16; // r8
  volatile signed __int32 *v17; // rdx
  _QWORD *v18; // rbx
  VIDMM_MAPPED_VA_RANGE *v19; // rsi
  __int64 v20; // [rsp+50h] [rbp-30h]
  _QWORD *v21; // [rsp+70h] [rbp-10h] BYREF
  volatile signed __int32 *v22; // [rsp+78h] [rbp-8h]

  v22 = (volatile signed __int32 *)&v21;
  v21 = &v21;
  v4 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v4 = 1;
  }
  v5 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (volatile signed __int32 *)v5 )
      break;
    if ( *((volatile signed __int32 ***)v6 + 1) != v5 )
      goto LABEL_22;
    v7 = *(_QWORD *)v6;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_22;
    *v5 = (volatile signed __int32 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    _InterlockedIncrement(v6 + 26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v6 + 10) << 28) >> 28, *((_QWORD *)v6 + 4));
      LODWORD(v20) = v9;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        *((_QWORD *)v6 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v9,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v6 + 6),
        *((_QWORD *)v6 + 9),
        *((_QWORD *)v6 + 10),
        *((_QWORD *)v6 + 8),
        *((_QWORD *)v6 + 7),
        v20,
        *((_QWORD *)v6 + 11),
        *((_QWORD *)v6 + 12));
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad(
      (CVirtualAddressAllocator *)this,
      (struct _LIST_ENTRY *)v6 - 1,
      1,
      1,
      0);
    v10 = (volatile signed __int32 **)v22;
    if ( *(_QWORD ***)v22 != &v21 )
LABEL_22:
      __fastfail(3u);
    *((_QWORD *)v6 + 1) = v22;
    *(_QWORD *)v6 = &v21;
    *v10 = v6;
    v22 = v6;
  }
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    v11 = (_QWORD *)((char *)a2 + 144);
    while ( 1 )
    {
      v12 = (_QWORD **)*v11;
      if ( (_QWORD *)*v11 == v11 )
        break;
      if ( v12[1] != v11 )
        goto LABEL_22;
      v13 = (__int64)*v12;
      if ( (_QWORD **)(*v12)[1] != v12 )
        goto LABEL_22;
      *v11 = v13;
      *(_QWORD *)(v13 + 8) = v11;
      *v12 = 0LL;
      v12[1] = 0LL;
      if ( (_QWORD **)MEMORY[8] != v12 )
        goto LABEL_22;
      if ( (_QWORD **)MEMORY[0] != v12 )
        goto LABEL_22;
      MEMORY[0] = 0LL;
      v14 = v12 - 2;
      MEMORY[8] = 0LL;
      *v12 = 0LL;
      v12[1] = 0LL;
      v15 = (__int64)*(v12 - 2);
      if ( *(_QWORD ***)(v15 + 8) != v12 - 2 )
        goto LABEL_22;
      v16 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_22;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *((_DWORD *)v12 + 10) &= ~0x2000u;
      *v14 = 0LL;
      *(v12 - 1) = 0LL;
      v17 = v22;
      if ( *(_QWORD ***)v22 != &v21 )
        goto LABEL_22;
      v12[1] = v22;
      *v12 = &v21;
      *(_QWORD *)v17 = v12;
      v22 = (volatile signed __int32 *)v12;
    }
  }
  if ( v4 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  v18 = v21;
  while ( v18 != &v21 )
  {
    v19 = (VIDMM_MAPPED_VA_RANGE *)(v18 - 3);
    if ( (v18[5] & 0xC00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        this[11],
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v18 - 3),
        KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[11] + 8LL),
        0LL);
      *((_DWORD *)v19 + 16) &= 0xFFFFF3FF;
    }
    v18 = (_QWORD *)*v18;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v19, (struct CVirtualAddressAllocator *)this);
  }
}
