/*
 * XREFs of WCSToMBEx @ 0x1C00E5C48
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0078ADC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnOUTSTRING @ 0x1C00E5030 (SfnOUTSTRING.c)
 *     SfnIMECONTROL @ 0x1C0229130 (SfnIMECONTROL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00EE8B4 (ConvertToAndFromWideChar.c)
 */

__int64 __fastcall WCSToMBEx(
        unsigned __int16 a1,
        const WCHAR *a2,
        int a3,
        PCHAR *a4,
        int MaxBytesInMultiByteString,
        ULONG BytesInMultiByteString)
{
  int v6; // eax
  __int64 BytesInUnicodeString; // r8
  NTSTATUS v8; // eax
  __int64 result; // rax
  __int64 v10; // rax

  BytesInMultiByteString = 0;
  v6 = a3;
  if ( !MaxBytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v6 = v10 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( MaxBytesInMultiByteString < 0 )
    return 0LL;
  BytesInUnicodeString = (unsigned int)(2 * v6);
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v8 = RtlUnicodeToMultiByteN(*a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, BytesInUnicodeString);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, BytesInUnicodeString, *a4, MaxBytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
