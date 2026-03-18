/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0139B3C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C0138F10 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C0139220 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C01399C0 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0139B9C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0139EEC (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFlattenPath @ 0x1C02AC850 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AC940 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02ACBC0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ACD20 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ACEB0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD010 (NtGdiWidenPath.c)
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
