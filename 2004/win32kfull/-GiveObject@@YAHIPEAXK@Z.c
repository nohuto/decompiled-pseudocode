/*
 * XREFs of ?GiveObject@@YAHIPEAXK@Z @ 0x1C021B78C
 * Callers:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C021B48C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C021B9A8 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021C45C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CC5C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GiveObject(int a1, void *a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 2;
  if ( !v3 )
  {
LABEL_6:
    GreSetBitmapOwner(a2, a3);
    return 1LL;
  }
  v4 = v3 - 7;
  if ( v4 )
  {
    if ( v4 != 121 )
      return 0LL;
    goto LABEL_6;
  }
  GreSetPaletteOwner(a2, a3);
  return 1LL;
}
