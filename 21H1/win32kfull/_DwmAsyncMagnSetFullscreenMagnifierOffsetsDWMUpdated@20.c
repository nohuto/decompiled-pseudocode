/*
 * XREFs of _DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated@20 @ 0xF5FCA
 * Callers:
 *     _NtUserSetFullscreenMagnifierOffsetsDWMUpdated@12 @ 0xF2BB6 (_NtUserSetFullscreenMagnifierOffsetsDWMUpdated@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(PVOID Object, int a2, int a3, float a4, float a5)
{
  int v6; // edi
  _WORD v8[3]; // [esp+8h] [ebp-30h] BYREF
  int v9; // [esp+Eh] [ebp-2Ah]
  int v10; // [esp+12h] [ebp-26h]
  int v11; // [esp+16h] [ebp-22h]
  int v12; // [esp+1Ah] [ebp-1Eh]
  __int16 v13; // [esp+1Eh] [ebp-1Ah]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  float v17; // [esp+2Ch] [ebp-Ch]
  float v18; // [esp+30h] [ebp-8h]

  v6 = -1073741823;
  if ( Object )
  {
    v13 = 0;
    v8[0] = 20;
    v8[1] = 44;
    v17 = a4;
    v8[2] = 0x8000;
    v18 = a5;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v14 = 1073741934;
    v15 = a2;
    v16 = a3;
    EtwUpdateEvent(0, 1073741934);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
