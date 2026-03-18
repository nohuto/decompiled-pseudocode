/*
 * XREFs of _DwmAsyncChildCreate@52 @ 0x999CC
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncChildCreate(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const void *a8,
        int a9,
        int *a10,
        int a11,
        int a12,
        int a13)
{
  __int64 v13; // kr00_8
  int v15; // [esp+Ch] [ebp-9Ch]
  _WORD v17[3]; // [esp+28h] [ebp-80h] BYREF
  int v18; // [esp+2Eh] [ebp-7Ah]
  int v19; // [esp+32h] [ebp-76h]
  int v20; // [esp+36h] [ebp-72h]
  int v21; // [esp+3Ah] [ebp-6Eh]
  __int16 v22; // [esp+3Eh] [ebp-6Ah]
  int v23; // [esp+40h] [ebp-68h]
  int v24; // [esp+44h] [ebp-64h]
  int v25; // [esp+48h] [ebp-60h]
  int v26; // [esp+4Ch] [ebp-5Ch]
  int v27; // [esp+50h] [ebp-58h]
  int v28; // [esp+54h] [ebp-54h]
  int v29; // [esp+58h] [ebp-50h]
  int v30; // [esp+5Ch] [ebp-4Ch]
  int v31; // [esp+60h] [ebp-48h]
  int v32; // [esp+64h] [ebp-44h]
  _BYTE v33[36]; // [esp+68h] [ebp-40h] BYREF
  int v34; // [esp+8Ch] [ebp-1Ch]
  int v35; // [esp+90h] [ebp-18h]
  int v36; // [esp+94h] [ebp-14h]
  int v37; // [esp+98h] [ebp-10h]
  int v38; // [esp+9Ch] [ebp-Ch]

  v15 = -1073741823;
  do
    v13 = g_cDWMWindowUniqueness;
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v13 );
  if ( a1 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v17[0] = 96;
    v17[1] = 120;
    v17[2] = 0x8000;
    v24 = a2;
    v26 = a4;
    v27 = a5;
    v35 = a6;
    v32 = a7;
    v23 = 1073741841;
    v25 = a3;
    qmemcpy(v33, a8, sizeof(v33));
    v34 = a9;
    v28 = *a10;
    v29 = a10[1];
    v30 = a10[2];
    v31 = a10[3];
    v36 = a11;
    v37 = a12;
    v38 = a13;
    EtwUpdateEvent(a3, 1073741841);
    v15 = LpcRequestPort(a1, v17);
    ObfDereferenceObject(a1);
  }
  return v15;
}
