/*
 * XREFs of _lambda_bf3c92b221d60276737ef151eb6f13fc_::_lambda_bf3c92b221d60276737ef151eb6f13fc_ @ 0x1802F4584
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x1802F4368 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_bf3c92b221d60276737ef151eb6f13fc_::_lambda_bf3c92b221d60276737ef151eb6f13fc_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v3; // rcx

  *a1 = *a2;
  v3 = a1 + 1;
  *v3 = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  return a1;
}
