/*
 * XREFs of _OffStretchBlt@56 @ 0x22F2C1
 * Callers:
 *     ?SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1DBF6E (-SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@P.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffStretchBlt(
        int (__stdcall *a1)(int, int, int, struct _CLIPOBJ *, int, int, int *, _DWORD *, _DWORD *, int, int),
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
        _DWORD *a12,
        int a13,
        int a14)
{
  LONG y; // ebx
  LONG x; // edi
  LONG v16; // ecx
  LONG v17; // edx
  int v18; // eax
  int v19; // eax
  int *v20; // ecx
  struct _CLIPOBJ *v21; // ebx
  int v22; // esi
  int v25; // [esp+30h] [ebp-38h] BYREF
  int v26; // [esp+34h] [ebp-34h]
  LONG v27; // [esp+38h] [ebp-30h]
  struct _CLIPOBJ *v28; // [esp+3Ch] [ebp-2Ch]
  LONG v29; // [esp+40h] [ebp-28h]
  _DWORD v30[4]; // [esp+44h] [ebp-24h] BYREF
  _DWORD v31[4]; // [esp+54h] [ebp-14h] BYREF

  v28 = a7;
  y = gptlZero.y;
  x = gptlZero.x;
  v16 = a2[1];
  v17 = *a2;
  v29 = v16;
  v27 = v17;
  CLIPOBJ_vOffset(a7, v17, v16);
  v30[0] = v27 + *a11;
  v18 = v27 + a11[2];
  v25 = 0;
  v30[2] = v18;
  v30[1] = v29 + a11[1];
  v19 = v29 + a11[3];
  v26 = 0;
  v30[3] = v19;
  v31[0] = x + *a12;
  v31[2] = x + a12[2];
  v31[1] = y + a12[1];
  v20 = a10;
  v31[3] = y + a12[3];
  if ( a10 )
  {
    v25 = v27 + *a10;
    v20 = &v25;
    v26 = v29 + a10[1];
  }
  v21 = v28;
  v22 = a1(a3, a5, a6, v28, a8, a9, v20, v30, v31, a13, a14);
  CLIPOBJ_vOffset(v21, -v27, -v29);
  return v22;
}
