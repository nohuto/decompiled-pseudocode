/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x14097F690
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiAcquireKernelCfgLock @ 0x14097F660 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x14097F8F8 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  __int64 PteAddress; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi

  if ( !a3 )
    MiAcquireKernelCfgLock();
  MiGetPteAddress(qword_140C4F3F0 + ((2 * ((a1 + (unsigned __int64)(unsigned int)(a2 - 1) + 0x800000000000LL) >> 4)) >> 3));
  PteAddress = MiGetPteAddress(v6);
  v9 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, v8, 1, 9) )
    v9 = -1073741670;
  if ( !a3 )
    MiReleaseKernelCfgLock();
  return v9;
}
