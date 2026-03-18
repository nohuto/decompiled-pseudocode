/*
 * XREFs of ?ppfeGetPFEFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D85FC
 * Callers:
 *     _GreGetUFIPathname@44 @ 0x1D8ECA (_GreGetUFIPathname@44.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628 (-ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

struct PFE *__userpurge ppfeGetPFEFromUFI@<eax>(int a1@<edx>, struct _UNIVERSAL_FONT_ID *a2, int a3, int a4)
{
  struct PFE *result; // eax
  int v5; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  if ( !a1 )
    return ppfeGetPFEFromUFIInternal(a2, v5, savedregs);
  result = ppfeGetPFEFromUFIInternal(a2, v5, savedregs);
  if ( !result )
    return ppfeGetPFEFromUFIInternal(a2, v5, savedregs);
  return result;
}
