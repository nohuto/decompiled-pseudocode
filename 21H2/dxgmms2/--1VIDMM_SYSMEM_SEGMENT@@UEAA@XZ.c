/*
 * XREFs of ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00E790C
 * Callers:
 *     ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x1C00326B0 (--_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00E9B90 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(
        VIDMM_SYSMEM_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &VIDMM_SYSMEM_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
