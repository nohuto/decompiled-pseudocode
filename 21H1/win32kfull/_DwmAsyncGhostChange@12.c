/*
 * XREFs of _DwmAsyncGhostChange@12 @ 0xC2724
 * Callers:
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncGhostChange(PVOID Object, int a2, int a3)
{
  int v4; // edi
  _WORD v6[3]; // [esp+8h] [ebp-24h] BYREF
  int v7; // [esp+Eh] [ebp-1Eh]
  int v8; // [esp+12h] [ebp-1Ah]
  int v9; // [esp+16h] [ebp-16h]
  int v10; // [esp+1Ah] [ebp-12h]
  __int16 v11; // [esp+1Eh] [ebp-Eh]
  int v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  v4 = -1073741823;
  if ( Object )
  {
    v12 = 1073741874;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = 12;
    v6[1] = 36;
    v6[2] = 0x8000;
    v14 = a3;
    v13 = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
