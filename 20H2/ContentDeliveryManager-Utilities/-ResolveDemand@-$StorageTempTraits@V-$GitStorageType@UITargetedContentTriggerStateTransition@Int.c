/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006471C
 * Callers:
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180062F90 (-GetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wind.c)
 *     ?GetMany@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x1800635C0 (-GetMany@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::ResolveDemand(
        __int64 a1,
        volatile signed __int32 **a2)
{
  int v3; // esi
  volatile signed __int32 *v4; // r10
  volatile signed __int32 *v5; // rdi

  *a2 = 0LL;
  v3 = 0;
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, volatile signed __int32 **))(*(_QWORD *)qword_180199360
                                                                                        + 40LL))(
           qword_180199360,
           *((unsigned int *)v4 + 1),
           &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
           a2);
    if ( v3 >= 0 )
    {
      v5 = *(volatile signed __int32 **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v5 )
      {
        if ( *((_DWORD *)v5 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180199360 + 32LL))(qword_180199360);
        operator delete((void *)v5);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    *a2 = v4;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v3;
}
