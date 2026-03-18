/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0083604
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C0083790 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00805B8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int v3; // ecx
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned __int64 v11; // rbp
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  SIZE_T v17; // rax
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int VidMmObjects; // ebx
  __int64 v25; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax

  v3 = *(_DWORD *)this;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 40216LL) + 1584LL * ((v3 >> 7) & 0x1F);
  v6 = *((_QWORD *)a2 + 15) + 32LL * ((v3 >> 7) & 0x1F);
  if ( (v3 & 0x10) != 0 && !*(_DWORD *)(v6 + 16) )
    return 0LL;
  v7 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(32 * **(_DWORD **)(v5 + 440))) & 0x1000;
  *(_DWORD *)this = v7;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v5 + 424) << 13)) & 0xE000;
  *(_DWORD *)this = v8;
  if ( (v8 & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 16);
    v10 = *(_DWORD *)(v6 + 20);
  }
  else
  {
    v27 = v8 & 7;
    v9 = *(_DWORD *)(v5 + 48 * v27 + 88);
    v10 = *(_DWORD *)(v5 + 48 * (v27 + 2));
  }
  v11 = 2 * v9;
  *(_DWORD *)this = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x40;
  if ( (v8 & 0x1020) != 0x1020 )
    v11 = v9;
  v12 = 16 * v11;
  if ( !is_mul_ok(v11, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x37356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
    *(_QWORD *)(v28 + 24) = 4182LL;
LABEL_18:
    WdLogEvent5_WdAssertion(v28);
    return 3221225495LL;
  }
  memset(v13, 0, 16LL * (unsigned int)v11);
  v17 = 8 * v11;
  if ( !is_mul_ok(v11, 8uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, 0x33356956u, PagedPool);
  *((_QWORD *)this + 4) = v18;
  if ( !v18 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
    *(_QWORD *)(v28 + 24) = 4190LL;
    goto LABEL_18;
  }
  memset(v18, 0, 8LL * (unsigned int)v11);
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   this,
                   a2,
                   v10,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  v29 = WdLogNewEntry5_WdAssertion(v23, v22, v25);
  *(_QWORD *)(v29 + 24) = 4198LL;
  WdLogEvent5_WdAssertion(v29);
  return (unsigned int)VidMmObjects;
}
