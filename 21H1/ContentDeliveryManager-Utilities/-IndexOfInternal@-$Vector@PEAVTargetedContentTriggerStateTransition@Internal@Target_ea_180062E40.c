/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@IPEAU62785@PEAIPEAE@Z @ 0x180062E40
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180061AF0 (-IndexOf@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedConten_ea_180061AF0.c)
 * Callees:
 *     ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x1800634F8 (--$-RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Interfa.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::IndexOfInternal(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  char v11; // cl
  char v12; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)result >= 0 )
    {
      v12 = 0;
      if ( a4 == *a2 )
      {
        v11 = 1;
        result = 0LL;
      }
      else
      {
        result = XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
                   a4,
                   *a2,
                   &v12);
        v11 = v12;
      }
      if ( (int)result >= 0 && v11 )
      {
        *a6 = 1;
        *a5 = v7;
        return result;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return result;
    }
  }
  return result;
}
