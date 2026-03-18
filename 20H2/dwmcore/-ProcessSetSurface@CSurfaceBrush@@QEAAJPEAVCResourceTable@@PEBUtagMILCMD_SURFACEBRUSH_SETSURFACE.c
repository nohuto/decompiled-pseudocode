/*
 * XREFs of ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800AB63C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AB6C8 (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800AB78C (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSurface(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSURFACE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r8
  __int64 i; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  float v11[4]; // [rsp+30h] [rbp-28h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  for ( i = 0LL; i < 4; ++i )
    v11[i] = (float)*(int *)(v5 + 4 * i + 12);
  v7 = CSurfaceBrush::SetSurface(this, ResourceWithoutType);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x87u, 0LL);
  else
    CSurfaceBrush::SetSurfaceContentRect(this, v11);
  return v9;
}
