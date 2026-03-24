/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C005FDE4
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001794C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C005F060 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10,
        char a11)
{
  __int64 v13; // rdi
  unsigned __int64 v15; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v17; // rbx
  PSLIST_ENTRY v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v24; // r9
  char *v25; // r8
  char **v26; // rcx
  char *v27; // rdx
  __int64 v28; // rcx
  __int64 **v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx

  v13 = a3;
  v15 = a10;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(a4, a5);
  if ( VidMmGlobalAllocFromOwner )
    v15 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 16);
  v17 = v15 - a6;
  v18 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v18 )
    v20 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v18,
            (__int64)a2,
            a9,
            a9 + a10,
            v13,
            a5,
            a6,
            a4,
            a7,
            a8,
            (v17 >> 12) & -(__int64)(v17 < a10),
            a6,
            0);
  else
    v20 = 0LL;
  if ( !v20 )
  {
    _InterlockedIncrement(&dword_1C00507A4);
    v21 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v21 + 24) = 2319LL;
    WdLogEvent5_WdLowResource(v21);
    return 0LL;
  }
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() && a11 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(a4, a5);
    v24 = VidMmAllocFromOwner;
    v25 = (char *)a2 + 40 * v13 + 120;
    v26 = (char **)*((_QWORD *)v25 + 1);
    v27 = (char *)(v20 + 8);
    if ( *v26 == v25 )
    {
      *(_QWORD *)v27 = v25;
      *(_QWORD *)(v20 + 16) = v26;
      *v26 = v27;
      *((_QWORD *)v25 + 1) = v27;
      if ( !VidMmAllocFromOwner )
      {
LABEL_15:
        *(_DWORD *)(v20 + 64) |= 0x2000u;
        return v20;
      }
      v28 = VidMmAllocFromOwner + 144;
      v29 = *(__int64 ***)(VidMmAllocFromOwner + 152);
      v30 = (__int64 *)(v20 + 24);
      if ( *v29 == (__int64 *)(v24 + 144) )
      {
        *v30 = v28;
        *(_QWORD *)(v20 + 32) = v29;
        *v29 = v30;
        *(_QWORD *)(v24 + 152) = v30;
        goto LABEL_15;
      }
    }
    __fastfail(3u);
  }
  if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, v13, 0LL, (struct VIDMM_MAPPED_VA_RANGE *)v20) < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v32, v31);
    WdLogEvent5_WdWarning(v33);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v20, v34);
    return 0LL;
  }
  return v20;
}
