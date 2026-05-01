/*
 * XREFs of _lambda_80491052145e77ceb3046f94cb1891db_::_lambda_invoker_cdecl_ @ 0x1800BBB60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_37391d3a8d7977efb47a51e1fbe097f3_::operator() @ 0x1800BBC34 (_lambda_37391d3a8d7977efb47a51e1fbe097f3_--operator().c)
 */

__int64 __fastcall lambda_80491052145e77ceb3046f94cb1891db_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_37391d3a8d7977efb47a51e1fbe097f3_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
