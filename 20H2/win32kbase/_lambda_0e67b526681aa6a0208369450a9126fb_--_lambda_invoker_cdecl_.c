/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x1C0183760
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(
        CInputDest *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CInputDest::SetEmpty(a1, a2, a3, a4);
  Win32FreePool((__int64)a1);
}
