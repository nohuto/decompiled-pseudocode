/*
 * XREFs of _DwmAsyncMagnSetDesktopTransform@20 @ 0x1D1E08
 * Callers:
 *     _MagpDecomposeDesktop@8 @ 0xCF50C (_MagpDecomposeDesktop@8.c)
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetDesktopTransform(PVOID Object, int a2, int *a3, int a4, int a5)
{
  int v6; // esi
  _WORD v8[3]; // [esp+Ch] [ebp-38h] BYREF
  int v9; // [esp+12h] [ebp-32h]
  int v10; // [esp+16h] [ebp-2Eh]
  int v11; // [esp+1Ah] [ebp-2Ah]
  int v12; // [esp+1Eh] [ebp-26h]
  __int16 v13; // [esp+22h] [ebp-22h]
  int v14; // [esp+24h] [ebp-20h]
  int v15; // [esp+28h] [ebp-1Ch]
  int v16; // [esp+2Ch] [ebp-18h]
  int v17; // [esp+30h] [ebp-14h]
  int v18; // [esp+34h] [ebp-10h]
  int v19; // [esp+38h] [ebp-Ch]

  v6 = -1073741823;
  if ( Object )
  {
    v15 = a2;
    v13 = 0;
    v8[0] = 24;
    v8[1] = 48;
    v8[2] = 0x8000;
    v16 = *a3;
    v17 = a3[1];
    v18 = a4;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 1073741927;
    v19 = a5;
    EtwUpdateEvent(0, 1073741927);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
