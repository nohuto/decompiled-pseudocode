/*
 * XREFs of ?GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x180349CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180032400 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StubImmersiveApplication::GetApplicationId(StubImmersiveApplication *this, unsigned __int16 **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
         (__int64 *)this + 2,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"internal\\shell\\private\\inc\\StubImmersiveApplication.h",
      (const char *)(unsigned int)v2);
  return v3;
}
