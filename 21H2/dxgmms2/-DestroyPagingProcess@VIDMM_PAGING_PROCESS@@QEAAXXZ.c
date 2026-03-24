/*
 * XREFs of ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BCBF4
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0097270 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00994D0 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AD91C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00120BC (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00880DC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088228 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B864C (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(
        VIDMM_PAGING_PROCESS *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  VIDMM_DEVICE *v6; // rcx
  __int64 v7; // rdi
  struct CVirtualAddressAllocator *v8; // rsi
  unsigned int i; // r15d
  VIDMM_PAGE_DIRECTORY **v10; // r14
  VIDMM_DEVICE *v11; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v6 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v6 )
    {
      VIDMM_DEVICE::UnmapPagingQueueGpuVAs(v6);
      v4 = *((_QWORD *)this + 2);
    }
    v7 = 0LL;
    if ( *(_DWORD *)(v4 + 7000) )
    {
      do
      {
        v8 = (struct CVirtualAddressAllocator *)*((_QWORD *)this + v7 + 4);
        if ( v8 )
        {
          for ( i = 0; i < *(_DWORD *)(*((_QWORD *)v8 + 11) + 7000LL); ++i )
          {
            v10 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)v8 + 15) + 32LL * i);
            if ( *v10 )
            {
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v10, v8, 0LL, a4);
              *v10 = 0LL;
            }
          }
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + v7 + 4));
          *((_QWORD *)this + v7 + 4) = 0LL;
        }
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(*((_QWORD *)this + 2) + 7000LL) );
    }
    v11 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v11 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v11);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
