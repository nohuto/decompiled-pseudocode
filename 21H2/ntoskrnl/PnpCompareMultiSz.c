/*
 * XREFs of PnpCompareMultiSz @ 0x140957E34
 * Callers:
 *     PipMatchPersistentMemory @ 0x140941CFC (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x140941DDC (PipMatchPersistentMemoryV1.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14095353C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     PnpGetMultiSzLength @ 0x1407648E4 (PnpGetMultiSzLength.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
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
