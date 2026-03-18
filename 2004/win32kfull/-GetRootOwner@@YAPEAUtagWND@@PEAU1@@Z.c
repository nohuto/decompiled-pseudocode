/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010B9F8
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0024154 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AEC34 (_anonymous_namespace_--EligibleWindow.c)
 *     _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C00BED60 (_lambda_cb10391b5661d01073277e9ca426a942_--_lambda_invoker_cdecl_.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C010B938 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0241918 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010BA2C (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetRootOwner(struct tagWND *a1)
{
  struct tagWND *RealOwner; // rax
  __int64 v3; // r8

  while ( 1 )
  {
    RealOwner = GetRealOwner(a1);
    if ( !RealOwner || *(char *)(*((_QWORD *)RealOwner + 5) + 19LL) < 0 )
      break;
    a1 = RealOwner;
  }
  return (struct tagWND *)v3;
}
