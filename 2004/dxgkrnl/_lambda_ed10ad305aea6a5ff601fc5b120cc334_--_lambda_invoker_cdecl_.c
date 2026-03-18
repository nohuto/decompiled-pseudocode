/*
 * XREFs of _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C02A2AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027DE68 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(DXGADAPTER **this)
{
  DxgkRedrawCursorForPostCompositon(*this, *((unsigned int *)this + 4));
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  operator delete(this);
}
