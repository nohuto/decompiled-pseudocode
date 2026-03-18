/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C005F8F0
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C005F82C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FB34 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int VidMmObjects; // ebx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax

  v7 = a3;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 40216LL) + 1584LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v10 = *((_QWORD *)a2 + 15) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v11 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v11;
  *(_DWORD *)this = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v9 + 424) << 13)) & 0xE000;
  v12 = 16LL * a3;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x34356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( v13 )
  {
    memset(v13, 0, 16 * v7);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL);
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 32);
      if ( a5 && *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL) > v15 )
        v15 = *(_DWORD *)(*(_QWORD *)(v9 + 440) + 12LL);
    }
    VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v15, *(_DWORD *)(v10 + 28));
    if ( VidMmObjects < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16, v19);
      *(_QWORD *)(v22 + 24) = 4058LL;
      WdLogEvent5_WdAssertion(v22);
      return (unsigned int)VidMmObjects;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00517AC);
    v21 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v21 + 24) = 4025LL;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
