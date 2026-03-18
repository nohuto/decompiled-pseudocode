/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00B555C
 * Callers:
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00B5510 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C5100 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0012614 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C007E8FC (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007EE60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C007F03C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082B34 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AED9C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00B0228 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  bool v8; // zf
  char v13; // r12
  struct _VIDMM_GLOBAL_ALLOC *v14; // r8
  SIZE_T v15; // rax
  DXGFASTMUTEX *v16; // rax
  struct _KTHREAD **v17; // rcx
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // r8
  struct _LIST_ENTRY v21; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v22; // [rsp+58h] [rbp-B0h] BYREF

  v8 = (*((_BYTE *)this + 40937) & 0x10) == 0;
  v21 = 0LL;
  if ( !v8 )
  {
    v21.Blink = &v21;
    v21.Flink = &v21;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v21);
  }
  v13 = 0;
  memset(&v22, 0, sizeof(v22));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, v14, &v22);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v22);
    v22.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v16 = a3[5];
      if ( v16 )
        v15 = *((_QWORD *)v16 + 2);
      else
        v15 = (SIZE_T)a3[6];
    }
    else
    {
      v15 = 0LL;
    }
    v22.UpdateContextAllocation.ContextAllocation = 0LL;
    v22.Fill.FillSize = v15;
    v22.MapApertureSegment.OffsetInPages = a6;
    v22.Transfer.Source.SegmentAddress.QuadPart = a5;
    v22.Fill.FillPattern = a4;
    v22.UnmapApertureSegment.DummyPage = a7;
    if ( a3 && a3[12] && (*(_DWORD *)a3[62] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[39]);
      v17 = (struct _KTHREAD **)a3[39];
      v22.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[12] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 584LL);
      DXGFASTMUTEX::Release(v17, v18);
    }
    v19 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v22);
    v13 |= VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
             this,
             a2,
             (struct _VIDMM_GLOBAL_ALLOC *)a3,
             &v22,
             v19,
             a8,
             0LL);
  }
  while ( v19 == -1071775743 );
  if ( v13 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
  if ( (*((_BYTE *)this + 40937) & 0x10) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v21, v20);
}
