/*
 * XREFs of _lambda_1b9955d17458c359845ab36b6c965754_::operator() @ 0x1400211C0
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______XWinRT::IntVersionTag_::Do__lambda_1b9955d17458c359845ab36b6c965754___lambda_fdd3247f1e4a88361f0e19a4b3c49020___ @ 0x14001F304 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_Windows--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E5C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1b9955d17458c359845ab36b6c965754_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_af4c50bf_f8e2_5d7e_a04c_d1dae1b23c36,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return (unsigned int)v3;
}
