/*
 * XREFs of _UserOnGreTextReady@0 @ 0xD74BA
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ @ 0xD6894 (-AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ.c)
 * Callees:
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 *     _SetMinMetrics@8 @ 0xDA05C (_SetMinMetrics@8.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 *     ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A (-UserReinitializeStockFonts@@YGXKH@Z.c)
 */

BOOL __stdcall UserOnGreTextReady()
{
  BOOL v0; // edi
  int ProfileUserName; // eax
  int v2; // ebx
  BOOL v3; // esi
  unsigned int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+4h] [ebp-14h]
  _BYTE v7[12]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v7, 0, sizeof(v7));
  v0 = 0;
  EnterCrit(0, 1);
  DrvGetLogPixels();
  UserReinitializeStockFonts(v5, v6);
  xxxLW_LoadFonts(0);
  ProfileUserName = CreateProfileUserName(v7);
  v2 = ProfileUserName;
  if ( ProfileUserName )
  {
    v3 = xxxSetWindowNCMetrics(ProfileUserName, 0, -1) != 0;
    SetMinMetrics(v2, 0);
    v0 = SetIconMetrics(v2, 0) != 0 && v3;
    FreeProfileUserName(v2, v7);
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
