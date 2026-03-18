/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0084AA4
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x1C0012500 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C00847DC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0064DD4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00707EC (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

int __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  __int64 v12; // rax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*((_BYTE *)this + 40936) & 2) == 0 )
    return 0;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v13, 0, 0x58uLL);
      v13[7] = a3->Size >> 12;
      v13[0] = -4294967176LL;
      v13[6] = BaseAddress;
      v13[5] = VirtualAddressAllocator;
      LOBYTE(v13[8]) = a4;
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13);
    }
    v12 = WdLogNewEntry5_WdWarning(v8, v7);
    WdLogEvent5_WdWarning(v12);
  }
  return -1073741811;
}
