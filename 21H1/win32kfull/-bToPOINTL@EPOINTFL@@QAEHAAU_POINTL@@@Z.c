/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QAEHAAU_POINTL@@@Z @ 0x22DC0
 * Callers:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 * Callees:
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 */

int __thiscall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  int v3; // esi

  v3 = 1;
  if ( !eftol_c(this, a2, 1) || !eftol_c((char *)this + 8, &a2->y, 1) )
    return 0;
  return v3;
}
