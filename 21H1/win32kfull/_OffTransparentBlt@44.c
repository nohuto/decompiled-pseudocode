/*
 * XREFs of _OffTransparentBlt@44 @ 0xCAB1A
 * Callers:
 *     ?SpTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0xCA866 (-SpTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffTransparentBlt(
        int (__stdcall *a1)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int),
        LONG *a2,
        int a3,
        int *a4,
        int a5,
        struct _CLIPOBJ *a6,
        int a7,
        int *a8,
        int *a9,
        int a10,
        int a11)
{
  int *v11; // ebx
  int *v12; // esi
  int v13; // esi
  int v16; // [esp+24h] [ebp-38h]
  int v17; // [esp+28h] [ebp-34h]
  LONG v18; // [esp+2Ch] [ebp-30h]
  LONG v19; // [esp+30h] [ebp-2Ch]
  int v20; // [esp+34h] [ebp-28h] BYREF
  int v21; // [esp+38h] [ebp-24h]
  int v22; // [esp+3Ch] [ebp-20h]
  int v23; // [esp+40h] [ebp-1Ch]
  int v24; // [esp+44h] [ebp-18h] BYREF
  int v25; // [esp+48h] [ebp-14h]
  int v26; // [esp+4Ch] [ebp-10h]
  int v27; // [esp+50h] [ebp-Ch]

  v11 = a8;
  v12 = a9;
  v17 = *a4;
  v16 = a4[1];
  v19 = a2[1];
  v18 = *a2;
  CLIPOBJ_vOffset(a6, *a2, v19);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( a8 )
  {
    v24 = v18 + *a8;
    v26 = v18 + a8[2];
    v25 = v19 + a8[1];
    v11 = &v24;
    v27 = v19 + a8[3];
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( a9 )
  {
    v20 = v17 + *a9;
    v22 = v17 + a9[2];
    v21 = v16 + a9[1];
    v12 = &v20;
    v23 = v16 + a9[3];
  }
  v13 = a1(a3, a5, a6, a7, v11, v12, a10, a11);
  CLIPOBJ_vOffset(a6, -v18, -v19);
  return v13;
}
