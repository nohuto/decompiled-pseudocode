/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0132444
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0130F60 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0131780 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0132090 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B13D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B1650 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02B19A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B1B20 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B1D30 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B2150 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B2360 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B2510 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2980 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2C90 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2F50 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3EB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015DD70 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  struct _SURFOBJ *LockableSURFOBJ; // rax

  v3 = 0;
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2 == *((struct _SURFOBJ **)a3 + 9) )
    {
      v5 = *((_QWORD *)a3 + 8);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 11) )
    {
      v5 = *((_QWORD *)a3 + 10);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 13) )
    {
      v5 = *((_QWORD *)a3 + 12);
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)this = v5;
    if ( !v5 )
    {
      LockableSURFOBJ = UMPDSURFOBJ::GetLockableSURFOBJ(this, a2);
      *(_QWORD *)this = LockableSURFOBJ;
      if ( LockableSURFOBJ )
        v3 = 1;
    }
  }
  *((_DWORD *)this + 2) = v3;
  return this;
}
