/*
 * XREFs of ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800136DC
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180013650 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAC4 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180040180 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6300 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016EB4 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001FF68 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CRenderDataVisual::InitializeVisualTreeClone(__int64 a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CVisual::InitializeVisualTreeClone();
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v6 = 0LL;
    if ( *(_DWORD *)(a1 + 272) )
    {
      while ( 1 )
      {
        v8 = CRenderDataVisual::AddInstruction(a2, *(struct CRenderDataInstruction **)(*(_QWORD *)(a1 + 248) + 8 * v6));
        v9 = v8;
        if ( v8 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 272) )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
}
