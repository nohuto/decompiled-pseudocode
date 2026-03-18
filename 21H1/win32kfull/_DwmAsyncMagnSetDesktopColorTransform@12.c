/*
 * XREFs of _DwmAsyncMagnSetDesktopColorTransform@12 @ 0x1D1C57
 * Callers:
 *     _MagpDecomposeDesktop@8 @ 0xCF50C (_MagpDecomposeDesktop@8.c)
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetDesktopColorTransform(PVOID Object, int a2, const void *a3)
{
  int v4; // esi
  __int16 v6; // [esp+Ch] [ebp-88h] BYREF
  int v7; // [esp+Eh] [ebp-86h]
  int v8; // [esp+12h] [ebp-82h]
  int v9; // [esp+16h] [ebp-7Eh]
  int v10; // [esp+1Ah] [ebp-7Ah]
  int v11; // [esp+1Eh] [ebp-76h]
  __int16 v12; // [esp+22h] [ebp-72h]
  int v13; // [esp+24h] [ebp-70h]
  int v14; // [esp+28h] [ebp-6Ch]
  _BYTE v15[100]; // [esp+2Ch] [ebp-68h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v6 = 108;
    v7 = -2147483516;
    v13 = 1073741926;
    v14 = a2;
    qmemcpy(v15, a3, sizeof(v15));
    EtwUpdateEvent(0, 1073741926);
    v4 = LpcRequestPort(Object, &v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
