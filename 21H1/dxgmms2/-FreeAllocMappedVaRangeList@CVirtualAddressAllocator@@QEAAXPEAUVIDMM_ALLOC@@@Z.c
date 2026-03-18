/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074A7C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00136A0 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00136CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00261C8 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0074900 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00755C0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char v2; // si
  volatile signed __int32 **v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 **v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  _QWORD *v15; // r14
  __int64 v16; // rax
  volatile signed __int32 **v17; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 *v25; // [rsp+70h] [rbp-28h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-20h]

  v2 = 0;
  v26 = (volatile signed __int32 *)&v25;
  v25 = (__int64 *)&v25;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v2 = 1;
  }
  v5 = (volatile signed __int32 **)((char *)a2 + 128);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (volatile signed __int32 *)v5 )
      break;
    if ( *((volatile signed __int32 ***)v6 + 1) != v5 )
      goto LABEL_27;
    v16 = *(_QWORD *)v6;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_27;
    *v5 = (volatile signed __int32 *)v16;
    *(_QWORD *)(v16 + 8) = v5;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    _InterlockedIncrement(v6 + 26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v6 + 10) << 28) >> 28, *((_QWORD *)v6 + 4));
      LODWORD(v24) = v19;
      McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
        *((_QWORD *)v6 + 6),
        &EndGpuVirtualAddressRangeMapping,
        v19,
        this,
        VidMmAllocFromOwner,
        *((_QWORD *)v6 + 6),
        *((_QWORD *)v6 + 9),
        *((_QWORD *)v6 + 10),
        *((_QWORD *)v6 + 8),
        *((_QWORD *)v6 + 7),
        v24,
        *((_QWORD *)v6 + 11),
        *((_QWORD *)v6 + 12));
    }
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, (struct _LIST_ENTRY *)v6 - 1, 1, 1);
    v17 = (volatile signed __int32 **)v26;
    if ( *(__int64 ***)v26 != &v25 )
LABEL_27:
      __fastfail(3u);
    *((_QWORD *)v6 + 1) = v26;
    *(_QWORD *)v6 = &v25;
    *v17 = v6;
    v26 = v6;
  }
  if ( v2 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  v7 = v25;
  while ( v7 != (__int64 *)&v25 )
  {
    v8 = v7 - 3;
    v9 = v7;
    if ( (v7[5] & 0xC00) != 0 )
    {
      VIDMM_GLOBAL::UncommitVirtualAddressRange(
        this[11],
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)(v7 - 3),
        KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[11] + 8LL),
        0LL);
      *((_DWORD *)v8 + 16) &= 0xFFFFF3FF;
    }
    v7 = (__int64 *)*v7;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 32, 0xFFFFFFFF) == 1 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( *(__int64 **)(v10 + 8) != v9 )
          goto LABEL_27;
        v11 = (__int64 **)v9[1];
        if ( *v11 != v9 )
          goto LABEL_27;
        *v11 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v9 = 0LL;
      }
      v12 = v8 + 1;
      v13 = v8[1];
      if ( v13 )
      {
        if ( *(_QWORD **)(v13 + 8) != v12 )
          goto LABEL_27;
        v20 = (_QWORD *)v8[2];
        if ( (_QWORD *)*v20 != v12 )
          goto LABEL_27;
        *v20 = v13;
        *(_QWORD *)(v13 + 8) = v20;
        *v12 = 0LL;
      }
      v14 = *((_DWORD *)v8 + 16);
      if ( (v14 & 0x1000) == 0 )
      {
        v15 = v8 + 5;
        if ( v8[5] )
        {
          VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v14 << 28 >> 28, v8[7]);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
          v22 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 )
            goto LABEL_27;
          v23 = (_QWORD *)v8[6];
          if ( (_QWORD *)*v23 != v15 )
            goto LABEL_27;
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          *v15 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      operator delete(v8);
    }
  }
}
