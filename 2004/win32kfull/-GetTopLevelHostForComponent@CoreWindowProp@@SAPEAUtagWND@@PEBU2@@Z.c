/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068
 * Callers:
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035304 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsWindowShellCloaked @ 0x1C003C830 (IsWindowShellCloaked.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00F5C00 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EB168 (-RequestModernAppClose@@YAHXZ.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
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
