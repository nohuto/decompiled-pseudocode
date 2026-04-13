/*
 * XREFs of ?put_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x1800604A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Clear@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18005B3B0 (-Clear@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppI.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x180062770 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::put_StateTransitions(
        __int64 a1,
        __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::Clear(*(_QWORD *)(a1 + 184));
  if ( v4 < 0 )
  {
    v5 = 255LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 56))(a2, &v15);
  if ( v4 < 0 )
  {
    v5 = 257LL;
    goto LABEL_3;
  }
  v7 = 0;
  if ( v15 )
  {
    while ( 1 )
    {
      v8 = *a2;
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 48))(a2, v7, &v16);
      v4 = v9;
      if ( v9 < 0 )
        break;
      LOBYTE(v10) = 1;
      v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::InsertAtInternal(
             *(_QWORD *)(a1 + 184),
             0LL,
             v16,
             v10);
      v4 = v9;
      if ( v9 < 0 )
      {
        v12 = 262LL;
        goto LABEL_16;
      }
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( ++v7 >= v15 )
        return 0LL;
    }
    v12 = 261LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v9);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return (unsigned int)v4;
  }
  return 0LL;
}
