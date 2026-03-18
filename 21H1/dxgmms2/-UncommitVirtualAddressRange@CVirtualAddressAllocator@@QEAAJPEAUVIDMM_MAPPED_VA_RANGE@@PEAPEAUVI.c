/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00718E8
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0070644 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00746A0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0075568 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008972C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B61F0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001D40 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  struct VIDMM_ALLOC **v4; // r15
  int v8; // ebx
  unsigned __int64 v9; // rbp
  unsigned int v10; // r12d
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  VIDMM_PAGE_DIRECTORY *v20; // [rsp+60h] [rbp-A8h]
  _DWORD v21[20]; // [rsp+70h] [rbp-98h] BYREF

  v19 = 0LL;
  v4 = (struct VIDMM_ALLOC **)&v19;
  if ( a3 )
    v4 = a3;
  v8 = 0;
  *v4 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v11 = (*((_QWORD *)a2 + 13) - v9) >> 12;
  v20 = *(VIDMM_PAGE_DIRECTORY **)(32LL * v10 + *((_QWORD *)this + 15));
  if ( v20 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 11) + 40216LL) + 1584LL * v10;
    memset(v21, 0, 0x48uLL);
    v21[13] = -1;
    if ( (**(_DWORD **)(v12 + 440) & 0x80u) != 0 )
      *(_WORD *)((char *)&v21[14] + 1) = 257;
    v8 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
           v20,
           this,
           (const struct COMMIT_VA_STATE *)v21,
           0LL,
           v9,
           v11,
           0LL,
           0,
           v4);
    if ( v8 < 0 && *v4 && !a3 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = 3185LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( a4 )
      CVirtualAddressAllocator::FlushGpuVaTlb(this, v10, v9, (v11 << 12) + v9);
  }
  *((_DWORD *)a2 + 16) &= 0xFFFFF3FF;
  return (unsigned int)v8;
}
