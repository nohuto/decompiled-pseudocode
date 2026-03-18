/*
 * XREFs of _OffTextOut@48 @ 0x22F6AF
 * Callers:
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?STROBJ_vOffset@@YIXPAU_STROBJ@@JJ@Z @ 0x22EE6B (-STROBJ_vOffset@@YIXPAU_STROBJ@@JJ@Z.c)
 */

int __fastcall OffTextOut(
        int (__stdcall *a1)(int, struct _STROBJ *, int, struct _CLIPOBJ *, int, int *, int, int, int, int),
        int *a2,
        int a3,
        struct _STROBJ *a4,
        int a5,
        struct _CLIPOBJ *a6,
        int a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ebx
  int *v13; // esi
  int v14; // ebx
  int v15; // esi
  int v18; // [esp+2Ch] [ebp-1Ch]
  int v19; // [esp+34h] [ebp-14h] BYREF
  int v20; // [esp+38h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-Ch]
  int v22; // [esp+40h] [ebp-8h]

  v12 = *a2;
  v18 = a2[1];
  v13 = a8;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( a8 )
  {
    v19 = v12 + *a8;
    v21 = v12 + a8[2];
    v20 = v18 + a8[1];
    v13 = &v19;
    v22 = v18 + a8[3];
  }
  STROBJ_vOffset(a4, v12, v18);
  CLIPOBJ_vOffset(a6, v12, v18);
  v14 = -v12;
  v15 = a1(a3, a4, a5, a6, a7, v13, a9, a10, a11, a12);
  STROBJ_vOffset(a4, v14, -v18);
  CLIPOBJ_vOffset(a6, v14, -v18);
  return v15;
}
