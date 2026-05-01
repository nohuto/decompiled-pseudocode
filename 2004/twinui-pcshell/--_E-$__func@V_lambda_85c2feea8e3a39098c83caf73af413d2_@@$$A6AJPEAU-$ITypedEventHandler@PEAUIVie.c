/*
 * XREFs of ??_E?$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1800AB170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ @ 0x1800AB13C (--1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_85c2feea8e3a39098c83caf73af413d2_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  _lambda_85c2feea8e3a39098c83caf73af413d2_::~_lambda_85c2feea8e3a39098c83caf73af413d2_((_lambda_85c2feea8e3a39098c83caf73af413d2_ *)(a1 + 1));
  *a1 = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
