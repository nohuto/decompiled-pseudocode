/*
 * XREFs of _OffBitBlt@56 @ 0xE9E3E
 * Callers:
 *     ?SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x65C80 (-SpBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z @ 0x1E1501 (-vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffBitBlt(
        int (__stdcall *a1)(int, int, int, struct _CLIPOBJ *, int, _DWORD *, int *, int, int, int *, int),
        LONG *a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        struct _CLIPOBJ *a7,
        int a8,
        _DWORD *a9,
        int *a10,
        int a11,
        int a12,
        int *a13,
        int a14)
{
  LONG v14; // ebx
  int *v15; // edi
  int v16; // eax
  int *v17; // edx
  int v18; // esi
  int v21; // [esp+38h] [ebp-28h] BYREF
  int v22; // [esp+3Ch] [ebp-24h]
  int v23; // [esp+40h] [ebp-20h] BYREF
  int v24; // [esp+44h] [ebp-1Ch]
  LONG v25; // [esp+48h] [ebp-18h]
  _DWORD v26[4]; // [esp+4Ch] [ebp-14h] BYREF

  v15 = a13;
  v14 = *a2;
  v25 = a2[1];
  CLIPOBJ_vOffset(a7, v14, v25);
  v16 = v14 + *a9;
  v23 = 0;
  v24 = 0;
  v17 = a10;
  v26[0] = v16;
  v26[2] = v14 + a9[2];
  v26[1] = v25 + a9[1];
  v26[3] = v25 + a9[3];
  if ( a10 )
  {
    v23 = *a10 + *a4;
    v17 = &v23;
    v24 = a4[1] + a10[1];
  }
  v21 = 0;
  v22 = 0;
  if ( a13 )
  {
    v21 = v14 + *a13;
    v15 = &v21;
    v22 = v25 + a13[1];
  }
  v18 = a1(a3, a5, a6, a7, a8, v26, v17, a11, a12, v15, a14);
  CLIPOBJ_vOffset(a7, -v14, -v25);
  return v18;
}
