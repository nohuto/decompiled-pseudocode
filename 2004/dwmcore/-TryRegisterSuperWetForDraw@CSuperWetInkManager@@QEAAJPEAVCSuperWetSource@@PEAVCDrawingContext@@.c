/*
 * XREFs of ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801971AC
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C3CC8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F0B88 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x180196B5C (IsSuperWetInkCompatibleVailContainer.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180197244 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180197388 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDraw(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        bool a4,
        bool *a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( IsSuperWetInkCompatibleVailContainer() )
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawHost(this, a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v10 = 310LL;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(this, a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v10 = 302LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
