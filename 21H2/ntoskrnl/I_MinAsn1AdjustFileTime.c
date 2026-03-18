/*
 * XREFs of I_MinAsn1AdjustFileTime @ 0x140A33434
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A33600 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A33AD0 (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 */

BOOLEAN __fastcall I_MinAsn1AdjustFileTime(__int64 *a1, __int16 a2, char a3)
{
  int v5; // ecx
  BOOLEAN result; // al
  __int64 v7; // rcx
  LONGLONG v8; // rcx
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp+28h] BYREF

  Time.QuadPart = 0LL;
  if ( a3 || !a2 )
    return 1;
  v5 = (__int16)abs16(a2);
  *(_DWORD *)&TimeFields.Year = 67137;
  TimeFields.Day = 1;
  TimeFields.Hour = v5 / 60;
  *(_QWORD *)&TimeFields.Minute = (unsigned __int16)(v5 % 60);
  if ( TimeFields.Hour >= 24 )
  {
    TimeFields.Hour = (__int16)(v5 / 60) % 24;
    TimeFields.Day = (__int16)(v5 / 60) / 24 + 1;
  }
  result = RtlTimeFieldsToTime(&TimeFields, &Time);
  if ( result )
  {
    v7 = *a1;
    if ( a2 <= 0 )
      v8 = v7 - Time.QuadPart;
    else
      v8 = Time.QuadPart + v7;
    *a1 = v8;
  }
  return result;
}
