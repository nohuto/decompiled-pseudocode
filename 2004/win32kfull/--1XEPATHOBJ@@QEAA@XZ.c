/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137B84
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C0136FC0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C01372D0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C0137A70 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0137BC0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137F1C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     GrePolyDraw @ 0x1C02A0C38 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C02ADE70 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02ADF30 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AE1B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AE310 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AE4A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AE600 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
