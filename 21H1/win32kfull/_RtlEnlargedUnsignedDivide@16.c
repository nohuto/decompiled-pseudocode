/*
 * XREFs of _RtlEnlargedUnsignedDivide@16 @ 0x238817
 * Callers:
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x23848A (-vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QAEXXZ @ 0x238683 (-vUpdateStyleState@XCLIPOBJ@@QAEXXZ.c)
 *     ?bFastFill@@YGHJPAU_POINTFIX@@PAU_RECTL@@P6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238ED3 (-bFastFill@@YGHJPAU_POINTFIX@@PAU_RECTL@@P6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 *     ?bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@ZKPAKJPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x23F480 (-bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@Z.c)
 * Callees:
 *     __aulldvrm @ 0xF91F7 (__aulldvrm.c)
 */

ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // esi
  ULONGLONG v6; // rax
  ULONGLONG v7; // rcx
  unsigned __int64 v9; // [esp-Ch] [ebp-14h]

  v9 = v4;
  v5 = v3;
  v7 = Dividend.QuadPart % v4;
  v6 = Dividend.QuadPart / v9;
  if ( v5 )
    *v5 = v7;
  return v6;
}
