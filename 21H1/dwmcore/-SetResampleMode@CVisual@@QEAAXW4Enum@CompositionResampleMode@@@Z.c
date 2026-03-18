/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800D2D00
 * Callers:
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800D2CD0 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6584 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x180097894 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetResampleMode(__int64 a1, int a2)
{
  CSparseStorage *v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CSparseStorage *)(a1 + 216);
  if ( a2 == `CVisual::SetResampleMode'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x2000000u;
  else
    CSparseStorage::SetData(v2, 7u, 4u, &v3);
}
