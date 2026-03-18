/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0013054
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C005B528 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
