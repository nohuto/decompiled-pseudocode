/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C00AAE20
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x1C0032900 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00AAF1C (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB07C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7)
{
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r9d
  VIDMM_GLOBAL *v14; // r10
  union _LARGE_INTEGER v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r8
  unsigned int v17; // edx
  union _LARGE_INTEGER v18; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    v11 = this[1];
    if ( a7 )
    {
      if ( VIDMM_GLOBAL::IsPagingOperationPending(v11, a2, 0) )
        WdLogSingleEntry5(0LL, 270LL, 32LL, a2, 0LL, 0LL);
    }
    else
    {
      VIDMM_GLOBAL::VerifyAllocationIsIdle(v11, a2);
    }
  }
  v12 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 436LL);
  if ( (v12 & 4) == 0 )
  {
    v13 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    v18 = v15;
    if ( a2 )
    {
      v16 = a2;
      v17 = *((_DWORD *)a2 + 17) & 0x3F;
    }
    else
    {
      v16 = 0LL;
      v17 = 0;
    }
    VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(v14, v17, v16, v13, a3, a4, v18, a7);
  }
  if ( bTracingEnabled && (byte_1C006E941 & 8) != 0 )
    McTemplateK0ppxt_EtwWriteTransfer(v12, &EventApertureUnmapping, a3, a4, (char)a2, 0, a7);
  *((_QWORD *)this[1] + 947) += a3 << 12;
  *((_QWORD *)this[1] + 5025) -= a3;
}
