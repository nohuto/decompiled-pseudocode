/*
 * XREFs of ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C0028F28
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00C5B00 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        __int64 a3,
        unsigned int a4)
{
  SIZE_T v5; // rax
  _DWORD *v6; // rax
  unsigned int v7; // ecx
  _DWORD *v8; // r8
  __int64 v9; // rax
  int v11; // edx

  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 15) = a4;
  v5 = 4LL * a4;
  if ( !is_mul_ok(a4, 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x36346956u, PagedPool);
  v7 = 0;
  *((_QWORD *)this + 5) = v6;
  v8 = v6;
  if ( v6 )
  {
    v11 = *((_DWORD *)this + 14);
    if ( v11 != 1 )
    {
      do
      {
        *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v7) = v7 + 1;
        ++v7;
        v11 = *((_DWORD *)this + 14);
      }
      while ( v7 < v11 - 1 );
      v8 = (_DWORD *)*((_QWORD *)this + 5);
    }
    v8[v11 - 1] = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0051768);
    v9 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v9 + 24) = 113LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
