/*
 * XREFs of _DwmAsyncDxBindSwapChain@12 @ 0xC2D22
 * Callers:
 *     ?NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z @ 0xC2CB2 (-NotifyDwm@CSwapChainProp@@QAEHQAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncDxBindSwapChain(PVOID Object, int a2, int a3)
{
  int v4; // edi
  _WORD v6[3]; // [esp+Ch] [ebp-24h] BYREF
  int v7; // [esp+12h] [ebp-1Eh]
  int v8; // [esp+16h] [ebp-1Ah]
  int v9; // [esp+1Ah] [ebp-16h]
  int v10; // [esp+1Eh] [ebp-12h]
  __int16 v11; // [esp+22h] [ebp-Eh]
  int v12; // [esp+24h] [ebp-Ch]
  int v13; // [esp+28h] [ebp-8h]
  int v14; // [esp+2Ch] [ebp-4h]

  v4 = -1073741823;
  if ( Object )
  {
    v12 = 1073741882;
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
    EtwBindSwapChain(a2, a2 >> 31, a3, a3 >> 31);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
