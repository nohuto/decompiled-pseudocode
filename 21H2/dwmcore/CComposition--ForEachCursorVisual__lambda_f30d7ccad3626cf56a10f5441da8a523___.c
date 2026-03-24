/*
 * XREFs of CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800EDA1C
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x1801881D0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EBC0 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z @ 0x1800C7778 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D5CE0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5648 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___(
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
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0x10Bu, 0LL);
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
