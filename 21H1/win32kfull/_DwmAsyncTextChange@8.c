/*
 * XREFs of _DwmAsyncTextChange@8 @ 0x1EC70
 * Callers:
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncTextChange(PVOID Object, int a2)
{
  int v3; // edi
  _WORD v5[3]; // [esp+8h] [ebp-20h] BYREF
  int v6; // [esp+Eh] [ebp-1Ah]
  int v7; // [esp+12h] [ebp-16h]
  int v8; // [esp+16h] [ebp-12h]
  int v9; // [esp+1Ah] [ebp-Eh]
  __int16 v10; // [esp+1Eh] [ebp-Ah]
  int v11; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  v3 = -1073741823;
  if ( Object )
  {
    v12 = a2;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = 8;
    v5[1] = 32;
    v5[2] = 0x8000;
    v11 = 1073741833;
    EtwUpdateEvent(a2, 1073741833);
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
