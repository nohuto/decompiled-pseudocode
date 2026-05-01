/*
 * XREFs of ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x1802CA22C
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1802CA3C0 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     WindowsDeleteString_0 @ 0x18008DF82 (WindowsDeleteString_0.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802CA1AC (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x1802CAA68 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall wil::details::GetPlatformExceptionMessage(__int64 a1)
{
  __int64 v1; // rdi
  HSTRING v2; // rbx
  HSTRING v3; // rsi
  const wchar_t *v4; // rbx
  const wchar_t *StringRawBuffer; // rax
  HSTRING v6; // rcx
  __int64 v7; // rdi
  HSTRING v9; // [rsp+38h] [rbp+10h]

  v1 = *(_QWORD *)(a1 - 8);
  v2 = (HSTRING)Platform::Exception::Message::get();
  v3 = (HSTRING)__abi_winrt_ptrto_string_ctor(v2);
  WindowsDeleteString_0(v2);
  v4 = *(const wchar_t **)(v1 + 8);
  if ( v3 )
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v3, 0LL);
  else
    StringRawBuffer = 0LL;
  if ( v4 && *v4 && StringRawBuffer && !wcsstr(StringRawBuffer, v4) )
  {
    v9 = Platform::String::String(v6, v4);
    v7 = __abi_winrt_ptrto_string_ctor(v9);
    WindowsDeleteString_0(v9);
  }
  else
  {
    v7 = __abi_winrt_ptrto_string_ctor(v3);
  }
  WindowsDeleteString_0(v3);
  return v7;
}
