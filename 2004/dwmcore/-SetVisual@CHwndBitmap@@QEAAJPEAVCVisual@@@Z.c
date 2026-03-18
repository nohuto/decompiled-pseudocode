/*
 * XREFs of ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C5EE0
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180096EC0 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180097330 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017AA50 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017AC3C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800BD9D0 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::SetVisual(CHwndBitmap *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx
  CRenderTargetBitmap *v8; // rcx
  CVisual *v9; // rcx
  int VisualTree; // eax
  __int64 v11; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 11);
  if ( v4 != a2 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 11) = a2;
    v6 = CResource::RegisterNotifier(this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x86u, 0LL);
    }
    else
    {
      v8 = (CRenderTargetBitmap *)*((_QWORD *)this + 13);
      if ( v8 )
      {
        CRenderTargetBitmap::Release(v8);
        *((_QWORD *)this + 13) = 0LL;
      }
      ReleaseInterface<CResource>((__int64 *)this + 12);
      v9 = (CVisual *)*((_QWORD *)this + 11);
      if ( v9 )
      {
        VisualTree = CVisual::GetVisualTree(v9, (struct CVisualTree **)this + 12);
        v3 = VisualTree;
        if ( VisualTree < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, VisualTree, 0x8Eu, 0LL);
      }
    }
  }
  return v3;
}
