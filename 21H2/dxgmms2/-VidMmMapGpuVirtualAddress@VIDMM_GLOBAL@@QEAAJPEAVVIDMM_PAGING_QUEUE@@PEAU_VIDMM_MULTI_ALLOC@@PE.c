/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0088B6C
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0002560 (-VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00A69BC (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0088C60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v11; // r15d
  unsigned int v12; // ebp
  __int64 v13; // rcx

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) == 0 || (*(_BYTE *)&Value & 7) == 0 )
  {
    if ( (*(_BYTE *)&Value & 0xC) != 0 )
    {
      if ( a3 )
      {
        WdLogSingleEntry1(3LL, 20886LL);
        return 3221225485LL;
      }
    }
    else if ( !a3 )
    {
      WdLogSingleEntry1(3LL, 20892LL);
      return 3221225485LL;
    }
    a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
    a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
    if ( a2 )
      return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
    v11 = 0;
    if ( a6 == -1 )
    {
      v12 = 0;
      if ( !*((_DWORD *)this + 1754) )
        return (unsigned int)v11;
      while ( 1 )
      {
        v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                this,
                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 80LL) + 176LL * v12),
                a3,
                a4,
                0);
        if ( v11 < 0 )
          break;
        ++v12;
        a4->BaseAddress = a4->VirtualAddress;
        if ( v12 >= *((_DWORD *)this + 1754) )
          return (unsigned int)v11;
      }
      WdLogSingleEntry1(1LL, v12);
    }
    else
    {
      v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 80LL) + 176LL * a6),
              a3,
              a4,
              0);
      if ( v11 >= 0 )
        return (unsigned int)v11;
      WdLogSingleEntry1(1LL, a6);
    }
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return (unsigned int)v11;
  }
  WdLogSingleEntry0(3LL);
  return 3221225485LL;
}
