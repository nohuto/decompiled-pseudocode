/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C0087034
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B2E54 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-18h]

  v6 = a4;
  v8 = a3;
  if ( *((_QWORD *)a2 + 5128) && a3 < a3 + a4 )
  {
    v13 = a4;
    v14 = 16LL * a3;
    do
    {
      v15 = *((_QWORD *)this + 4);
      v16 = *(_QWORD *)(v14 + v15);
      if ( (v16 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v16 >> 5) & 0x1F, *(_QWORD *)(v14 + v15 + 8), 1LL, 1, 0LL, v17);
      v14 += 16LL;
      --v13;
    }
    while ( v13 );
  }
  v9 = 0;
  if ( (unsigned int)v8 < (int)v8 + (int)v6 )
  {
    v10 = v6;
    v11 = 16 * v8;
    do
    {
      v12 = *((_QWORD *)this + 4);
      if ( (*(_BYTE *)(v11 + v12) & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v9 = 1;
        *(_QWORD *)(v11 + v12) = 0LL;
        *(_QWORD *)(v11 + *((_QWORD *)this + 4) + 8) = 0LL;
      }
      v11 += 16LL;
      --v10;
    }
    while ( v10 );
    if ( v9 )
      *a5 = 1;
  }
}
