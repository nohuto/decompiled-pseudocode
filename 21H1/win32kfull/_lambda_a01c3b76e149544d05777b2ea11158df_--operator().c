/*
 * XREFs of _lambda_a01c3b76e149544d05777b2ea11158df_::operator() @ 0xEF9F0
 * Callers:
 *     _lambda_a01c3b76e149544d05777b2ea11158df_::_lambda_invoker_stdcall_ @ 0xEF7F4 (_lambda_a01c3b76e149544d05777b2ea11158df_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 */

bool __stdcall lambda_a01c3b76e149544d05777b2ea11158df_::operator()(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // edi

  *a2 = 0;
  a2[1] = 0;
  if ( _gpqForeground == *(_DWORD *)(a1[2] + 236) )
  {
    v2 = *(_DWORD *)(a1[5] + 148);
    if ( v2 != 2 && v2 != 16 )
    {
      v3 = *(_DWORD **)(a1[3] + 184);
      if ( IsWindowActivateable(v3) )
      {
        *a2 = v3;
        a2[1] = 5;
      }
    }
  }
  return *a2 != 0;
}
