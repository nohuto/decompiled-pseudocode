/*
 * XREFs of ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B382C
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180257C90 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800D94E4 (-SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800DB370 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x1800DB428 (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800DB504 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ??2CDesktopTree@@KAPEAX_K@Z @ 0x1800DBE74 (--2CDesktopTree@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct _LUID a3,
        struct CDesktopTree **a4)
{
  CDesktopTree *v8; // rax
  __int64 v9; // rcx
  CMILCOMBase *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v8 = (CDesktopTree *)CDesktopTree::operator new();
  if ( v8 )
    v10 = CDesktopTree::CDesktopTree(v8, a1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    CMILCOMBase::InternalAddRef(v10);
    v11 = CDesktopTree::Initialize(v10);
    v12 = v11;
    if ( v11 < 0 )
    {
      v15 = 23;
    }
    else
    {
      v11 = CDesktopTree::SetLuid(v10, a3);
      v12 = v11;
      if ( v11 < 0 )
      {
        v15 = 24;
      }
      else
      {
        v11 = CDesktopTree::SetRootVisual((CComposition ***)v10, a2);
        v12 = v11;
        if ( v11 >= 0 )
        {
          *a4 = v10;
          return v12;
        }
        v15 = 25;
      }
    }
    v13 = v11;
  }
  else
  {
    v12 = -2147024882;
    v13 = -2147024882;
    v15 = 21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v15, 0LL);
  if ( v10 )
    CRenderTargetBitmap::Release(v10);
  return v12;
}
