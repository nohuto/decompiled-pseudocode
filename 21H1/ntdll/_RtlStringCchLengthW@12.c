/*
 * XREFs of _RtlStringCchLengthW@12 @ 0x4B2D415E
 * Callers:
 *     _RtlpLangNameInMultiSzString_Size@12 @ 0x4B2D2CBB (_RtlpLangNameInMultiSzString_Size@12.c)
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 *     _RtlpValidAttribute@4 @ 0x4B34CA83 (_RtlpValidAttribute@4.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE (_RtlpCheckMuiMultiStringSafe@8.c)
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x4B2D5B2E (RtlStringLengthWorkerW.c)
 */

int __fastcall RtlStringCchLengthW(int a1, unsigned int a2, _DWORD *a3)
{
  int result; // eax

  if ( a1 && a2 <= 0x7FFFFFFF )
    result = RtlStringLengthWorkerW(a3);
  else
    result = -1073741811;
  if ( result < 0 )
  {
    if ( a3 )
      *a3 = 0;
  }
  return result;
}
