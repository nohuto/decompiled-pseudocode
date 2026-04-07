/*
 * XREFs of ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015A6C
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800159E0 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003BD14 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180040020 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B69E0 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001CF14 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CRenderDataVisual::InitializeVisualTreeClone(__int64 a1, CRenderDataVisual *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CVisual::InitializeVisualTreeClone(a1, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v7 = 0LL;
    if ( *(_DWORD *)(a1 + 272) )
    {
      while ( 1 )
      {
        v9 = CRenderDataVisual::AddInstruction(a2, *(struct CRenderDataInstruction **)(*(_QWORD *)(a1 + 248) + 8 * v7));
        v10 = v9;
        if ( v9 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 272) )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    else
    {
      return 0LL;
    }
  }
}
