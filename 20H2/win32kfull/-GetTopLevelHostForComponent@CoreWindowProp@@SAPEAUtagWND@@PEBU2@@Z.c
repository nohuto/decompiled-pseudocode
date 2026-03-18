/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142DC
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C000F580 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsWindowShellCloaked @ 0x1C0013E60 (IsWindowShellCloaked.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142B0 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00BB764 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C4248 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EA4F8 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHostForComponent(const struct tagWND *a1)
{
  const struct tagWND *v2; // rbx
  const struct tagWND *Host; // rax

  v2 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    v2 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v2);
      v2 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
  }
  return v2;
}
