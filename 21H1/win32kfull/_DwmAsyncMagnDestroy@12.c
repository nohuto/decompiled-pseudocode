/*
 * XREFs of _DwmAsyncMagnDestroy@12 @ 0x1D1BC5
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _MagpDecomposeDesktop@8 @ 0xCF50C (_MagpDecomposeDesktop@8.c)
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnDestroy(PVOID Object, int a2, int a3)
{
  int v4; // esi
  _WORD v6[3]; // [esp+Ch] [ebp-30h] BYREF
  int v7; // [esp+12h] [ebp-2Ah]
  int v8; // [esp+16h] [ebp-26h]
  int v9; // [esp+1Ah] [ebp-22h]
  int v10; // [esp+1Eh] [ebp-1Eh]
  __int16 v11; // [esp+22h] [ebp-1Ah]
  int v12; // [esp+24h] [ebp-18h]
  __int64 v13; // [esp+28h] [ebp-14h]
  int v14; // [esp+30h] [ebp-Ch]

  v4 = -1073741823;
  if ( Object )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = 16;
    v6[1] = 40;
    v6[2] = 0x8000;
    v13 = a2;
    v12 = 1073741920;
    v14 = a3;
    EtwUpdateEvent(a2, 1073741920);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
