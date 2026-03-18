/*
 * XREFs of PnpCompareMultiSz @ 0x1408ADE64
 * Callers:
 *     PipGetPersistentMemory @ 0x140898538 (PipGetPersistentMemory.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AA4EC (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406B5F00 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x140754040 (PnpGetMultiSzLength.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2, BOOLEAN CaseInSensitive)
{
  char v5; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  String1Length = 0LL;
  String2Length[0] = 0LL;
  if ( (int)PnpGetMultiSzLength((__int64)String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && (int)PnpGetMultiSzLength((__int64)String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], CaseInSensitive) == 0;
  }
  return v5;
}
