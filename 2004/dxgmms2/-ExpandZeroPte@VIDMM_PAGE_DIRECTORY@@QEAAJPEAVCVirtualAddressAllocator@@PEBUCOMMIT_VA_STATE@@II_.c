/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE31C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A30 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C005F82C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A30 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073ED8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C008761C (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        struct VIDMM_ALLOC **a10)
{
  __int64 v10; // r12
  __int64 v14; // r14
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r10
  int v28; // eax
  unsigned __int64 v29; // [rsp+20h] [rbp-A1h]
  unsigned __int64 v30; // [rsp+20h] [rbp-A1h]
  struct VIDMM_GLOBAL *v31; // [rsp+28h] [rbp-99h]
  struct VIDMM_GLOBAL *v32; // [rsp+28h] [rbp-99h]
  __int64 v33; // [rsp+50h] [rbp-71h]
  _QWORD v34[10]; // [rsp+60h] [rbp-61h] BYREF

  v10 = a5;
  v14 = *((_QWORD *)this + 4);
  v33 = a4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * a4) & 2) != 0 )
    v10 = a4;
  if ( !*(_QWORD *)(v14 + 8 * v10) )
  {
    PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 7) & 0x1F, (unsigned int)v10 > a4, 0);
    v18 = *((_QWORD *)this + 4);
    *(_QWORD *)(v18 + 8 * v10) = PageTable;
    v14 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v14 + 8 * v10) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v16, v17);
      *(_QWORD *)(v19 + 24) = 5198LL;
      WdLogEvent5_WdAssertion(v19);
      return 3221225495LL;
    }
  }
  memset(v34, 0, 0x48uLL);
  v21 = *((_BYTE *)a3 + 57);
  v34[0] |= 3uLL;
  BYTE1(v34[7]) = v21;
  LOBYTE(v34[7]) = *((_BYTE *)a3 + 56);
  v34[6] = 0xFFFFFFFE00000006uLL;
  if ( a8 >= a6 )
  {
LABEL_12:
    v26 = v33;
    goto LABEL_13;
  }
  v31 = (struct VIDMM_GLOBAL *)(a6 - a8);
  v29 = a8 << 12;
  if ( (*(_DWORD *)this & 0x20) != 0 )
  {
    v24 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            *(VIDMM_PAGE_TABLE **)(v14 + 8 * v10),
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v34,
            0LL,
            v29,
            v31,
            0LL,
            0,
            a10);
    if ( v24 < 0 )
    {
LABEL_9:
      v25 = WdLogNewEntry5_WdWarning(v23, v22);
      WdLogEvent5_WdWarning(v25);
      return (unsigned int)v24;
    }
    goto LABEL_12;
  }
  v26 = v33;
  v24 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)(v14 + 8 * v33),
          (VIDMM_GLOBAL **)a2,
          (const struct COMMIT_VA_STATE *)v34,
          0LL,
          v29,
          (unsigned __int64)v31,
          0LL,
          0,
          a10);
  if ( v24 < 0 )
    goto LABEL_9;
LABEL_13:
  if ( a7 < a9 )
  {
    v27 = *((_QWORD *)this + 4);
    v32 = (struct VIDMM_GLOBAL *)(a9 - a7);
    v30 = a7 << 12;
    v28 = (*(_DWORD *)this & 0x20) != 0
        ? VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            *(VIDMM_PAGE_TABLE **)(v27 + 8 * v10),
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v34,
            0LL,
            v30,
            v32,
            0LL,
            0,
            a10)
        : VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            *(VIDMM_PAGE_DIRECTORY **)(v27 + 8 * v26),
            (VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v34,
            0LL,
            v30,
            (unsigned __int64)v32,
            0LL,
            0,
            a10);
    v24 = v28;
    if ( v28 < 0 )
      goto LABEL_9;
  }
  *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)v10) &= ~2uLL;
  VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v10);
  return 0LL;
}
