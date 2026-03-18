/*
 * XREFs of ?bBrushPathN_8x8@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02CEA20
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013C604 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013CAC0 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall bBrushPathN_8x8(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  void (*v11)(struct _RECTL *, unsigned int, void *); // r9
  void (*v12)(int, struct _ROW *, unsigned int, void *); // rax
  _QWORD v14[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v11 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath8_8x8Enum;
  v14[1] = *((_QWORD *)a1 + 10);
  LODWORD(v14[3]) = *((_DWORD *)a1 + 22);
  v14[2] = *((_QWORD *)a4[1].pvRbrush + 4);
  LODWORD(v14[5]) = a5->x & 7;
  HIDWORD(v14[5]) = a5->y & 7;
  v12 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath8_8x8EnumRow;
  if ( a6 != 3 )
  {
    v12 = (void (*)(int, struct _ROW *, unsigned int, void *))vBrushPath4_8x8EnumRow;
    v11 = (void (*)(struct _RECTL *, unsigned int, void *))vBrushPath4_8x8Enum;
  }
  return bEngFastFillEnum((struct EPATHOBJ *)a2, a3, a7, v11, v12, v14);
}
