/*
 * XREFs of _MBToWCSEx@24 @ 0x1B7288
 * Callers:
 *     ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE (-CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall MBToWCSEx(int a1, const char *a2, signed int BytesInMultiByteString, PWCH *a4, int a5, int a6)
{
  ULONG v6; // ecx
  ULONG BytesInUnicodeString; // [esp+8h] [ebp-4h] BYREF

  BytesInUnicodeString = 0;
  v6 = BytesInMultiByteString;
  if ( BytesInMultiByteString
    && a5
    && a2
    && (BytesInMultiByteString >= 0
     || BytesInMultiByteString >= -2 && (v6 = strlen(a2) + BytesInMultiByteString + 2) != 0)
    && a5 >= 0
    && RtlMultiByteToUnicodeN(*a4, 2 * a5, &BytesInUnicodeString, a2, v6) >= 0 )
  {
    return BytesInUnicodeString >> 1;
  }
  else
  {
    return 0;
  }
}
