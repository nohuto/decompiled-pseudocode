/*
 * XREFs of _OffDrawStream@44 @ 0x22EFE7
 * Callers:
 *     ?SpDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1DB598 (-SpDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTAT.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffDrawStream(
        int (__stdcall *a1)(int, int, struct _CLIPOBJ *, int, int *, int *, int, int, int),
        LONG *a2,
        int a3,
        int a4,
        struct _CLIPOBJ *a5,
        int a6,
        int *a7,
        int *a8,
        int a9,
        int a10,
        int a11)
{
  LONG v11; // ebx
  LONG v12; // esi
  int *v13; // ecx
  int *v14; // edx
  int v15; // esi
  LONG v17; // [esp+Ch] [ebp-48h]
  int v19; // [esp+34h] [ebp-20h] BYREF
  int v20; // [esp+38h] [ebp-1Ch]
  int v21; // [esp+3Ch] [ebp-18h] BYREF
  int v22; // [esp+40h] [ebp-14h]
  int v23; // [esp+44h] [ebp-10h]
  int v24; // [esp+48h] [ebp-Ch]

  v11 = *a2;
  v12 = a2[1];
  v17 = v12;
  CLIPOBJ_vOffset(a5, *a2, v12);
  v13 = a7;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( a7 )
  {
    v21 = v11 + *a7;
    v23 = v11 + a7[2];
    v22 = v12 + a7[1];
    v13 = &v21;
    v24 = v12 + a7[3];
  }
  v19 = 0;
  v20 = 0;
  v14 = a8;
  if ( a8 )
  {
    v19 = v11 + *a8;
    v14 = &v19;
    v20 = v12 + a8[1];
  }
  v15 = a1(a3, a4, a5, a6, v13, v14, a9, a10, a11);
  CLIPOBJ_vOffset(a5, -v11, -v17);
  return v15;
}
