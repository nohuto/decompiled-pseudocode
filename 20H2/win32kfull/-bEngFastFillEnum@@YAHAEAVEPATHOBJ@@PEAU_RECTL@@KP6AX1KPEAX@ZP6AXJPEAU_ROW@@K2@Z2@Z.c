/*
 * XREFs of ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013CAC0
 * Callers:
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x1C013C9AC (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CE8A4 (-bBrushPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CEA20 (-bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013CC70 (-bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C013D538 (-bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall bEngFastFillEnum(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        unsigned int a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  bool v6; // cf
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // edi
  int v14; // r14d
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+40h] [rbp-C0h]
  unsigned int v17; // [rsp+44h] [rbp-BCh]
  void (*v18)(int, struct _ROW *, unsigned int, void *); // [rsp+48h] [rbp-B8h]
  struct _POINTFIX v19[40]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = *((_DWORD *)a1 + 1) < 2u;
  v18 = a5;
  *(_OWORD *)Src = 0LL;
  v17 = a3;
  if ( !v6 )
  {
    *(_DWORD *)a1 &= ~8u;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 72LL) = *(_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
    if ( EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src) )
    {
      if ( ((__int64)Src[0] & 2) != 0 )
        return (unsigned int)bFill(a1, a2, v17, a4, a6);
      if ( *((_DWORD *)a1 + 1) > 0x28u )
        return (unsigned int)bFill(a1, a2, v17, a4, a6);
      v13 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) > 0x28 )
        return (unsigned int)bFill(a1, a2, v17, a4, a6);
      memmove(v19, Src[1], 8LL * HIDWORD(Src[0]));
      while ( 1 )
      {
        v16 = EPATHOBJ::bEnum(a1, (struct _PATHDATA *)Src);
        if ( ((__int64)Src[0] & 1) != 0 )
          break;
        v14 = v13 + HIDWORD(Src[0]);
        if ( (unsigned int)(v13 + HIDWORD(Src[0])) > 0x28 )
          break;
        memmove(&v19[v13], Src[1], 8LL * HIDWORD(Src[0]));
        v13 = v14;
        if ( !v16 )
          goto LABEL_16;
      }
      v13 = 0;
LABEL_16:
      if ( !v13 )
        return (unsigned int)bFill(a1, a2, v17, a4, a6);
      v11 = bFastFill(v13, v19, a2, a4, v18, a6);
    }
    else
    {
      v10 = 1;
      if ( HIDWORD(Src[0]) <= 1 )
        goto LABEL_6;
      v11 = bFastFill(SHIDWORD(Src[0]), (struct _POINTFIX *)Src[1], a2, a4, a5, a6);
    }
    v10 = v11;
LABEL_6:
    if ( v10 )
      return v10;
    return (unsigned int)bFill(a1, a2, v17, a4, a6);
  }
  return 1LL;
}
