/*
 * XREFs of ?GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z @ 0x155D29
 * Callers:
 *     ?RequestModernAppClose@@YGHXZ @ 0x155E98 (-RequestModernAppClose@@YGHXZ.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 */

struct tagWND *__thiscall GetTopLevelWindowFromInputForVisualWindowOrSelf(void *this)
{
  int v1; // esi
  struct tagWND *CompositionInputWindowUIOwner; // eax
  struct tagWND *TopLevelHostForComponent; // eax

  v1 = (int)this;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(this);
  if ( CompositionInputWindowUIOwner )
    v1 = (int)CompositionInputWindowUIOwner;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  if ( TopLevelHostForComponent )
    v1 = (int)TopLevelHostForComponent;
  return (struct tagWND *)_GetTopLevelWindow(v1);
}
