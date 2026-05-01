/*
 * XREFs of sub_1800230C0 @ 0x1800230C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800230C0(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  HRESULT v4; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.Foundation.Diagnostics.AsyncCausalityTracer",
         0x33u,
         &hstringHeader,
         &string);
  if ( v4 < 0 )
  {
    sub_180011F90(v4);
    JUMPOUT(0x180023141LL);
  }
  LOBYTE(v3) = (int)RoGetActivationFactory(string, &unk_180050A50, &qword_18005AD70) >= 0;
  return v3;
}
