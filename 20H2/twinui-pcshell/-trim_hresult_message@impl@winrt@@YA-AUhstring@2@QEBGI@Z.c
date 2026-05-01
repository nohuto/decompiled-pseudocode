/*
 * XREFs of ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1801F8218
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1801F80B0 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E4C1 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::impl::trim_hresult_message(HSTRING *a1, const WCHAR *a2, UINT32 a3)
{
  UINT32 v3; // ebx
  const WCHAR *i; // rdi
  HRESULT v7; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  for ( i = &a2[a3 - 1]; v3; --v3 )
  {
    if ( !(unsigned int)_o_iswspace(*i) )
      break;
    --i;
  }
  string = 0LL;
  v7 = WINRT_WindowsCreateString(a2, v3, &string);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a1 = string;
  return a1;
}
