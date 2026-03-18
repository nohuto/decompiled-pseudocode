/*
 * XREFs of ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C8810
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800925D4 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180092A40 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D650 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D83C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008F5A8 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800B3EF4 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
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
