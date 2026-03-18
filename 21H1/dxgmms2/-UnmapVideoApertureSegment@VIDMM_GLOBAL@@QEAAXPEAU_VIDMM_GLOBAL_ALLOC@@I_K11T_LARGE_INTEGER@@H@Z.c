/*
 * XREFs of ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00B5870
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C00C5330 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00B58BC (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegment(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  struct _VIDMM_GLOBAL_ALLOC *v9; // r8

  v9 = a2;
  if ( a2 )
    LODWORD(a2) = *((_DWORD *)a2 + 19) & 0x3F;
  VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(this, (unsigned int)a2, v9, a3, a4, a5, a7, a8);
}
