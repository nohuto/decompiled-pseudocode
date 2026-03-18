/*
 * XREFs of _DwmAsyncMagnSetWindowSlicer@16 @ 0x1D2340
 * Callers:
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetWindowSlicer(PVOID Object, int a2, int a3, const void *a4)
{
  int v5; // esi
  _WORD v7[3]; // [esp+10h] [ebp-48h] BYREF
  int v8; // [esp+16h] [ebp-42h]
  int v9; // [esp+1Ah] [ebp-3Eh]
  int v10; // [esp+1Eh] [ebp-3Ah]
  int v11; // [esp+22h] [ebp-36h]
  __int16 v12; // [esp+26h] [ebp-32h]
  int v13; // [esp+28h] [ebp-30h]
  __int64 v14; // [esp+2Ch] [ebp-2Ch]
  int v15; // [esp+34h] [ebp-24h]
  _BYTE v16[24]; // [esp+38h] [ebp-20h] BYREF

  v5 = -1073741823;
  if ( Object )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 40;
    v7[1] = 64;
    v7[2] = 0x8000;
    v14 = a2;
    v13 = 1073741929;
    v15 = a3;
    qmemcpy(v16, a4, sizeof(v16));
    EtwUpdateEvent(a2, 1073741929);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
