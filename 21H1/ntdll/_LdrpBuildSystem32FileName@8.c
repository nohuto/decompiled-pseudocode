/*
 * XREFs of _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 * Callees:
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall LdrpBuildSystem32FileName(_WORD *a1, int a2)
{
  const WCHAR *NtSystemRoot; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-8h] BYREF

  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &DestinationString);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString);
  if ( a2 )
    return LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  else
    return 0;
}
