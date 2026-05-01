/*
 * XREFs of ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CAE40
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A5DB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1802A5DB0.c)
 *     ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x1802C9928 (--$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerIntero.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___ @ 0x1802CA2A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___.c)
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_ @ 0x1802CA3A0 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CFE48 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

__int64 __fastcall UAPViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  volatile int *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  HSTRING v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v17; // [rsp+90h] [rbp+28h] BYREF
  int v18; // [rsp+98h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+A0h] [rbp+38h] BYREF
  PCWSTR v20; // [rsp+A8h] [rbp+40h] BYREF

  v18 = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 152), 0LL);
  ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
    (__int64 *)&StringRawBuffer,
    (int *)(a1 + 148),
    &v18);
  *(_DWORD *)(a1 + 560) = a2;
  if ( a2 || (int)CoreIsWindowServiceSupported(*(_QWORD *)(a1 + 272), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
    return ViewWrapperBase::NavigateInternal(a1, a2);
  ViewWrapperBase::NavigateInternal(a1, 3LL);
  v5 = a1 - 8;
  v6 = a1 - 8;
  v17 = a1 - 8;
  if ( a1 != 8 )
  {
    v7 = *(_QWORD *)(v5 + 560);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 560), v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v4);
LABEL_10:
    v6 = v17;
  }
  v9 = *(HSTRING *)(a1 + 152);
  v15 = *(_QWORD *)(a1 + 272);
  v20 = WindowsGetStringRawBuffer(v9, 0LL);
  v10 = lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_(
          v16,
          (volatile int *)&v17,
          a1 - 8,
          &v15,
          &v20);
  result = Windows::Internal::ComTaskPool::QueueTask__lambda_1cf7f7afac08fe2873a8a6306d8dbd84___(
             v12,
             v11,
             *(_DWORD *)(a1 + 184),
             v10);
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v14);
  }
  if ( v6 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v6);
  return result;
}
