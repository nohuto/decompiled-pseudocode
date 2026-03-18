/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00C73B0
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C00285B0 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00C3E2C (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00C3E70 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00C5C14 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0028574 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C008F9F0 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00C80FC (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rax
  struct _MDL *v6; // rcx
  VIDMM_LINEAR_POOL *v7; // rcx

  v3 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v3 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this, a2, a3);
  if ( this[17] != this + 17 )
  {
    v5 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v5 + 24) = 270LL;
    *(_QWORD *)(v5 + 32) = 12LL;
    *(_QWORD *)(v5 + 40) = this;
    *(_OWORD *)(v5 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  operator delete(this[31]);
  VIDMM_SEGMENT::FreeForwardProgressMdl((VIDMM_SEGMENT *)this);
  v6 = (struct _MDL *)this[34];
  if ( v6 )
  {
    MmFreePagesFromMdl(v6);
    ExFreePoolWithTag(this[34], 0);
    this[34] = 0LL;
  }
  v7 = (VIDMM_LINEAR_POOL *)this[19];
  if ( v7 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v7);
}
