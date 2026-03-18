/*
 * XREFs of ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00A3AD0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE::InvalidatePageTable(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // r9
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // r14
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
      v16 = *(_QWORD *)(v15 + v14);
      if ( (v16 & 1) != 0 )
        VIDMM_GLOBAL::RecordPageMappingHistory(a2, (v16 >> 5) & 0x1F, *(_QWORD *)(v15 + v14 + 8), 1LL, 1, 0LL, v17);
      v14 += 16LL;
      --v13;
    }
    while ( v13 );
  }
  else if ( a3 >= a3 + a4 )
  {
    return;
  }
  v9 = v6;
  v10 = 16 * v8;
  v11 = 0;
  do
  {
    v12 = *((_QWORD *)this + 4);
    if ( (*(_BYTE *)(v12 + v10) & 1) != 0 )
    {
      --*((_DWORD *)this + 1);
      v11 = 1;
      *(_QWORD *)(v12 + v10) = 0LL;
      *(_QWORD *)(v10 + *((_QWORD *)this + 4) + 8) = 0LL;
    }
    v10 += 16LL;
    --v9;
  }
  while ( v9 );
  if ( v11 )
    *a5 = 1;
}
