/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B69E0
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B6020 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180015A6C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(_QWORD *a1, CRenderDataVisual *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CRenderDataVisual::InitializeVisualTreeClone((__int64)a1, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)a2 + 37) = a1[37];
    v8 = a1[37];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    *((_QWORD *)a2 + 35) = a1[35];
    v9 = a1[35];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *((_QWORD *)a2 + 38) = a1[38];
    v10 = a1[38];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
