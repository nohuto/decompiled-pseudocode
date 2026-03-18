/*
 * XREFs of _DwmAsyncChildMoveSize@24 @ 0x312A8
 * Callers:
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncChildMoveSize(void *a1, int a2, int *a3, int *a4, int *a5, int a6)
{
  __int64 v6; // kr00_8
  int v9; // [esp+24h] [ebp-5Ch]
  _WORD v10[3]; // [esp+28h] [ebp-58h] BYREF
  int v11; // [esp+2Eh] [ebp-52h]
  int v12; // [esp+32h] [ebp-4Eh]
  int v13; // [esp+36h] [ebp-4Ah]
  int v14; // [esp+3Ah] [ebp-46h]
  __int16 v15; // [esp+3Eh] [ebp-42h]
  int v16; // [esp+40h] [ebp-40h]
  int v17; // [esp+44h] [ebp-3Ch]
  int v18; // [esp+48h] [ebp-38h]
  int v19; // [esp+4Ch] [ebp-34h]
  int v20; // [esp+50h] [ebp-30h]
  int v21; // [esp+54h] [ebp-2Ch]
  int v22; // [esp+58h] [ebp-28h]
  int v23; // [esp+5Ch] [ebp-24h]
  int v24; // [esp+60h] [ebp-20h]
  int v25; // [esp+64h] [ebp-1Ch]
  int v26; // [esp+68h] [ebp-18h]
  int v27; // [esp+6Ch] [ebp-14h]
  int v28; // [esp+70h] [ebp-10h]
  int v29; // [esp+74h] [ebp-Ch]
  int v30; // [esp+78h] [ebp-8h]

  v9 = -1073741823;
  do
    v6 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v6 );
  if ( a1 )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v10[0] = 60;
    v16 = 1073741845;
    v17 = a2;
    v10[1] = 84;
    v10[2] = 0x8000;
    v18 = *a3;
    v19 = a3[1];
    v20 = a3[2];
    v21 = a3[3];
    v22 = *a4;
    v23 = a4[1];
    v24 = a4[2];
    v25 = a4[3];
    v26 = *a5;
    v27 = a5[1];
    v28 = a5[2];
    v29 = a5[3];
    v30 = a6;
    EtwUpdateEvent(a2, 1073741845);
    v9 = LpcRequestPort(a1, v10);
    ObfDereferenceObject(a1);
  }
  return v9;
}
