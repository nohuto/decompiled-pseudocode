/*
 * XREFs of ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A88E0
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802154FC (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180241250 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801A7C68 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8404 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A89B4 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8B44 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDraw(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        bool a4,
        bool *a5)
{
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( IsSuperWetInkCompatibleVailContainer((__int64)this, (__int64)a2) )
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawHost(this, a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v11 = 347LL;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(this, a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v11 = 330LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    if ( !*a5 )
    {
      LOBYTE(v10) = a4;
      v9 = CSuperWetInkManager::TryDrawSuperWetLocal(this, a2, (const struct CVisualTree **)a3, v10, a5);
      if ( v9 < 0 )
      {
        v11 = 338LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
