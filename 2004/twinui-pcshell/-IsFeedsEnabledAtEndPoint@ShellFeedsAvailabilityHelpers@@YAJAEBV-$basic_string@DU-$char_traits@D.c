/*
 * XREFs of ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1800ED0BC
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800E0E78 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18021D9B4 (--$GetActivationFactory@V-$ComPtr@UIJsonObjectStatics@Json@Data@Windows@@@WRL@Microsoft@@@Founda.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x18045FC10 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint(
        const CHAR *lpMultiByteStr,
        _BYTE *a2,
        _BYTE *a3)
{
  LPCCH v5; // rbx
  __int64 v6; // rax
  const CHAR *v7; // r8
  int v8; // eax
  int cchWideChar; // edi
  unsigned int v10; // esi
  WCHAR *lpWideCharStr; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 *, char *); // rdi
  unsigned int v17; // r8d
  const WCHAR *v18; // rcx
  HSTRING_HEADER *v19; // rax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, PVOID, __int64 *); // rdi
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  __int64 v25; // rbx
  char v26; // al
  int (__fastcall *v27)(__int64, PVOID, const WCHAR **); // rdi
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  char v30; // al
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  const struct _tlgProvider_t *v34; // rcx
  int v35; // ecx
  int v36; // r9d
  char v37; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-58h] BYREF
  int v39; // [rsp+34h] [rbp-55h] BYREF
  const WCHAR *v40; // [rsp+38h] [rbp-51h] BYREF
  __int64 v41; // [rsp+40h] [rbp-49h] BYREF
  __int64 v42; // [rsp+48h] [rbp-41h] BYREF
  __int64 v43; // [rsp+50h] [rbp-39h] BYREF
  __int64 v44; // [rsp+58h] [rbp-31h] BYREF
  LPWSTR v45[2]; // [rsp+60h] [rbp-29h] BYREF
  __m128i si128; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-9h] BYREF
  __int64 v48; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = lpMultiByteStr;
  v39 = 0;
  *a2 = 0;
  v6 = *((_QWORD *)lpMultiByteStr + 2);
  if ( v6 )
  {
    v7 = lpMultiByteStr;
    if ( *((_QWORD *)lpMultiByteStr + 3) >= 0x10uLL )
      v7 = *(const CHAR **)lpMultiByteStr;
    v8 = MultiByteToWideChar(0xFDE9u, 0, v7, v6 + 1, 0LL, 0);
    cchWideChar = v8;
    if ( !v8 )
    {
      v10 = 1;
      *a3 = 1;
      return v10;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v45[0]) = 0;
    std::wstring::resize(v45, v8);
    lpWideCharStr = (WCHAR *)v45;
    if ( si128.m128i_i64[1] >= 8uLL )
      lpWideCharStr = v45[0];
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(LPCCH *)v5;
    if ( !MultiByteToWideChar(0xFDE9u, 0, v5, -1, lpWideCharStr, cchWideChar) )
    {
      v10 = 1;
      *a3 = 1;
LABEL_34:
      std::wstring::_Tidy_deallocate(v45);
      return v10;
    }
    v43 = 0LL;
    v42 = 0LL;
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v13 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObjectStatics>>(
            v48,
            &v43);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 428LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      goto LABEL_34;
    }
    v15 = v43;
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *, char *))(*(_QWORD *)v43 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v18 = (const WCHAR *)v45;
    if ( si128.m128i_i64[1] >= 8uLL )
      v18 = v45[0];
    v40 = v18;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v40, v17);
    v13 = v16(v15, v19[1].Reserved.Reserved1, &v42, &v37);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = 432LL;
      goto LABEL_19;
    }
    if ( !v37 || (v20 = v42) == 0 )
    {
      v10 = 1;
      *a3 = 1;
      goto LABEL_33;
    }
    v41 = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v42 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180498808,
            v22);
    v39 = 1;
    v24 = v21(v20, v23[1].Reserved.Reserved1, &v41);
    v25 = v41;
    if ( v24 < 0 || (v26 = 1, !v41) )
      v26 = 0;
    if ( v26 )
    {
      v40 = 0LL;
      v27 = *(int (__fastcall **)(__int64, PVOID, const WCHAR **))(*(_QWORD *)v41 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)off_180498810,
              v28);
      v39 = 2;
      if ( v27(v25, v29[1].Reserved.Reserved1, &v40) < 0 || (v30 = 1, !v40) )
        v30 = 0;
      if ( v30 )
      {
        v39 = 3;
        v31 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v40 + 48LL))(v40, &v39);
        v33 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C4,
            (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
            (const char *)(unsigned int)v31);
          v10 = v33;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
          goto LABEL_33;
        }
        if ( v39 == 1 )
        {
          v34 = FeedsMicrosoftTelemetryProvider::Provider(v32);
          if ( *(_DWORD *)v34 > 5u )
          {
            if ( tlgKeywordOn((__int64)v34, 0x200000000000LL) )
            {
              v44 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
                v35,
                (unsigned int)&unk_180527478,
                0,
                v36,
                (__int64)&v44);
            }
          }
          (*(void (__fastcall **)(const WCHAR *, _BYTE *))(*(_QWORD *)v40 + 80LL))(v40, v38);
          *a2 = v38[0];
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    std::wstring::_Tidy_deallocate(v45);
  }
  return 0LL;
}
