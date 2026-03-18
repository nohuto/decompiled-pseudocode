/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C0096620
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x1C00280D0 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C00B239C (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7,
        int a8)
{
  char v9; // si
  unsigned int v11; // eax
  struct _VIDMM_GLOBAL_ALLOC *v12; // rdx
  unsigned __int64 v13; // r9
  VIDMM_GLOBAL *v14; // r11
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v9 = (char)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 348LL) & 4) == 0 )
  {
    v11 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::MapVideoApertureSegment(v14, v12, v11, a3, v13, v15, a6, a8, a7);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0ppxt_EtwWriteTransfer((__int64)this, &EventApertureMapping, a3, a4, v9, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7560LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40192LL) += a3;
}
