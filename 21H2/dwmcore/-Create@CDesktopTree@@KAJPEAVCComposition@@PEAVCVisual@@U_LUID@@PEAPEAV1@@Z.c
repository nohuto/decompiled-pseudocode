/*
 * XREFs of ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801F5F68
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18029C0F8 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6AC0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x1800DF880 (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800F7A0C (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800F7C5C (-SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z.c)
 *     ??2CDesktopTree@@KAPEAX_K@Z @ 0x1800F8D30 (--2CDesktopTree@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::Create(struct CComposition *a1, CVisual **a2, struct _LUID a3, struct _LUID **a4)
{
  CDesktopTree *v8; // rax
  CDesktopTree *v9; // rax
  CResource *v10; // rbx
  struct _LUID *v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (CDesktopTree *)CDesktopTree::operator new();
  if ( v8 )
  {
    v9 = CDesktopTree::CDesktopTree(v8, a1);
    v10 = v9;
    v11 = (struct _LUID *)v9;
    if ( v9 )
      CMILRefCountImpl::AddReference((CDesktopTree *)((char *)v9 + 8));
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
  }
  v12 = CDesktopTree::SetLuid(v11, a3);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = CDesktopTree::Initialize((CDesktopTree *)v11);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v12 = CDesktopTree::SetRootVisual((CVisual **)v11, a2);
      v13 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v11;
        return 0;
      }
      v14 = 26LL;
    }
    else
    {
      v14 = 24LL;
    }
  }
  else
  {
    v14 = 22LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v12);
  if ( v10 )
    CResource::InternalRelease(v10);
  return v13;
}
