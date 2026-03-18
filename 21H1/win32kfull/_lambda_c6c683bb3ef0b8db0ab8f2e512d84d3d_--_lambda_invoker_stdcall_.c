/*
 * XREFs of _lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_::_lambda_invoker_stdcall_ @ 0xEF800
 * Callers:
 *     <none>
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

unsigned int __stdcall lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_::_lambda_invoker_stdcall_(int a1)
{
  unsigned int result; // eax

  result = ValidateHwnd(a1);
  if ( result )
    return SetOrClrWF(0, result, 0x210u, 1);
  return result;
}
