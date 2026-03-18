/*
 * XREFs of OffLineTo @ 0x1C014444C
 * Callers:
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0144270 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A4420 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0089C60 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     EngLineTo @ 0x1C013C090 (EngLineTo.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffLineTo(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX),
        LONG *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        BRUSHOBJ *a5,
        int a6,
        int a7,
        int a8,
        LONG a9,
        RECTL *a10,
        MIX mix)
{
  LONG v11; // edi
  LONG v14; // ebx
  RECTL *prclBounds; // rsi
  int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int128 v22; // [rsp+68h] [rbp-60h] BYREF
  LONG y2; // [rsp+110h] [rbp+48h]

  v11 = a2[1];
  v14 = *a2;
  prclBounds = a10;
  CLIPOBJ_vOffset(a4, *a2, v11);
  v16 = v11 + a9;
  v17 = v14 + a6;
  y2 = v11 + a9;
  v22 = 0LL;
  if ( a10 )
  {
    LODWORD(v22) = v14 + a10->left;
    DWORD2(v22) = v14 + a10->right;
    DWORD1(v22) = v11 + a10->top;
    prclBounds = (RECTL *)&v22;
    HIDWORD(v22) = v11 + a10->bottom;
  }
  v18 = a1(a3, a4, a5, v17, v11 + a7, v14 + a8, v16, prclBounds, mix);
  if ( !v18 )
    v18 = EngLineTo(a3, a4, a5, v17, v11 + a7, v14 + a8, y2, prclBounds, mix);
  CLIPOBJ_vOffset(a4, -v14, -v11);
  return v18;
}
