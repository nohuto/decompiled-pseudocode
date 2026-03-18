/*
 * XREFs of MiSetImageProtection @ 0x140324C48
 * Callers:
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140745960 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x1407459B0 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x140775838 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}
