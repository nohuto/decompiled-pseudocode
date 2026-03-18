/*
 * XREFs of ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0075214
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005E93C (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005F664 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // rdi
  __int64 v7; // r8
  struct VIDMM_ALLOC **v9; // rcx

  v4 = *((_QWORD *)this + 3);
  v6 = a3;
  v7 = 2LL * a3;
  if ( (*(_BYTE *)(v4 + 8 * v7) & 1) == 0 || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v6) + 4LL) )
    return 0;
  --*((_DWORD *)this + 1);
  *(_QWORD *)(v4 + 8 * v7) = 0LL;
  *(_QWORD *)(v4 + 8 * v7 + 8) = 0LL;
  v9 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)this + 4) + 8 * v6);
  if ( (*(_DWORD *)this & 0x20) != 0 )
    VIDMM_PAGE_TABLE::DestroyPageTable(v9, a2, a4);
  else
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v9, a2, a4, a4);
  *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v6) = 0LL;
  return 1;
}
