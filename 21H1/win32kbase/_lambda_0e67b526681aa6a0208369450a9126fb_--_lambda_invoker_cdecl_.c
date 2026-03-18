/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x1C018B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(CInputDest *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  CInputDest::SetEmpty(a1);
  Win32FreePool((__int64)a1, v2, v3);
}
