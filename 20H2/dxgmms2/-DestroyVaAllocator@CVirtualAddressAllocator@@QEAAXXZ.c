/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0083EF4
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B740 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007E17C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0081170 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00BAF10 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00BDA54 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0012D28 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024D6C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0083ECC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C008831C (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this)
{
  __int64 v2; // rcx
  unsigned int i; // esi
  VIDMM_PAGE_DIRECTORY **v4; // rdi
  struct _RTL_BALANCED_NODE *v5; // rcx
  struct _RTL_BALANCED_NODE *v6; // rax
  struct _RTL_BALANCED_NODE *v7; // rax
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v9; // rdi
  struct _RTL_BALANCED_NODE *v10; // rcx
  struct _RTL_BALANCED_NODE *v11; // rax
  struct _RTL_BALANCED_NODE *v12; // rax
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  VIDMM_DEVICE *v16; // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        v2,
        &DestroyGpuVirtualAddressAllocator,
        *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL) + 72LL),
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 11) + 7000LL); ++i )
    {
      v4 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( v4 && *v4 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v4, (PRKPROCESS **)this, 0LL);
        *v4 = 0LL;
      }
    }
  }
  v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v5->Children[0] )
        {
          v6 = v5;
          v5 = v5->Children[0];
          v6->Children[0] = 0LL;
        }
        if ( !v5->Children[1] )
          break;
        v7 = v5;
        v5 = v5->Children[1];
        v7->Children[1] = 0LL;
      }
      ParentValue = v5->ParentValue;
      FreeVadAvl(v5, 0LL);
      v9 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        break;
      v5 = (struct _RTL_BALANCED_NODE *)v9;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v10 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v10->Children[0] )
        {
          v11 = v10;
          v10 = v10->Children[0];
          v11->Children[0] = 0LL;
        }
        if ( !v10->Children[1] )
          break;
        v12 = v10;
        v10 = v10->Children[1];
        v12->Children[1] = 0LL;
      }
      v13 = v10->ParentValue;
      FreeVadAvl(v10, 0LL);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        break;
      v10 = (struct _RTL_BALANCED_NODE *)v14;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v15 = *((_QWORD *)this + 12);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 96) & 2) == 0 )
    {
      v16 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
      if ( v16 )
        VIDMM_DEVICE::`scalar deleting destructor'(v16);
    }
  }
  operator delete(*((void **)this + 15));
  operator delete(this);
}
