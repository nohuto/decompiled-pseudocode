/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C004DAFC
 * Callers:
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C004DAB8 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HBRUSH *a1)
{
  HBRUSH v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
