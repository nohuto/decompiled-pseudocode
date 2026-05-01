/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Foundation::Rect_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_::Invoke @ 0x180335150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18014A004 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Foundation::Rect_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Foundation::Rect___lambda_740be508007a71c2bee4a7e4505d7bc5___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Foundation::Rect_::Invoke(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(int *)(a1 + 32);
  v8 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(a1 + 24))(*(_QWORD *)(a1 + 16) + v4, a2, &v8);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return v6;
}
