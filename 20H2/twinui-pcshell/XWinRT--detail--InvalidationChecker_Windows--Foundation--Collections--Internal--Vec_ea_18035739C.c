/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______XWinRT::IntVersionTag_::Do__lambda_e2e777e4fbd7f65cfe0d339411142942___lambda_40f4ad2fe17a2391f03872e9c5d8ef2e___ @ 0x18035739C
 * Callers:
 *     ?IndexOf@?$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@PEAIPEAE@Z @ 0x18035D9C0 (-IndexOf@-$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$Vector.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion______XWinRT::IntVersionTag_::Do__lambda_e2e777e4fbd7f65cfe0d339411142942___lambda_40f4ad2fe17a2391f03872e9c5d8ef2e___(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[5] + 72LL))(
           (*a3)[5],
           *a3[1],
           *a3[2],
           *a3[3]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***(_DWORD ***)a4 = 0;
        ***(_BYTE ***)(a4 + 8) = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
