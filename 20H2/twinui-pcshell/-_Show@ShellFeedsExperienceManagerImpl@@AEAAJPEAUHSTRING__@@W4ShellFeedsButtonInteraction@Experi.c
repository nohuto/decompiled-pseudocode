/*
 * XREFs of ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009F2B4
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009C850 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009CCE0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009EC50 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18005CC24 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x18009A374 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009DC30 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F7BC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsExperienceManagerImpl::_Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  PCWSTR StringRawBuffer; // rbx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rcx
  int v9; // ecx
  unsigned int v10; // r8d
  HSTRING Reserved1; // rbx
  HRESULT v12; // eax
  int v13; // ebx
  HRESULT v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING newString; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string1; // [rsp+80h] [rbp-80h]
  HSTRING_HEADER v30; // [rsp+88h] [rbp-78h] BYREF
  WCHAR sourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v8 = FeedsMicrosoftTelemetryProvider::Provider(v7);
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
  {
    v24 = 0x2000000LL;
    LODWORD(v23) = a3;
    v27 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      (int)&dword_1805053BE,
      (__int64)&v27,
      (__int64)&v23,
      (__int64)&v24);
  }
  ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)a1);
  string = 0LL;
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(a3, sourceString, 34LL, 10LL);
  WindowsDeleteString(string);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, sourceString, v10)[1].Reserved.Reserved1;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&FeedsButtonInteraction=", 0x19u, 0x18u);
  v12 = WindowsConcatString(string1, Reserved1, &string);
  v13 = v12;
  if ( v12 >= 0 )
  {
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    v14 = WindowsConcatString(a2, string, &newString);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 659LL;
      goto LABEL_22;
    }
    v17 = 0;
    v18 = a3 - 1;
    if ( !v18 )
    {
      v17 = 1;
      goto LABEL_17;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
      {
        v17 = 4;
LABEL_17:
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 24LL))(
                *(_QWORD *)(a1 + 72),
                *(_QWORD *)(a1 + 104));
        LODWORD(v23) = v13;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 72) + 48LL))(
                  *(_QWORD *)(a1 + 72),
                  newString,
                  v17);
          LODWORD(v23) = v13;
          if ( v13 >= 0 )
          {
            v13 = 0;
            goto LABEL_24;
          }
          LODWORD(v24) = 3;
          ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
            (int *)&v24,
            (int *)&v23);
          v16 = 684LL;
        }
        else
        {
          LODWORD(v24) = 4;
          ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
            (int *)&v24,
            (int *)&v23);
          v16 = 681LL;
        }
        v15 = (unsigned int)v13;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
          (const char *)v15);
LABEL_24:
        WindowsDeleteString(newString);
        newString = 0LL;
        goto LABEL_25;
      }
      v21 = v20 - 2;
      if ( v21 )
      {
        if ( v21 == 2 )
          v17 = 64;
        goto LABEL_17;
      }
    }
    v17 = 2;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x290,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_25:
  WindowsDeleteString(string);
  return (unsigned int)v13;
}
