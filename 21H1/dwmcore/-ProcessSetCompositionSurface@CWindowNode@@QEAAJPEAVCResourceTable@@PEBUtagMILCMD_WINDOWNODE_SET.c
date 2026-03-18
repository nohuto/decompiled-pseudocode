/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1801F751C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180182414 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801F7900 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetCompositionSurface(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *a3)
{
  void *v3; // r8
  struct CCompositionSurfaceBitmap *v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  CRenderTargetBitmap *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0LL;
  v12 = 0LL;
  if ( v3 )
  {
    v6 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
           (CCompositionSurfaceManager *)(*((_QWORD *)g_pComposition + 12) + 16LL),
           this[2],
           v3,
           &v12);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x32Au, 0LL);
      v4 = v12;
      goto LABEL_7;
    }
    v4 = v12;
  }
  v9 = CWindowNode::SetFlipExBitmap((CWindowNode *)this, v4);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x32Du, 0LL);
LABEL_7:
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  return v8;
}
