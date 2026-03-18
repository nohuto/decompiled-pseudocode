/*
 * XREFs of _IsPointerPromotedMouseMessage@8 @ 0x9461E
 * Callers:
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsPointerPromotedMouseMessage(int a1, _DWORD *a2)
{
  return a2 && (unsigned int)(a1 - 512) <= 0xE && (*a2 == 4 || *a2 == 8);
}
