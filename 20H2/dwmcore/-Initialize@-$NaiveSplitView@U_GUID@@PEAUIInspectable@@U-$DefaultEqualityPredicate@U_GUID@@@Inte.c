/*
 * XREFs of ?Initialize@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@@Z @ 0x1802433A0
 * Callers:
 *     ?Split@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@PEAPEAU6345@1AEBU?$DefaultEqualityPredicate@U_GUID@@@2345@@Z @ 0x180244F1C (-Split@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Initialize(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall **v2)(_QWORD *, GUID *, __int64 *); // rax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edi
  int v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF

  v2 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2;
  v14 = 0LL;
  v5 = ((__int64 (__fastcall *)(_QWORD *, int *))v2[7])(a2, &v12);
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2)(
           a2,
           &GUID_f3b20528_e3b3_5331_b2d0_0c2623aee785,
           &v13);
    if ( v5 == -2147467262 )
    {
      v5 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
      RoTransformError(2147500034LL, 2147549183LL, 0LL);
    }
    if ( v5 >= 0 )
    {
      v6 = v13;
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      v5 = v7(v6, &v14);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( v5 >= 0 )
    {
      v8 = v14;
      v9 = *(_QWORD *)(a1 + 96);
      v10 = v12;
      if ( v9 != v14 )
      {
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v9 = *(_QWORD *)(a1 + 96);
        }
        v13 = v9;
        *(_QWORD *)(a1 + 96) = v8;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      }
      *(_DWORD *)(a1 + 104) = v10;
      v5 = 0;
      *(_BYTE *)(a1 + 109) = 1;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)v5;
}
