/*
 * XREFs of MiSetImageProtection @ 0x140253184
 * Callers:
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407560C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x140756110 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x140786248 (MiCompactServiceTable.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}
