/*
 * XREFs of XmGetRegisterAddress @ 0x140393E98
 * Callers:
 *     XmMoveRegImmediate @ 0x140393380 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1403933E0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140393940 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x140393B14 (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmGetRegisterAddress(__int64 a1, unsigned int a2)
{
  if ( a2 < 4 || *(_DWORD *)(a1 + 120) )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}
