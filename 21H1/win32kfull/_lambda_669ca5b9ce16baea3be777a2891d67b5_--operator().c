/*
 * XREFs of _lambda_669ca5b9ce16baea3be777a2891d67b5_::operator() @ 0xEF9A2
 * Callers:
 *     _lambda_669ca5b9ce16baea3be777a2891d67b5_::_lambda_invoker_stdcall_ @ 0xEF7E8 (_lambda_669ca5b9ce16baea3be777a2891d67b5_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 */

bool __stdcall lambda_669ca5b9ce16baea3be777a2891d67b5_::operator()(int a1, _DWORD *a2)
{
  char v2; // al

  *a2 = 0;
  a2[1] = 0;
  v2 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0;
  if ( (v2 == (char)0x80 || v2 == -64) && IsWindowActivateable(*(_DWORD **)(a1 + 64)) )
  {
    *a2 = *(_DWORD *)(a1 + 64);
    a2[1] = 2;
  }
  return *a2 != 0;
}
