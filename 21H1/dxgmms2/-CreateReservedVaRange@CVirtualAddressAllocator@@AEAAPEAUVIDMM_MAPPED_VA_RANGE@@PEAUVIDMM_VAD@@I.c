/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00BDDA4
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0084498 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001BA8 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023BC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C006F928 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  PVOID v10; // rax
  __int64 v11; // rcx
  VIDMM_MAPPED_VA_RANGE *v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  v10 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v10 )
    v12 = (VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                     (__int64)v10,
                                     (__int64)a2,
                                     a4,
                                     a4 + a5,
                                     0,
                                     0LL,
                                     0LL,
                                     (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                     a6.Value,
                                     a7,
                                     0LL,
                                     0LL);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C00517A4);
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = 1789LL;
    WdLogEvent5_WdLowResource(v13);
    return 0LL;
  }
  if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, a2, 0, 0LL, v12) < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v17);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v12);
    return 0LL;
  }
  return v12;
}
