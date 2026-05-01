/*
 * XREFs of _lambda_195736d014a597a101f4034c78cde5c1_::operator() @ 0x1800A88FC
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_195736d014a597a101f4034c78cde5c1__&_::Run @ 0x1800A8F90 (wil--details--functor_wrapper_void__lambda_195736d014a597a101f4034c78cde5c1__-_--Run.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18042F6F8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180431DDC (-Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_195736d014a597a101f4034c78cde5c1_::operator()(__int64 a1)
{
  PCWSTR StringRawBuffer; // rdi
  const WCHAR *v3; // rax
  HRESULT String; // eax
  PCNZWCH *v5; // rbx
  const struct _tlgProvider_t *v6; // rcx
  int v7; // ecx
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h] BYREF
  PCNZWCH sourceString[2]; // [rsp+58h] [rbp-28h] BYREF
  UINT32 length; // [rsp+68h] [rbp-18h]
  unsigned __int64 v14; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  (*(void (__fastcall **)(_QWORD, PCNZWCH *, PCWSTR))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 256LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 256LL),
    sourceString,
    StringRawBuffer);
  v3 = (const WCHAR *)sourceString;
  if ( v14 >= 8 )
    v3 = sourceString[0];
  String = WindowsCreateString(v3, length, **(HSTRING ***)(a1 + 16));
  if ( String < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      152LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String);
    __debugbreak();
  }
  v5 = sourceString;
  if ( v14 >= 8 )
    v5 = (PCNZWCH *)sourceString[0];
  v6 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    v9 = 0x2000000LL;
    v10 = (__int64)v5;
    v11 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v7,
      (int)&dword_1804FDBD7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  return std::wstring::_Tidy_deallocate(sourceString);
}
