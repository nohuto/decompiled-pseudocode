/*
 * XREFs of _OffStretchBltROP@64 @ 0x22F3E8
 * Callers:
 *     ?SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1DC279 (-SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffStretchBltROP(
        int (__stdcall *a1)(int, int, int, struct _CLIPOBJ *, int, int, int *, int *, int *, int, int, int, int),
        LONG *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct _CLIPOBJ *a7,
        int a8,
        int a9,
        int *a10,
        int *a11,
        int *a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  LONG v16; // ebx
  int *v17; // esi
  LONG v18; // eax
  LONG v19; // edx
  int *v20; // edx
  int v21; // esi
  LONG y; // [esp+34h] [ebp-3Ch]
  LONG x; // [esp+38h] [ebp-38h]
  int v26; // [esp+3Ch] [ebp-34h] BYREF
  int v27; // [esp+40h] [ebp-30h]
  LONG v28; // [esp+44h] [ebp-2Ch]
  int *v29; // [esp+48h] [ebp-28h]
  int v30; // [esp+4Ch] [ebp-24h] BYREF
  int v31; // [esp+50h] [ebp-20h]
  int v32; // [esp+54h] [ebp-1Ch]
  int v33; // [esp+58h] [ebp-18h]
  int v34; // [esp+5Ch] [ebp-14h] BYREF
  int v35; // [esp+60h] [ebp-10h]
  int v36; // [esp+64h] [ebp-Ch]
  int v37; // [esp+68h] [ebp-8h]

  v29 = a11;
  v16 = *a2;
  v17 = a12;
  x = gptlZero.x;
  y = gptlZero.y;
  v18 = a2[1];
  v19 = *a2;
  v28 = v18;
  CLIPOBJ_vOffset(a7, v19, v18);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( a11 )
  {
    v34 = v16 + *v29;
    v36 = v16 + v29[2];
    v35 = v28 + v29[1];
    v37 = v28 + v29[3];
    v29 = &v34;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( a12 )
  {
    v30 = x + *a12;
    v32 = x + a12[2];
    v31 = y + a12[1];
    v17 = &v30;
    v33 = y + a12[3];
  }
  v26 = 0;
  v27 = 0;
  v20 = a10;
  if ( a10 )
  {
    v26 = v16 + *a10;
    v20 = &v26;
    v27 = v28 + a10[1];
  }
  v21 = a1(a3, a5, a6, a7, a8, a9, v20, v29, v17, a13, a14, a15, a16);
  CLIPOBJ_vOffset(a7, -v16, -v28);
  return v21;
}
