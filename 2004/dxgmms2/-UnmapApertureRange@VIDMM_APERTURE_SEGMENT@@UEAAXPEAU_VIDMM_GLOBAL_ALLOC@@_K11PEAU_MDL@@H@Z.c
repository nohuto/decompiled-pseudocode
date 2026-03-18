/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C00C5310
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x1C0028310 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00B5850 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B71CC (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  unsigned int v11; // eax
  union _LARGE_INTEGER v12; // rdx
  VIDMM_GLOBAL *v13; // r10
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    VIDMM_GLOBAL::VerifyAllocationIsIdle(this[1], a2);
  }
  if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 348LL) & 4) == 0 )
  {
    v11 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    VIDMM_GLOBAL::UnmapVideoApertureSegment(v13, a2, v11, a3, a4, v14, v12, a7);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0ppxt_EtwWriteTransfer((__int64)this, &EventApertureUnmapping, a3, a4, (char)a2, 0, a7);
  *((_QWORD *)this[1] + 946) += a3 << 12;
  *((_QWORD *)this[1] + 5024) -= a3;
}
