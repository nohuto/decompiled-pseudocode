/*
 * XREFs of MiSetImageProtection @ 0x140297B18
 * Callers:
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075D134 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x14075D184 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x14078A1E8 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
