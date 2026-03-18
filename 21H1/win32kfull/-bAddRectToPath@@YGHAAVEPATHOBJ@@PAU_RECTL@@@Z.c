/*
 * XREFs of ?bAddRectToPath@@YGHAAVEPATHOBJ@@PAU_RECTL@@@Z @ 0x22202D
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z @ 0x221FE9 (-bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z.c)
 */

BOOL __fastcall bAddRectToPath(EPATHOBJ *a1, _DWORD *a2)
{
  struct _POINTL v3; // [esp+0h] [ebp-24h] BYREF
  int v4; // [esp+8h] [ebp-1Ch]
  LONG y; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+14h] [ebp-10h]
  LONG x; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]

  v3.x = 16 * *a2;
  x = v3.x;
  v3.y = 16 * a2[1];
  y = v3.y;
  v4 = 16 * a2[2];
  v6 = v4;
  v7 = 16 * a2[3];
  v9 = v7;
  return EPATHOBJ::bAddPolygon(a1, a1, &v3, (int)a1);
}
