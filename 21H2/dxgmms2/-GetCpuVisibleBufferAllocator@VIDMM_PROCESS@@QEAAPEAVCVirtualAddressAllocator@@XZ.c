/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00DFA78
 * Callers:
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00DFA78 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00DFD40 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00DFED4 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00E03D4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C009B234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C009B500 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A2170 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00DFA78 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v1; // r8
  VIDMM_PROCESS *v3; // rbx
  __int64 v4; // rcx
  __int64 *v6; // rdi
  CVirtualAddressAllocator *v7; // rax
  CVirtualAddressAllocator *v8; // rbx
  __int64 v9; // rax
  CVirtualAddressAllocator *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int8 v17; // r9
  CVirtualAddressAllocator *v18; // rcx
  char v19[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+50h] [rbp-18h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( (*(_DWORD *)(v1 + 424) & 0x100) == 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)this + 28, 0);
    DXGPUSHLOCK::AcquireExclusive(v20);
    v6 = (__int64 *)((char *)this + 216);
    v21 = 2;
    v7 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
    v8 = 0LL;
    if ( !v7 )
    {
      v9 = operator new(152LL, 0x4B677844u, 256LL);
      v10 = (CVirtualAddressAllocator *)v9;
      if ( !v9 )
      {
LABEL_12:
        *v6 = 0LL;
LABEL_15:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
        return v8;
      }
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
      *(_QWORD *)(v9 + 64) = 0LL;
      *(_DWORD *)(v9 + 72) = 0;
      *(_DWORD *)(v9 + 76) = 64;
      *(_DWORD *)(v9 + 80) = 64;
      *(_QWORD *)(v9 + 136) = v9 + 128;
      *(_QWORD *)(v9 + 128) = v9 + 128;
      *(_QWORD *)(v9 + 96) = 0LL;
      *(_QWORD *)(v9 + 104) = 0LL;
      *(_QWORD *)(v9 + 112) = 0LL;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_DWORD *)(v9 + 144) = 0;
      v11 = *((_QWORD *)this + 4);
      *v6 = v9;
      v12 = *(_DWORD *)(v11 + 424);
      if ( (v12 & 0x100) != 0 )
        v13 = *(_QWORD *)(v11 + 608);
      else
        v13 = v11 & -(__int64)((v12 & 0x80u) != 0);
      v14 = CVirtualAddressAllocator::InitializeVaAllocator(
              v10,
              *(_QWORD *)(*(_QWORD *)(v13 + 608) + 264LL),
              0,
              0LL,
              0LL);
      v18 = (CVirtualAddressAllocator *)*v6;
      if ( v14 < 0 )
      {
        CVirtualAddressAllocator::DestroyVaAllocator(v18, v15, v16, v17);
        goto LABEL_12;
      }
      CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        (struct _KTHREAD **)v18,
        0x1000uLL,
        v16,
        0LL,
        0LL,
        0x1000u,
        &v22);
      v7 = (CVirtualAddressAllocator *)*v6;
    }
    v8 = v7;
    goto LABEL_15;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 608) + 64LL);
  if ( v4 )
    v3 = *(VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v3);
}
