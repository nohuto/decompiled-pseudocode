/*
 * XREFs of ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800BD344
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800BE508 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800BE5B0 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800BE658 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     WindowsDeleteStringBuffer_0 @ 0x18003CF4B (WindowsDeleteStringBuffer_0.c)
 *     WindowsPreallocateStringBuffer_0 @ 0x18003CF57 (WindowsPreallocateStringBuffer_0.c)
 *     MultiByteToWideChar_0 @ 0x18003DC61 (MultiByteToWideChar_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD0AC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x1800BE708 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::to_hstring<char const *,void>(_QWORD *a1, const CHAR **a2)
{
  const CHAR *v3; // rsi
  __int64 v4; // rdi
  UINT32 v5; // eax
  int cchWideChar; // ebp
  HRESULT v7; // eax
  WCHAR *charBuffer[2]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    *(_OWORD *)charBuffer = 0LL;
    v7 = WindowsPreallocateStringBuffer_0(v5, charBuffer, (HSTRING_BUFFER *)&charBuffer[1]);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, charBuffer[0], cchWideChar);
    winrt::impl::hstring_builder::to_hstring(charBuffer, a1);
    if ( charBuffer[1] )
      WindowsDeleteStringBuffer_0((HSTRING_BUFFER)charBuffer[1]);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
