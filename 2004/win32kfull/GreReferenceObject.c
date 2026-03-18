/*
 * XREFs of GreReferenceObject @ 0x1C00657F8
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C002B170 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026E634 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C02744D0 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  int v1; // ebx
  char v3; // [rsp+38h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)&v3, a1);
  v1 = SURFREF::bValid((SURFREF *)&v3);
  if ( v1 )
    SURFREF::vKeepIt((SURFREF *)&v3);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
  return v1 == 0 ? 0xC0000008 : 0;
}
