/*
 * XREFs of GreSetLFONTOwner @ 0x1C000B940
 * Callers:
 *     FinishStockFontReinit @ 0x1C000AD80 (FinishStockFontReinit.c)
 *     CreateFontFromUserProfile @ 0x1C000B838 (CreateFontFromUserProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLFONTOwner(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rax

  LODWORD(v3) = a2;
  if ( a2 == -2147483646 )
    v3 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(a3) = 10;
  return HmgSetOwner(a1, (unsigned int)v3, a3);
}
