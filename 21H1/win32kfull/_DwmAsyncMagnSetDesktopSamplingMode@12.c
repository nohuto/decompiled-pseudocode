/*
 * XREFs of _DwmAsyncMagnSetDesktopSamplingMode@12 @ 0x1D1D7C
 * Callers:
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetDesktopSamplingMode(PVOID Object, int a2, int *a3)
{
  int v4; // esi
  int v5; // eax
  _WORD v7[3]; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+Eh] [ebp-22h]
  int v9; // [esp+12h] [ebp-1Eh]
  int v10; // [esp+16h] [ebp-1Ah]
  int v11; // [esp+1Ah] [ebp-16h]
  __int16 v12; // [esp+1Eh] [ebp-12h]
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v4 = -1073741823;
  if ( Object )
  {
    v5 = *a3;
    v12 = 0;
    v7[0] = 12;
    v7[1] = 36;
    v7[2] = 0x8000;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v13 = 1073741931;
    v14 = a2;
    v15 = v5;
    EtwUpdateEvent(0, 1073741931);
    v4 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v4;
}
