/*
 * XREFs of _WCSToMBEx@24 @ 0x1B73F3
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 * Callees:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 */

ULONG __fastcall WCSToMBEx(unsigned __int16 a1, WCHAR *a2, int a3, CHAR **a4, int MaxBytesInMultiByteString, int a6)
{
  int v7; // ecx
  WCHAR *v8; // ecx
  __int16 v9; // ax
  ULONG v10; // ecx
  ULONG v11; // eax
  NTSTATUS v13; // eax
  ULONG BytesInMultiByteString; // [esp+Ch] [ebp-4h] BYREF

  BytesInMultiByteString = 0;
  if ( !MaxBytesInMultiByteString )
    return 0;
  v7 = a3;
  if ( !a3 || !a2 )
    return 0;
  if ( a3 == -1 )
  {
    v8 = a2;
    do
      v9 = *v8++;
    while ( v9 != (_WORD)BytesInMultiByteString );
    v7 = v8 - (a2 + 1) + 1;
  }
  else if ( a3 < -1 )
  {
    return 0;
  }
  if ( MaxBytesInMultiByteString >= 0 )
  {
    v10 = 2 * v7;
    if ( a1 != _NlsAnsiCodePage && a1 )
    {
      v11 = ConvertToAndFromWideChar(a1, a2, v10, *a4, MaxBytesInMultiByteString, 0);
      return v11 != -1 ? v11 : 0;
    }
    v13 = RtlUnicodeToMultiByteN(*a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, v10);
    if ( v13 >= 0 || v13 == -2147483643 )
      return BytesInMultiByteString;
  }
  return 0;
}
