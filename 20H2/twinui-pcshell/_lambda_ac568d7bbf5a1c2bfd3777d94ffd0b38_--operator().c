/*
 * XREFs of _lambda_ac568d7bbf5a1c2bfd3777d94ffd0b38_::operator() @ 0x180453638
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_____0_1_0____XWinRT::IntVersionTag_::Do__lambda_ac568d7bbf5a1c2bfd3777d94ffd0b38___lambda_0489ac8053023fba80b5630ce8a2aa46___ @ 0x18045252C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18045252C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ac568d7bbf5a1c2bfd3777d94ffd0b38_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
