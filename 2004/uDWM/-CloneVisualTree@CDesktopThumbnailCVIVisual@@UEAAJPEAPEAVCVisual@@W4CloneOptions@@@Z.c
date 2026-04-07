/*
 * XREFs of ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B6020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006320 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180096AD0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B69E0 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::CloneVisualTree(
        __int64 a1,
        struct CDesktopThumbnailCVIVisual **a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct CDesktopThumbnailCVIVisual *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDesktopThumbnailCVIVisual *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  v6 = CDesktopThumbnailCVIVisual::Create(&v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v6 = CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(a1, v13, v9);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      v7 = 0;
      *a2 = v10;
      goto LABEL_7;
    }
    v8 = 497LL;
  }
  else
  {
    v8 = 496LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  return v7;
}
