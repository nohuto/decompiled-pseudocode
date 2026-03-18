/*
 * XREFs of _DwmAsyncSendWindowArrangingData@24 @ 0x1D282F
 * Callers:
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _bMoveDevPreviewRect@24 @ 0x1E3ABE (_bMoveDevPreviewRect@24.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncSendWindowArrangingData(void *a1, int a2, int a3, int *a4, int a5, int a6)
{
  __int64 v6; // kr00_8
  int v7; // edi
  _WORD v10[3]; // [esp+20h] [ebp-40h] BYREF
  int v11; // [esp+26h] [ebp-3Ah]
  int v12; // [esp+2Ah] [ebp-36h]
  int v13; // [esp+2Eh] [ebp-32h]
  int v14; // [esp+32h] [ebp-2Eh]
  __int16 v15; // [esp+36h] [ebp-2Ah]
  int v16; // [esp+38h] [ebp-28h]
  int v17; // [esp+3Ch] [ebp-24h]
  int v18; // [esp+40h] [ebp-20h]
  int v19; // [esp+44h] [ebp-1Ch]
  int v20; // [esp+48h] [ebp-18h]
  int v21; // [esp+4Ch] [ebp-14h]
  int v22; // [esp+50h] [ebp-10h]
  int v23; // [esp+54h] [ebp-Ch]
  int v24; // [esp+58h] [ebp-8h]

  do
    v6 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v6 );
  v7 = -1073741823;
  if ( a1 )
  {
    v15 = 0;
    v10[0] = 36;
    v10[1] = 60;
    v10[2] = 0x8000;
    v17 = a2;
    v18 = a3;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v16 = 1073741928;
    v19 = *a4;
    v20 = a4[1];
    v21 = a4[2];
    v22 = a4[3];
    v23 = a5;
    v24 = a6;
    EtwUpdateEvent(0, 1073741928);
    v7 = LpcRequestPort(a1, v10);
    ObfDereferenceObject(a1);
  }
  return v7;
}
