/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0020514
 * Callers:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00BB878 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
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
