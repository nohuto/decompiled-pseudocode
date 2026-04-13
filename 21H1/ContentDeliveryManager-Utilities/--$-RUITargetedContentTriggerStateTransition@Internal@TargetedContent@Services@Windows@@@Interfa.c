/*
 * XREFs of ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x1800634F8
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180062B50 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Ser.c)
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@IPEAU62785@PEAIPEAE@Z @ 0x180062E40 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Target_ea_180062E40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        bool *a3)
{
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  if ( a1 && a2 )
  {
    v11 = 0LL;
    v10 = 0LL;
    v5 = (**a1)(a1, &GUID_00000000_0000_0000_c000_000000000046, &v11);
    if ( v5 < 0 )
      goto LABEL_8;
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v5 = (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v10);
    if ( v5 < 0 )
    {
LABEL_8:
      v7 = v10;
    }
    else
    {
      v7 = v10;
      *a3 = v11 == v10;
    }
    if ( v7 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    *a3 = a1 == a2;
  }
  return (unsigned int)v5;
}
