/*
 * XREFs of MiSetImageProtection @ 0x1402DFB48
 * Callers:
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407474E0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x140747530 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x140777C48 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}
