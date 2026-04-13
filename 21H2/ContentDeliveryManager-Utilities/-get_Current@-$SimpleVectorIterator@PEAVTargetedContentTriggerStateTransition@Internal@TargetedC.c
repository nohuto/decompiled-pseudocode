/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18005FAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  _DWORD *v4; // rsi
  int v5; // eax
  _QWORD *v6; // rbx

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_DWORD **)(a1 + 64);
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4 + 48LL))(
           *(_QWORD *)(a1 + 64),
           *(unsigned int *)(a1 + 72),
           a2);
    v3 = v5;
    if ( *(_DWORD *)(a1 + 84) != v4[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = a2;
        if ( *a2 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
          *a2 = 0LL;
          v6 = a2;
        }
        *v6 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
