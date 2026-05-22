/*
 * XREFs of _lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_ @ 0x180179B40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2767fecee140e58cebc2d212b2646f2a_::operator() @ 0x180179C54 (_lambda_2767fecee140e58cebc2d212b2646f2a_--operator().c)
 *     _lambda_31f1c476cd9a7eb96f2f1b165430548d_::operator() @ 0x180179CC0 (_lambda_31f1c476cd9a7eb96f2f1b165430548d_--operator().c)
 */

void __fastcall lambda_f70b1d3ca5d586fe2915dfa0db6ded94_::_lambda_invoker_cdecl_(_DWORD *a1, HKEY a2)
{
  double v3; // xmm0_8
  __int64 v4; // rcx
  double v5; // xmm0_8
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = lambda_31f1c476cd9a7eb96f2f1b165430548d_::operator()(a1, L"HitTestSpanHimetric_X");
  a1[2] = LODWORD(v3);
  v5 = lambda_31f1c476cd9a7eb96f2f1b165430548d_::operator()(v4, L"HitTestSpanHimetric_Y");
  a1[3] = LODWORD(v5);
  *((_WORD *)a1 + 8) = lambda_2767fecee140e58cebc2d212b2646f2a_::operator()(v6, L"OrientationBiasDegrees", 35LL);
  *((_WORD *)a1 + 9) = lambda_2767fecee140e58cebc2d212b2646f2a_::operator()(v7, L"GestureTimeout", 250LL);
}
