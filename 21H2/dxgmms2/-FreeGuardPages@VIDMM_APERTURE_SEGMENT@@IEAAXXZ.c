/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00E7B3C
 * Callers:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C00B0B2C (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00E7950 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct _MDL *v5; // rcx

  v1 = *((_QWORD *)this + 64);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 63);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v1, v3);
    *((_QWORD *)this + 64) = 0LL;
  }
  v5 = (struct _MDL *)*((_QWORD *)this + 63);
  if ( v5 )
  {
    MmFreePagesFromMdl(v5);
    ExFreePoolWithTag(*((PVOID *)this + 63), 0);
    *((_QWORD *)this + 63) = 0LL;
  }
}
