/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C01301A4
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C012FDF0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B2BD0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2F20 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B30A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B32B0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B36D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B38E0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B3A90 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3F00 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4210 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B44D0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B5430 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C0130214 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  struct _SURFOBJ *LockedSURFOBJ; // rax

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
      LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2);
      *(_QWORD *)this = LockedSURFOBJ;
      if ( LockedSURFOBJ )
        v3 = 1;
    }
  }
  *((_DWORD *)this + 2) = v3;
  return this;
}
