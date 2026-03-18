/*
 * XREFs of _OffLineTo@44 @ 0xBC28A
 * Callers:
 *     ?SpLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0xBC06C (-SpLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall OffLineTo(
        int (__stdcall *a1)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, int, LONG, int, LONG, RECTL *, MIX),
        LONG *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        BRUSHOBJ *a5,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  LONG v11; // ebx
  RECTL *v12; // esi
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  BOOL v16; // esi
  LONG v18; // [esp+18h] [ebp-24h]
  int v20; // [esp+24h] [ebp-18h] BYREF
  int v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+2Ch] [ebp-10h]
  int v23; // [esp+30h] [ebp-Ch]
  LONG x1a; // [esp+50h] [ebp+14h]
  LONG y1a; // [esp+54h] [ebp+18h]
  LONG x2a; // [esp+58h] [ebp+1Ch]
  LONG y2a; // [esp+5Ch] [ebp+20h]

  v11 = *a2;
  v12 = prclBounds;
  v18 = a2[1];
  CLIPOBJ_vOffset(a4, *a2, v18);
  y1a = v18 + y1;
  y2a = v18 + y2;
  v13 = v11 + x1;
  v20 = 0;
  v14 = v11 + x2;
  x1a = v11 + x1;
  x2a = v11 + x2;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( prclBounds )
  {
    v20 = v11 + prclBounds->left;
    v22 = v11 + prclBounds->right;
    v21 = v18 + prclBounds->top;
    v12 = (RECTL *)&v20;
    v23 = v18 + prclBounds->bottom;
  }
  v15 = a1(a3, a4, a5, v13, y1a, v14, y2a, v12, mix);
  if ( v15 )
    v16 = v15;
  else
    v16 = EngLineTo(a3, a4, a5, x1a, y1a, x2a, y2a, v12, mix);
  CLIPOBJ_vOffset(a4, -v11, -v18);
  return v16;
}
