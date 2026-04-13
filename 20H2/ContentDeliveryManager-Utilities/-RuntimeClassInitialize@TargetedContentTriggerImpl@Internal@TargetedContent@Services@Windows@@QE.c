/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x1800617AC
 * Callers:
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062810 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028BE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180028BE0.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x180064894 (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING *v7; // rdi
  HRESULT v11; // eax
  wil::details::in1diag3 *v12; // rcx
  HRESULT v13; // eax
  wil::details::in1diag3 *v14; // rcx
  HRESULT v15; // eax
  wil::details::in1diag3 *v16; // rcx
  HRESULT v17; // eax
  wil::details::in1diag3 *v18; // rcx
  HRESULT v19; // eax
  wil::details::in1diag3 *v20; // rcx
  volatile signed __int64 *v21; // rcx
  void *v22; // rax
  const char *v23; // r9
  __int64 v24; // rcx
  wil::details::in1diag3 *v25; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 64) = a2;
      v7 = (HSTRING *)(a1 + 120);
      v11 = 0;
      if ( !a3 || a3 != *v7 )
      {
        WindowsDeleteString(*v7);
        *v7 = 0LL;
        v11 = WindowsDuplicateString(a3, (HSTRING *)(a1 + 120));
      }
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v7 = (HSTRING *)(a1 + 128);
        v13 = 0;
        if ( !a4 || a4 != *v7 )
        {
          WindowsDeleteString(*v7);
          *v7 = 0LL;
          v13 = WindowsDuplicateString(a4, (HSTRING *)(a1 + 128));
        }
        v14 = retaddr;
        if ( v13 >= 0 )
        {
          v7 = (HSTRING *)(a1 + 96);
          v15 = 0;
          if ( !string || string != *v7 )
          {
            WindowsDeleteString(*v7);
            *v7 = 0LL;
            v15 = WindowsDuplicateString(string, (HSTRING *)(a1 + 96));
          }
          v16 = retaddr;
          if ( v15 >= 0 )
          {
            v7 = (HSTRING *)(a1 + 72);
            v17 = 0;
            if ( !a6 || a6 != *v7 )
            {
              WindowsDeleteString(*v7);
              *v7 = 0LL;
              v17 = WindowsDuplicateString(a6, (HSTRING *)(a1 + 72));
            }
            v18 = retaddr;
            if ( v17 >= 0 )
            {
              v7 = (HSTRING *)(a1 + 112);
              v19 = 0;
              if ( !a7 || a7 != *v7 )
              {
                WindowsDeleteString(*v7);
                *v7 = 0LL;
                v19 = WindowsDuplicateString(a7, (HSTRING *)(a1 + 112));
              }
              v20 = retaddr;
              if ( v19 >= 0 )
              {
                v21 = *(volatile signed __int64 **)(a1 + 184);
                if ( v21 )
                {
                  *(_QWORD *)(a1 + 184) = 0LL;
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v21);
                }
                *(_QWORD *)(a1 + 184) = 0LL;
                LODWORD(v7) = 0;
                v22 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
                v24 = 0LL;
                if ( !v22
                  || (v24 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>(v22)) == 0 )
                {
                  LODWORD(v7) = -2147024882;
                }
                if ( (int)v7 >= 0 )
                {
                  *(_QWORD *)(a1 + 184) = v24;
                  v24 = 0LL;
                }
                if ( v24 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                v25 = retaddr;
                if ( (int)v7 >= 0 )
                  return 0LL;
LABEL_40:
                wil::details::in1diag3::Throw_Hr(
                  v25,
                  (void *)0x24,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                  (const char *)(unsigned int)v7);
                JUMPOUT(0x180061A68LL);
              }
LABEL_39:
              wil::details::in1diag3::Throw_Hr(
                v20,
                (void *)0x23,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                (const char *)(unsigned int)v19);
              goto LABEL_40;
            }
LABEL_38:
            wil::details::in1diag3::Throw_Hr(
              v18,
              (void *)0x22,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
              (const char *)(unsigned int)v17);
            goto LABEL_39;
          }
LABEL_37:
          wil::details::in1diag3::Throw_Hr(
            v16,
            (void *)0x21,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_38;
        }
LABEL_36:
        wil::details::in1diag3::Throw_Hr(
          v14,
          (void *)0x20,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_37;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL);
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_36;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           v23);
  }
  return result;
}
