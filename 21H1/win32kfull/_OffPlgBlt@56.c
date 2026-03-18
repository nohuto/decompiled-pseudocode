/*
 * XREFs of _OffPlgBlt@56 @ 0x22F17C
 * Callers:
 *     ?SpPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1DBA99 (-SpPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_P.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffPlgBlt(
        int (__stdcall *a1)(int, int, int, struct _CLIPOBJ *, int, int, int *, _DWORD *, int *, int, int),
        LONG *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct _CLIPOBJ *a7,
        int a8,
        int a9,
        int *a10,
        _DWORD *a11,
        int *a12,
        int a13,
        int a14)
{
  int *v14; // ebx
  int *v15; // esi
  LONG v16; // edi
  int v17; // esi
  LONG y; // [esp+30h] [ebp-40h]
  LONG x; // [esp+34h] [ebp-3Ch]
  int v22; // [esp+38h] [ebp-38h] BYREF
  int v23; // [esp+3Ch] [ebp-34h]
  LONG v24; // [esp+40h] [ebp-30h]
  int v25; // [esp+44h] [ebp-2Ch] BYREF
  int v26; // [esp+48h] [ebp-28h]
  int v27; // [esp+4Ch] [ebp-24h]
  int v28; // [esp+50h] [ebp-20h]
  _DWORD v29[6]; // [esp+54h] [ebp-1Ch] BYREF

  v14 = a10;
  v15 = a12;
  x = gptlZero.x;
  v16 = *a2;
  y = gptlZero.y;
  v24 = a2[1];
  CLIPOBJ_vOffset(a7, v16, v24);
  v22 = 0;
  v23 = 0;
  if ( a10 )
  {
    v22 = v16 + *a10;
    v14 = &v22;
    v23 = v24 + a10[1];
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( a12 )
  {
    v25 = x + *a12;
    v27 = x + a12[2];
    v26 = y + a12[1];
    v15 = &v25;
    v28 = y + a12[3];
  }
  v29[0] = 16 * v16 + *a11;
  v29[2] = 16 * v16 + a11[2];
  v29[4] = 16 * v16 + a11[4];
  v29[1] = 16 * v24 + a11[1];
  v29[3] = 16 * v24 + a11[3];
  v29[5] = 16 * v24 + a11[5];
  v17 = a1(a3, a5, a6, a7, a8, a9, v14, v29, v15, a13, a14);
  CLIPOBJ_vOffset(a7, -v16, -v24);
  return v17;
}
