/*
 * XREFs of _lambda_57044c20c66cf8294c87be4c07a9b9b5_::operator() @ 0x18036BEC4
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality_KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption____XWinRT::IntVersionTag_::Do__lambda_57044c20c66cf8294c87be4c07a9b9b5___lambda_123df96a4f524ef8dd161fadb1d10211___ @ 0x18036BB10 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18036BB10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_57044c20c66cf8294c87be4c07a9b9b5_::operator()(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // r11
  __int128 v3; // xmm1
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 (__fastcall *v6)(__int64 *, _OWORD *, _QWORD, _QWORD); // r10
  _QWORD *v7; // rax
  _OWORD v9[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 **)(*(_QWORD *)a1 + 40LL);
  v3 = *(_OWORD *)(v1 + 16);
  v9[0] = *(_OWORD *)v1;
  v4 = *v2;
  v5 = *(_OWORD *)(v1 + 32);
  v9[1] = v3;
  v6 = *(__int64 (__fastcall **)(__int64 *, _OWORD *, _QWORD, _QWORD))(v4 + 72);
  v7 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)&v3 = *(_QWORD *)(v1 + 48);
  v9[2] = v5;
  v10 = v3;
  return v6(v2, v9, **(_QWORD **)(a1 + 16), *v7);
}
