/*
 * XREFs of _OffAlphaBlend@40 @ 0xE51D2
 * Callers:
 *     ?SpAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0xE4EFE (-SpAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffAlphaBlend(
        int (__stdcall *a1)(int, int, struct _CLIPOBJ *, int, int *, int *, int),
        LONG *a2,
        int a3,
        int *a4,
        int a5,
        struct _CLIPOBJ *a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  int *v10; // ebx
  int *v11; // esi
  int v12; // esi
  int v15; // [esp+24h] [ebp-34h]
  int v16; // [esp+28h] [ebp-30h]
  LONG v17; // [esp+2Ch] [ebp-2Ch]
  LONG v18; // [esp+30h] [ebp-28h]
  int v19; // [esp+34h] [ebp-24h] BYREF
  int v20; // [esp+38h] [ebp-20h]
  int v21; // [esp+3Ch] [ebp-1Ch]
  int v22; // [esp+40h] [ebp-18h]
  int v23; // [esp+44h] [ebp-14h] BYREF
  int v24; // [esp+48h] [ebp-10h]
  int v25; // [esp+4Ch] [ebp-Ch]
  int v26; // [esp+50h] [ebp-8h]

  v10 = a8;
  v11 = a9;
  v16 = *a4;
  v15 = a4[1];
  v18 = a2[1];
  v17 = *a2;
  CLIPOBJ_vOffset(a6, *a2, v18);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( a8 )
  {
    v23 = v17 + *a8;
    v25 = v17 + a8[2];
    v24 = v18 + a8[1];
    v10 = &v23;
    v26 = v18 + a8[3];
  }
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( a9 )
  {
    v19 = v16 + *a9;
    v21 = v16 + a9[2];
    v20 = v15 + a9[1];
    v11 = &v19;
    v22 = v15 + a9[3];
  }
  v12 = a1(a3, a5, a6, a7, v10, v11, a10);
  CLIPOBJ_vOffset(a6, -v17, -v18);
  return v12;
}
