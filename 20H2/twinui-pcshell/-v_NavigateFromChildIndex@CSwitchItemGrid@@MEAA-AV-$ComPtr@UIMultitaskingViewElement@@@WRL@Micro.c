/*
 * XREFs of ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1803A8500
 * Callers:
 *     <none>
 * Callees:
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1803A4740 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1803A7FF0 (-_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@M.c)
 *     ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1803A8074 (-_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Mic.c)
 */

__int64 *__fastcall CSwitchItemGrid::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  if ( (unsigned int)(a4 - 3) <= 1 )
  {
    CSwitchItemGrid::_HorizontalNavigateFromIndex(a1, (__int64)a2, a3, a4);
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    CSwitchItemGrid::_VerticalNavigateFromIndex(a1, a2, a3, a4);
  }
  else
  {
    CMultitaskingViewElementBase::v_NavigateFromChildIndex(a1, a2, a3, a4, a5);
  }
  return a2;
}
