/*
 * XREFs of _GreSetLFONTOwner@8 @ 0xDAE1E
 * Callers:
 *     _FinishStockFontReinit@4 @ 0xD9D62 (_FinishStockFontReinit@4.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 * Callees:
 *     <none>
 */

int __fastcall GreSetLFONTOwner(int a1, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = a2;
  if ( a2 == -2147483646 )
    v2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  return HmgSetOwner(a1, v2, 10);
}
