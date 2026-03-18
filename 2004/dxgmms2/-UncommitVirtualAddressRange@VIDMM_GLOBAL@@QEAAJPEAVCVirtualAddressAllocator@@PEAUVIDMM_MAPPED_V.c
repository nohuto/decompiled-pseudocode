/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00755A0
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006500C (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074A5C (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00872F4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0064DD4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0075548 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 */

int __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        char a4,
        struct VIDMM_VAD_PENDING_OPERATION *a5)
{
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v13, 0, 0x58uLL);
  v11 = (*((_DWORD *)a3 + 16) >> 4) & 0x3F;
  LODWORD(v13[0]) = 114;
  HIDWORD(v13[0]) = v11;
  v13[7] = a5;
  v13[6] = a3;
  v13[5] = a2;
  if ( a4 )
    return VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v9, (struct _VIDMM_SYSTEM_COMMAND *)v13, v10);
  else
    return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13);
}
