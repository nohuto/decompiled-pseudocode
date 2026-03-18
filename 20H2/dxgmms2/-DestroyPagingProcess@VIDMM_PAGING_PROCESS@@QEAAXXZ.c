/*
 * XREFs of ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BDA54
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0093DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0096038 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AE7FC (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0012D28 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0083ECC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0083EF4 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B94EC (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(VIDMM_PAGING_PROCESS *this)
{
  __int64 v1; // rax
  VIDMM_DEVICE *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int i; // r15d
  VIDMM_PAGE_DIRECTORY **v7; // r14
  VIDMM_DEVICE *v8; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      VIDMM_DEVICE::UnmapPagingQueueGpuVAs(v3);
      v1 = *((_QWORD *)this + 2);
    }
    v4 = 0LL;
    if ( *(_DWORD *)(v1 + 7000) )
    {
      do
      {
        v5 = *((_QWORD *)this + v4 + 4);
        if ( v5 )
        {
          for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(v5 + 88) + 7000LL); ++i )
          {
            v7 = (VIDMM_PAGE_DIRECTORY **)(*(_QWORD *)(v5 + 120) + 32LL * i);
            if ( *v7 )
            {
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v7, (PRKPROCESS **)v5, 0LL);
              *v7 = 0LL;
            }
          }
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + v4 + 4));
          *((_QWORD *)this + v4 + 4) = 0LL;
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*((_QWORD *)this + 2) + 7000LL) );
    }
    v8 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v8 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v8);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
