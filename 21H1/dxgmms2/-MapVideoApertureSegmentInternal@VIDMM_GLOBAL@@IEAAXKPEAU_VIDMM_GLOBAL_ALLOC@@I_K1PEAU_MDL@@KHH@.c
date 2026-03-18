/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00B275C
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C00B26FC (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C56D0 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E00 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00753D4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075940 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075B1C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AF07C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00B0508 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        struct _MDL *a7,
        unsigned int a8,
        char a9,
        int a10)
{
  bool v10; // zf
  struct _VIDMM_GLOBAL_ALLOC *v15; // r8
  SIZE_T v16; // rax
  DXGFASTMUTEX *v17; // rax
  struct _KTHREAD **v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  struct _LIST_ENTRY v22; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v23; // [rsp+58h] [rbp-B0h] BYREF

  v10 = (*((_BYTE *)this + 40937) & 0x10) == 0;
  v22 = 0LL;
  if ( !v10 )
  {
    v22.Blink = &v22;
    v22.Flink = &v22;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v22);
  }
  memset(&v23, 0, sizeof(v23));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, v15, &v23);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v23);
    v23.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v17 = a3[5];
      if ( v17 )
        v16 = *((_QWORD *)v17 + 2);
      else
        v16 = (SIZE_T)a3[6];
    }
    else
    {
      v16 = 0LL;
    }
    v23.UpdateContextAllocation.ContextAllocation = 0LL;
    v23.Fill.FillSize = v16;
    v23.MapApertureSegment.OffsetInPages = a6;
    v23.Transfer.Source.SegmentAddress.QuadPart = a5;
    v23.Fill.FillPattern = a4;
    v23.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)a7;
    v23.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v23.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    if ( a3 && a3[12] && (*(_DWORD *)a3[62] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[39]);
      v18 = (struct _KTHREAD **)a3[39];
      v23.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[12] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 584LL);
      DXGFASTMUTEX::Release(v18, v19);
    }
    v20 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v23);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v23, v20, a10, 0LL);
  }
  while ( v20 == -1071775743 );
  if ( (*((_BYTE *)this + 40937) & 0x10) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v22, v21);
}
