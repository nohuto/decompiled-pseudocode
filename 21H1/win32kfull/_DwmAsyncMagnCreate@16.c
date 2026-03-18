/*
 * XREFs of _DwmAsyncMagnCreate@16 @ 0x1D1B28
 * Callers:
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnCreate(PVOID Object, int a2, int a3, int a4)
{
  int v5; // esi
  _WORD v7[3]; // [esp+Ch] [ebp-30h] BYREF
  int v8; // [esp+12h] [ebp-2Ah]
  int v9; // [esp+16h] [ebp-26h]
  int v10; // [esp+1Ah] [ebp-22h]
  int v11; // [esp+1Eh] [ebp-1Eh]
  __int16 v12; // [esp+22h] [ebp-1Ah]
  int v13; // [esp+24h] [ebp-18h]
  __int64 v14; // [esp+28h] [ebp-14h]
  int v15; // [esp+30h] [ebp-Ch]
  BOOL v16; // [esp+34h] [ebp-8h]

  v5 = -1073741823;
  if ( Object )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 20;
    v7[1] = 44;
    v7[2] = 0x8000;
    v14 = a2;
    v15 = a3;
    v13 = 1073741919;
    v16 = a4 == 0;
    EtwUpdateEvent(a2, 1073741919);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
