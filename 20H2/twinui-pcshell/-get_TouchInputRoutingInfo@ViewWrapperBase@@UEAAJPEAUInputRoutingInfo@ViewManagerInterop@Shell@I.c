/*
 * XREFs of ?get_TouchInputRoutingInfo@ViewWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008AEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_TouchInputRoutingInfo(
        ViewWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  result = 2147500033LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  return result;
}
