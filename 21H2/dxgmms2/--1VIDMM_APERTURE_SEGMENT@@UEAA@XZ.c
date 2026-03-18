/*
 * XREFs of ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00E7950
 * Callers:
 *     ??_GVIDMM_APERTURE_SEGMENT@@UEAAPEAXI@Z @ 0x1C0032700 (--_GVIDMM_APERTURE_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00E7B3C (-FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00E9B90 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::~VIDMM_APERTURE_SEGMENT(
        VIDMM_APERTURE_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &VIDMM_APERTURE_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  VIDMM_APERTURE_SEGMENT::FreeGuardPages(this);
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
