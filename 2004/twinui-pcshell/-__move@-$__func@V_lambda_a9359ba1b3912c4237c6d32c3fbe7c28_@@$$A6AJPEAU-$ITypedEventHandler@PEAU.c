/*
 * XREFs of ?__move@?$__func@V_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x18025BD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  void **result; // rax
  void ***v3; // rcx
  void ***v4; // rdx
  void ***v5; // rdx
  void ***v6; // rcx

  result = &wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  *a2 = &wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  v3 = (void ***)(a1 + 8);
  v4 = (void ***)(a2 + 1);
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  v5 = v4 + 1;
  v6 = v3 + 1;
  *v5 = 0LL;
  if ( v5 != v6 )
  {
    result = *v6;
    *v5 = *v6;
    *v6 = 0LL;
  }
  return result;
}
