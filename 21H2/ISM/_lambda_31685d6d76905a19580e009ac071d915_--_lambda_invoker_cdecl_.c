/*
 * XREFs of _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x180088550
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180068440 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(_DWORD *a1)
{
  __int64 v1; // rdx

  switch ( *a1 )
  {
    case 4:
      v1 = 352LL;
      break;
    case 0x40:
      operator delete(a1);
      return;
    case 0x80:
      v1 = 2032LL;
      break;
    default:
      wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)a1);
  }
  operator delete(a1, (const struct std::nothrow_t *)v1);
}
