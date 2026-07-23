/*
 * XREFs of HalLeaveDmaDomain @ 0x1404C4C00
 * Callers:
 *     <none>
 * Callees:
 *     HalpLeaveDmaDomain @ 0x1404C50EC (HalpLeaveDmaDomain.c)
 */

__int64 __fastcall HalLeaveDmaDomain(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 504);
  if ( !v2 )
    return 3221225473LL;
  if ( *(_BYTE *)(v2 + 33) )
    return 3221225488LL;
  if ( *(_BYTE *)(a1 + 516) && *(_QWORD *)(v2 + 72) )
    return 3221225473LL;
  else
    return HalpLeaveDmaDomain(a1);
}
