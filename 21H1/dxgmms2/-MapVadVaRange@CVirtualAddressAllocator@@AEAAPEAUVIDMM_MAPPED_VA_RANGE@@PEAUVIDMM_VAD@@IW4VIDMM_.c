/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C006F7DC
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FAB8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001BA8 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00136CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023BC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C006F928 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int64 v11; // rdi
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  PVOID v18; // rax
  __int64 v19; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax

  v11 = a10;
  if ( a4 == 3 )
  {
    v16 = a5;
  }
  else
  {
    VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(a4, a5);
    if ( !VidMmAllocFromOwner )
      goto LABEL_6;
    v16 = **VidMmAllocFromOwner;
  }
  if ( v16 )
    v11 = *(_QWORD *)(v16 + 16);
LABEL_6:
  v17 = v11 - a6;
  v18 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v18 )
    v20 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v18,
                                            (__int64)a2,
                                            a9,
                                            a9 + a10,
                                            a3,
                                            a5,
                                            a6,
                                            a4,
                                            a7,
                                            a8,
                                            (v17 >> 12) & -(__int64)(v17 < a10),
                                            a6);
  else
    v20 = 0LL;
  if ( v20 )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, a3, 0LL, v20) >= 0 )
      return v20;
    v25 = WdLogNewEntry5_WdWarning(v22, v21);
    WdLogEvent5_WdWarning(v25);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v20);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00517A4);
    v24 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v24 + 24) = 1860LL;
    WdLogEvent5_WdLowResource(v24);
  }
  return 0LL;
}
