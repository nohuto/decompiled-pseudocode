/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C0033260
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B08B0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // ecx
  __int64 v11; // rcx

  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 15) = a4;
  v5 = 4LL * a4;
  if ( !is_mul_ok(a4, 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x36346956u, 258LL);
  v7 = 0;
  *((_QWORD *)this + 5) = v6;
  v8 = v6;
  if ( v6 )
  {
    v10 = *((_DWORD *)this + 14);
    if ( v10 != 1 )
    {
      do
      {
        v11 = v7++;
        *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v11) = v7;
        v10 = *((_DWORD *)this + 14);
      }
      while ( v7 < v10 - 1 );
      v8 = *((_QWORD *)this + 5);
    }
    *(_DWORD *)(v8 + 4LL * (unsigned int)(v10 - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C006E848);
    WdLogSingleEntry1(6LL, 111LL);
    DxgCoreInterface[85](
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate space for CpuHostAperture page trackers.\n",
      111LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
