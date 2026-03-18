/*
 * XREFs of ??XEPOINTFL@@QAEXVEFLOAT@@@Z @ 0x22DFC
 * Callers:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 * Callees:
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __thiscall EPOINTFL::operator*=(char *this, char a2, int a3)
{
  mulff3_c(this, this, &a2);
  return mulff3_c(this + 8, this + 8, &a2);
}
