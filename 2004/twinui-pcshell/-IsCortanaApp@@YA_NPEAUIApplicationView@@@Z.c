/*
 * XREFs of ?IsCortanaApp@@YA_NPEAUIApplicationView@@@Z @ 0x1803E19AC
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803E04F4 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1800669F0 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008E202 (WINRT_WindowsGetStringRawBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsCortanaApp(struct IApplicationView *a1)
{
  int (__fastcall *v2)(struct IApplicationView *, PCWSTR, int *); // rsi
  HSTRING *CortanaAumid; // rax
  bool v4; // bl
  PCWSTR StringRawBuffer; // rax
  bool result; // al
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, int *))(*(_QWORD *)a1 + 152LL);
  try
  {
    CortanaAumid = (HSTRING *)CortanaExperienceHelpers::TryGetCortanaAumid(&v8);
    v4 = 1;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*CortanaAumid, 0LL);
    if ( v2(a1, StringRawBuffer, &v7) < 0 || !v7 )
      v4 = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = v4;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
