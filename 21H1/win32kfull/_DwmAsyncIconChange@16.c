/*
 * XREFs of _DwmAsyncIconChange@16 @ 0x1D878
 * Callers:
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncIconChange(PVOID Object, int a2, int a3, int a4)
{
  int v5; // edi
  _WORD v7[3]; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+Eh] [ebp-22h]
  int v9; // [esp+12h] [ebp-1Eh]
  int v10; // [esp+16h] [ebp-1Ah]
  int v11; // [esp+1Ah] [ebp-16h]
  __int16 v12; // [esp+1Eh] [ebp-12h]
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h]

  v5 = -1073741823;
  if ( Object )
  {
    v13 = 1073741832;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 16;
    v7[1] = 40;
    v7[2] = 0x8000;
    v15 = a3;
    v16 = a4;
    v14 = a2;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
