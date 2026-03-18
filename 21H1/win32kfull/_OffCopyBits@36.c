/*
 * XREFs of _OffCopyBits@36 @ 0x22EF0F
 * Callers:
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulUpdateColors@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@@Z @ 0x205367 (-MulUpdateColors@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall OffCopyBits(
        int (__stdcall *a1)(int, int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *),
        LONG *a2,
        int a3,
        int *a4,
        int a5,
        struct _CLIPOBJ *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *v9; // ecx
  int v10; // eax
  LONG v11; // esi
  LONG v12; // edi
  int v13; // eax
  _DWORD v15[2]; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+14h] [ebp-38h]
  int v17; // [esp+18h] [ebp-34h]
  int v18; // [esp+1Ch] [ebp-30h]
  int (__stdcall *v19)(int, int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *); // [esp+20h] [ebp-2Ch]
  int v20; // [esp+24h] [ebp-28h]
  int v21; // [esp+28h] [ebp-24h]
  _DWORD *v22; // [esp+2Ch] [ebp-20h]
  int v23; // [esp+30h] [ebp-1Ch]
  _DWORD v24[4]; // [esp+34h] [ebp-18h] BYREF

  v16 = a3;
  v19 = a1;
  v17 = a5;
  v18 = a7;
  v9 = a8;
  v23 = (int)a8;
  v22 = a9;
  v10 = a4[1];
  v21 = *a4;
  v11 = *a2;
  v20 = v10;
  v12 = a2[1];
  if ( a6 )
  {
    CLIPOBJ_vOffset(a6, v11, a2[1]);
    v9 = (_DWORD *)v23;
  }
  v13 = v11 + *v9;
  v23 = 0;
  v24[0] = v13;
  v24[2] = v11 + v9[2];
  v24[1] = v12 + v9[1];
  v24[3] = v12 + v9[3];
  v15[0] = v21 + *v22;
  v15[1] = v20 + v22[1];
  if ( v19 )
    v23 = v19(v16, v17, a6, v18, v24, v15);
  if ( a6 )
    CLIPOBJ_vOffset(a6, -v11, -v12);
  return v23;
}
