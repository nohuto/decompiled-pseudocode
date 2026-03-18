/*
 * XREFs of ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00E8968
 * Callers:
 *     ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x1C00329A0 (--_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002CC40 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C00331EC (--1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00E9B90 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(
        VIDMM_MEMORY_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_CPU_HOST_APERTURE *v4; // rdi
  void *v6; // rdx

  v4 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
  *(_QWORD *)this = &VIDMM_MEMORY_SEGMENT::`vftable';
  if ( v4 )
  {
    VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(v4);
    operator delete(v4);
  }
  v6 = (void *)*((_QWORD *)this + 60);
  if ( v6 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v6);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, v6, a3, a4) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
