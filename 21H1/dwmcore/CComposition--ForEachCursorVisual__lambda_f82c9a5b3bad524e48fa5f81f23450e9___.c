/*
 * XREFs of CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___ @ 0x1800E6D34
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18018C120 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800BCFB4 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800CA598 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800DF928 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___(
        __int64 a1,
        CDrawingContext **a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  _QWORD *v6; // r14
  CExcludeVisualReference *v7; // rcx
  const struct CVisual *Visual; // rax
  __int64 v9; // rcx
  char v10; // r8
  struct CVisual *v11; // r10
  int v12; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 840) )
  {
    v6 = (_QWORD *)(a1 + 816);
    do
    {
      if ( CExcludeVisualReference::GetVisual(*(CExcludeVisualReference **)(*v6 + 8 * v3)) )
      {
        v2 = 0;
        Visual = CExcludeVisualReference::GetVisual(v7);
        if ( !CVisualTree::_IsInTree(*((const struct CVisual ***)*a2 + 13), Visual, 0) )
        {
          v12 = CDrawingContext::DrawVisual(a2[1], v11, v10);
          v2 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0x10Au, 0LL);
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0x270u, 0LL);
          return (unsigned int)v2;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt((__int64)v6, v3);
      }
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 840) );
  }
  return (unsigned int)v2;
}
