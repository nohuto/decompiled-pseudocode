/*
 * XREFs of MiSetImageProtection @ 0x1402E67C8
 * Callers:
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075CF74 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075CFC4 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x14078A028 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
