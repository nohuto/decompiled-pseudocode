/*
 * XREFs of ?OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A6420
 * Callers:
 *     ?OnViewEvent@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800A6320 (-OnViewEvent@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Int.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002FD58 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800A5544 (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F8464 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewEventQueued(
        ShellFeedsDesktopExperienceView *this,
        HSTRING string,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  PCWSTR StringRawBuffer; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rcx
  unsigned int v7; // r8d
  int v8; // ecx
  HSTRING_HEADER *v9; // rax
  unsigned int v10; // r8d
  void (*v11)(void); // rax
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rcx
  const struct _tlgProvider_t *v14; // rcx
  int v15; // ecx
  int v16; // r9d
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  HSTRING v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v21; // [rsp+48h] [rbp-30h] BYREF

  v19 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = FeedsMicrosoftTelemetryProvider::Provider(v5);
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x200000000000LL) )
  {
    v20 = 0x2000000LL;
    v18 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v8,
      (int)&dword_180507B28,
      (__int64)&v18,
      (__int64)&v20);
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)off_180498790, v7);
  if ( Microsoft::WRL::Wrappers::operator==(&v19, (__int64)v9) )
  {
    if ( ShellFeedsDesktopExperienceView::IsViewVisible(this) )
    {
      v11 = *(void (**)(void))(**((_QWORD **)this + 9) + 24LL);
LABEL_12:
      v11();
    }
  }
  else
  {
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)off_180498778, v10);
    if ( Microsoft::WRL::Wrappers::operator==(&v19, (__int64)v12) )
    {
      v14 = FeedsMicrosoftTelemetryProvider::Provider(v13);
      if ( *(_DWORD *)v14 > 5u && tlgKeywordOn((__int64)v14, 0x200000000000LL) )
      {
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v15,
          (unsigned int)&unk_180507BD3,
          0,
          v16,
          (__int64)&v18);
      }
      v11 = *(void (**)(void))(**((_QWORD **)this + 9) + 32LL);
      goto LABEL_12;
    }
  }
  return 0LL;
}
