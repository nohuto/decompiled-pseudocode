/*
 * XREFs of ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009DE54
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x18009B240 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009BA60 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009D804 (-_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18004F15C (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009C9D0 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F8394 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
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
  unsigned int v13; // ebx
  HRESULT v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  HSTRING newString; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string1; // [rsp+80h] [rbp-80h]
  HSTRING_HEADER v28; // [rsp+88h] [rbp-78h] BYREF
  WCHAR sourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v8 = FeedsMicrosoftTelemetryProvider::Provider(v7);
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
  {
    v24 = 0x2000000LL;
    LODWORD(v23) = a3;
    v25 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      (int)&dword_1805059A6,
      (__int64)&v25,
      (__int64)&v23,
      (__int64)&v24);
  }
  ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)a1);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(a3, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, sourceString, v10)[1].Reserved.Reserved1;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&FeedsButtonInteraction=", 0x19u, 0x18u);
  v12 = WindowsConcatString(string1, Reserved1, &string);
  v13 = v12;
  if ( v12 >= 0 )
  {
    WindowsDeleteString(0LL);
    newString = 0LL;
    v14 = WindowsConcatString(a2, string, &newString);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 716LL;
      goto LABEL_19;
    }
    v16 = 0;
    v17 = a3 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
LABEL_12:
        v16 = 2;
        goto LABEL_15;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 2 )
          goto LABEL_15;
        goto LABEL_12;
      }
      v16 = 4;
    }
    else
    {
      v16 = 1;
    }
LABEL_15:
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 24LL))(
            *(_QWORD *)(a1 + 72),
            *(_QWORD *)(a1 + 104));
    v13 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 72) + 48LL))(
              *(_QWORD *)(a1 + 72),
              newString,
              v16);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v13 = 0;
        goto LABEL_21;
      }
      v15 = 734LL;
    }
    else
    {
      v15 = 733LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_21:
    WindowsDeleteString(newString);
    newString = 0LL;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_22:
  WindowsDeleteString(string);
  return v13;
}
