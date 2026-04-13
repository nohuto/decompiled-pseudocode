/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V123@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@5Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@2@PEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18006DEF0
 * Callers:
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x18006C8C0 (-GetAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U-.c)
 *     ?GetMany@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAI@Z @ 0x18006CEF0 (-GetMany@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::ResolveDemand(
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
           &GUID_3b431df6_5dbc_4950_b51f_e8313d975159,
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
