/*
 * XREFs of ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00B7888
 * Callers:
 *     ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C0022500 (-VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0064F4C (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

D3DGPU_VIRTUAL_ADDRESS __fastcall VIDMM_GLOBAL::VidMmMapContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  D3DDDI_MAPGPUVIRTUALADDRESS v11; // [rsp+30h] [rbp-88h] BYREF

  memset(&v11, 0, sizeof(v11));
  v11.BaseAddress = a2->BaseAddress;
  v11.DriverProtection = a2->DriverProtection;
  v11.MaximumAddress = a2->MaximumAddress;
  v11.MinimumAddress = a2->MinimumAddress;
  v11.OffsetInPages = a2->OffsetInPages;
  v11.SizeInPages = a2->SizeInPages;
  v11.Protection.Value = a2->Protection.Value;
  v4 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
         this,
         0LL,
         *((struct _VIDMM_MULTI_ALLOC **)a2->hAllocation + 3),
         &v11,
         0,
         *(_DWORD *)(***((_QWORD ***)a2->hAllocation + 3) + 76LL) & 0x3F);
  v8 = v4;
  if ( v4 >= 0 )
    return v11.VirtualAddress;
  v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7);
  *(_QWORD *)(v9 + 24) = v8;
  WdLogEvent5_WdAssertion(v9);
  return 0LL;
}
