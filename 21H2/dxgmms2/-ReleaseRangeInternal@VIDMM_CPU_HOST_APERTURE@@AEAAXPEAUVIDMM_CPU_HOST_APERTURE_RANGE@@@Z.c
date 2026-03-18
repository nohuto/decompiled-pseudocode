/*
 * XREFs of ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C001A5CC
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A46C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00333AC (-UnblockRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v2; // r10d
  __int64 v3; // rax
  __int64 v5; // r8
  int v6; // ecx

  v2 = *(_DWORD *)a2;
  v3 = *((unsigned int *)a2 + 1);
  if ( *(_DWORD *)a2 == -1 || (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry1(1LL, this);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Attempting to free invalid page range in CpuHostAperture 0x%p",
      this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v5 = *((_QWORD *)this + 5);
    v6 = *(_DWORD *)(v5 + 4 * v3);
    *(_DWORD *)(v5 + 4LL * (unsigned int)v3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v6;
    *((_DWORD *)this + 16) = v2;
    *(_DWORD *)a2 = -1;
    *((_DWORD *)a2 + 1) = -1;
  }
}
