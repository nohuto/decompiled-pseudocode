/*
 * XREFs of _DwmAsyncMagnSetSamplingMode@16 @ 0x1D1EA8
 * Callers:
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetSamplingMode(PVOID Object, int a2, int a3, int *a4)
{
  int v5; // esi
  int v6; // eax
  _WORD v8[3]; // [esp+Ch] [ebp-30h] BYREF
  int v9; // [esp+12h] [ebp-2Ah]
  int v10; // [esp+16h] [ebp-26h]
  int v11; // [esp+1Ah] [ebp-22h]
  int v12; // [esp+1Eh] [ebp-1Eh]
  __int16 v13; // [esp+22h] [ebp-1Ah]
  int v14; // [esp+24h] [ebp-18h]
  __int64 v15; // [esp+28h] [ebp-14h]
  int v16; // [esp+30h] [ebp-Ch]
  int v17; // [esp+34h] [ebp-8h]

  v5 = -1073741823;
  if ( Object )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v8[0] = 20;
    v8[1] = 44;
    v8[2] = 0x8000;
    v15 = a2;
    v16 = a3;
    v6 = *a4;
    v14 = 1073741930;
    v17 = v6;
    EtwUpdateEvent(a2, 1073741930);
    v5 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v5;
}
