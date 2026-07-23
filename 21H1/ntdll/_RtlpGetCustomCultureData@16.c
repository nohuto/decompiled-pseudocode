/*
 * XREFs of _RtlpGetCustomCultureData@16 @ 0x4B3631F6
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 * Callees:
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlpGetCustomCultureDataFromFile@20 @ 0x4B363239 (_RtlpGetCustomCultureDataFromFile@20.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 */

int __fastcall RtlpGetCustomCultureData(int a1, char a2, char a3, int a4)
{
  int CustomCultureDataFromFile; // esi
  PVOID v7[2]; // [esp+8h] [ebp-8h] BYREF

  CustomCultureDataFromFile = RtlpOpenAndMapCustomCultureFile(v7);
  if ( CustomCultureDataFromFile >= 0 )
  {
    CustomCultureDataFromFile = RtlpGetCustomCultureDataFromFile(a2, a3, a4);
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v7[1]);
  }
  return CustomCultureDataFromFile;
}
