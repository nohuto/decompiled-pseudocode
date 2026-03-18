/*
 * XREFs of _RFONTOBJ_vConstructPRFONTWrap@8 @ 0x8D406
 * Callers:
 *     <none>
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 */

void __stdcall RFONTOBJ_vConstructPRFONTWrap(RFONTOBJ *a1, int a2)
{
  *(_DWORD *)a1 = a2;
  if ( a2 )
  {
    RFONTOBJ::vMakeInactive(a1);
    *(_DWORD *)a1 = 0;
  }
}
