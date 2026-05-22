/*
 * XREFs of _lambda_7a2173e1a2d288d2e50916eaa0d31ebd_::_lambda_invoker_cdecl_ @ 0x18008BB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 lambda_7a2173e1a2d288d2e50916eaa0d31ebd_::_lambda_invoker_cdecl_()
{
  DWORD TickCount; // eax

  TickCount = GetTickCount();
  NtMITUpdateInputGlobals(TickCount, 0LL, 0LL, 0LL, 5);
  return 0LL;
}
