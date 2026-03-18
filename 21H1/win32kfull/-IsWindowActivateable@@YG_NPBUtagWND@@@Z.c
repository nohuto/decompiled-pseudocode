/*
 * XREFs of ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2
 * Callers:
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0xA948A (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_ @ 0xEF826 (_lambda_fd3250b01a93d986fc52efb651841859_--_lambda_invoker_stdcall_.c)
 *     _lambda_01ca0a41559b7f40c231bae09045841d_::operator() @ 0xEF870 (_lambda_01ca0a41559b7f40c231bae09045841d_--operator().c)
 *     _lambda_32cb82285d9d5665fcc6dd155d313a03_::operator() @ 0xEF8DE (_lambda_32cb82285d9d5665fcc6dd155d313a03_--operator().c)
 *     _lambda_669ca5b9ce16baea3be777a2891d67b5_::operator() @ 0xEF9A2 (_lambda_669ca5b9ce16baea3be777a2891d67b5_--operator().c)
 *     _lambda_a01c3b76e149544d05777b2ea11158df_::operator() @ 0xEF9F0 (_lambda_a01c3b76e149544d05777b2ea11158df_--operator().c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _IsWindowEffectivelyCloaked@4 @ 0xAB818 (_IsWindowEffectivelyCloaked@4.c)
 */

bool __thiscall IsWindowActivateable(_DWORD *this)
{
  bool result; // al
  char v2; // al

  result = 0;
  if ( this )
  {
    v2 = *(_BYTE *)(this[5] + 23);
    if ( (v2 & 0x10) != 0 && (v2 & 8) == 0 && !IsWindowEffectivelyCloaked(this) )
      return 1;
  }
  return result;
}
