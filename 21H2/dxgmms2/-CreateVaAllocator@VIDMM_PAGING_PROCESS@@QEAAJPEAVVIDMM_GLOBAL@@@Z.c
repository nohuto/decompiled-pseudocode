/*
 * XREFs of ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B322C
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C009B500 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rax
  CVirtualAddressAllocator *v7; // r10
  _QWORD *v8; // rax
  int v9; // ebp
  __int64 v11; // rcx
  __int64 v12; // rcx

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v4 = 0;
  if ( !*((_DWORD *)a2 + 1754) )
    return 0LL;
  while ( 1 )
  {
    v5 = 1584LL * v4;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5028) + v5 + 436) & 1) == 0 )
      goto LABEL_8;
    v6 = operator new(152LL, 0x4B677844u, 256LL);
    v7 = (CVirtualAddressAllocator *)v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 56) = 0LL;
      *(_QWORD *)(v6 + 64) = 0LL;
      *(_DWORD *)(v6 + 72) = 0;
      *(_DWORD *)(v6 + 76) = 64;
      *(_DWORD *)(v6 + 80) = 64;
      *(_QWORD *)(v6 + 96) = 0LL;
      *(_QWORD *)(v6 + 104) = 0LL;
      *(_QWORD *)(v6 + 112) = 0LL;
      *(_QWORD *)(v6 + 120) = 0LL;
      v8 = (_QWORD *)(v6 + 128);
      *((_DWORD *)v7 + 36) = 0;
      v8[1] = v8;
      *v8 = v8;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + v4 + 4) = v7;
    if ( !v7 )
      break;
    v9 = CVirtualAddressAllocator::InitializeVaAllocator(
           v7,
           1LL << *((_DWORD *)a2 + 10232),
           4096 << *(_DWORD *)(*((_QWORD *)a2 + 5028) + v5 + 68),
           a2,
           g_pVidMmSystemProcess);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, 7526LL);
      DxgkLogInternalTriageEvent(v11, 0x40000LL);
      return (unsigned int)v9;
    }
LABEL_8:
    if ( ++v4 >= *((_DWORD *)a2 + 1754) )
      return 0LL;
  }
  WdLogSingleEntry1(1LL, 7517LL);
  DxgkLogInternalTriageEvent(v12, 0x40000LL);
  return 3221225495LL;
}
