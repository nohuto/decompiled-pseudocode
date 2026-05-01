/*
 * XREFs of ?__clone@?$__func@V_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x180239E80
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

signed __int64 __fastcall wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::__clone(
        __int64 a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  signed __int64 v6; // rtt
  __int64 v7; // rdx
  signed __int64 v8; // rtt

  result = (signed __int64)&wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  v3 = a2;
  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  v4 = a1;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v5;
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 192);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v6 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 192), result + 1, result);
        if ( v6 != result )
          continue;
      }
      goto LABEL_8;
    }
    result = Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
               (Microsoft::WRL::Details *)(2 * result + 16),
               (volatile int *)a2);
  }
LABEL_8:
  v7 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v3 + 16) = v7;
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 64);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v8 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), result + 1, result);
        if ( v8 != result )
          continue;
      }
      return result;
    }
    return Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
             (Microsoft::WRL::Details *)(2 * result + 16),
             (volatile int *)v7);
  }
  return result;
}
