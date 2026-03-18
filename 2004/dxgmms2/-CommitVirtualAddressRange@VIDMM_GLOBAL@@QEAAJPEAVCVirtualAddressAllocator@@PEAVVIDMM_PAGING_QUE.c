/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00659D0
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006500C (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083EA0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE2C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00B7A80 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074680 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 */

int __fastcall VIDMM_GLOBAL::CommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        char a5,
        struct _MDL *a6,
        unsigned __int64 *a7,
        struct VIDMM_VAD_PENDING_OPERATION *a8)
{
  bool v12; // cl
  int v14; // edx
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+38h] [rbp-79h] BYREF
  __int128 v18; // [rsp+48h] [rbp-69h]
  __int128 v19; // [rsp+58h] [rbp-59h]
  __int128 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  _QWORD v23[12]; // [rsp+88h] [rbp-29h] BYREF

  memset(v23, 0, 0x58uLL);
  v12 = 0;
  v14 = (int)(*((_DWORD *)a4 + 16) << 28) >> 28;
  v23[0] = -4294967183LL;
  v23[6] = a4;
  if ( v14 == 1 )
    a6 = 0LL;
  v23[5] = a2;
  v23[7] = a6;
  v23[8] = a8;
  if ( a5 )
  {
    a8 = 0LL;
    return VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
             0LL,
             (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v23[5],
             &a8);
  }
  else
  {
    v15 = *((_QWORD *)a3 + 17);
    v18 = 0LL;
    v17[1] = v15;
    v17[0] = 113LL;
    v22 = 0LL;
    if ( v14 == 1 )
      *(_QWORD *)&v18 = *((_QWORD *)a4 + 7);
    v19 = *(_OWORD *)&v23[5];
    v21 = v23[9];
    LOBYTE(v21) = 1;
    v20 = *(_OWORD *)&v23[7];
    if ( !a7 || !dword_1C00513B8 )
      v12 = 1;
    return VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v17, v12, a7);
  }
}
