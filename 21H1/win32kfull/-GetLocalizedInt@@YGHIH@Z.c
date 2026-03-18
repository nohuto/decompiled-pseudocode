/*
 * XREFs of ?GetLocalizedInt@@YGHIH@Z @ 0xDA3D8
 * Callers:
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

ULONG __thiscall GetLocalizedInt(void *this)
{
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-B0h] BYREF
  ULONG Value; // [esp+Ch] [ebp-A8h] BYREF
  WCHAR SourceString[80]; // [esp+10h] [ebp-A4h] BYREF

  Value = 0;
  if ( !RtlLoadStringOrError(this, SourceString, 80, 0) )
    return -1125;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
  return Value;
}
