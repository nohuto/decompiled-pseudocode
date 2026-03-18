/*
 * XREFs of ?bThunkLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00PAPAX11111PAH22222PAK@Z @ 0x21004C
 * Callers:
 *     ?UMPDDrvAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x20AB7F (-UMPDDrvAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?UMPDDrvBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20AE11 (-UMPDDrvBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOB.c)
 *     ?UMPDDrvCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x20B20B (-UMPDDrvCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?UMPDDrvPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x20D42F (-UMPDDrvPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?UMPDDrvRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x20E266 (-UMPDDrvRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?UMPDDrvStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x20EAAC (-UMPDDrvStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POIN.c)
 *     ?UMPDDrvStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x20EE29 (-UMPDDrvStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_P.c)
 *     ?UMPDDrvTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KI@Z @ 0x20F9CA (-UMPDDrvTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KI@Z.c)
 * Callees:
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __thiscall UMPDOBJ::bThunkLargeBitmaps(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        void **a6,
        struct _SURFOBJ *a7,
        void **a8,
        struct _SURFOBJ *a9,
        void **a10,
        int *a11,
        int *a12,
        int *a13,
        int *a14,
        int *a15,
        int *a16,
        unsigned int *a17)
{
  struct _SURFOBJ *v17; // ebx
  struct _SURFOBJ *v18; // esi
  struct _SURFOBJ *v19; // edi
  int result; // eax
  struct _SURFOBJ *v22; // [esp+18h] [ebp+8h]

  v17 = a4;
  v18 = a3;
  v19 = a2;
  if ( !a2 && !a3 && !a4 )
    return 1;
  v22 = (struct _SURFOBJ *)UMPDOBJ::bThunkLargeBitmap(this, a2, a5, a6, a11, a12, a17);
  if ( !v22
    || (v22 = (struct _SURFOBJ *)UMPDOBJ::bThunkLargeBitmap(this, a3, a7, a8, a13, a14, a17)) == 0
    || (result = UMPDOBJ::bThunkLargeBitmap(this, a4, a9, a10, a15, a16, a17), (v22 = (struct _SURFOBJ *)result) == 0) )
  {
    if ( !a16 || !*a16 )
      v17 = 0;
    if ( !a14 || !*a14 )
      v18 = 0;
    if ( !a12 || !*a12 )
      v19 = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, v19, v18, v17);
    return (int)v22;
  }
  return result;
}
