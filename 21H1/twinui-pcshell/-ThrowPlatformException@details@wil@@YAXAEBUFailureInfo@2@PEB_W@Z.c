/*
 * XREFs of ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x1802CA7F0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802CA1AC (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn wil::details::ThrowPlatformException(
        wil::details *this,
        const wchar_t *a2,
        const wchar_t *a3)
{
  __int64 pExceptionObject; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v5; // [rsp+40h] [rbp+18h]
  __int64 Exception; // [rsp+48h] [rbp+20h]

  v5 = 0LL;
  v5 = Platform::String::String((HSTRING)this, a2);
  Exception = Platform::Exception::CreateException(*((unsigned int *)this + 1), v5);
  pExceptionObject = __abi_winrt_ptr_ctor(Exception);
  throw (Platform::Exception **)&pExceptionObject;
}
