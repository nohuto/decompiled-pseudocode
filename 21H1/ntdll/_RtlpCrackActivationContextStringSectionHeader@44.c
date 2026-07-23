/*
 * XREFs of _RtlpCrackActivationContextStringSectionHeader@44 @ 0x4B2A9C14
 * Callers:
 *     _RtlpQueryInformationActivationContextDetailedInformation@20 @ 0x4B2A9A59 (_RtlpQueryInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryInformationActivationContextManifestResourceName@16 @ 0x4B33DFBA (_RtlpQueryInformationActivationContextManifestResourceName@16.c)
 * Callees:
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpCrackActivationContextStringSectionHeader(
        _DWORD *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  int v17; // eax

  v11 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0;
  if ( a2 < 8 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() passed string section at %p only %Iu bytes long; that's not even enough for the 4-byte magic and 4-"
           "byte header length!\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  if ( *a1 != 1682469715 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with wrong magic value\n   Expected %lu; got %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  v12 = a1[1];
  if ( a1 + 2 > (_DWORD *)((char *)a1 + v12) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() passed string section at %p claims %lu byte header size; that doesn't even include the HeaderSize member!\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  if ( a1 + 11 > (_DWORD *)((char *)a1 + v12) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() passed string section at %p with too small of a header\n   HeaderSize: %lu\n   Required: %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  v13 = a1[6];
  if ( v13 && v13 < v12 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with element list overlapping section header\n"
           "   Section header: %p\n"
           "   Header Size: %lu\n"
           "   ElementListOffset: %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  v14 = a1[8];
  if ( v14 && v14 < v12 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with search structure overlapping section header\n"
           "   Section header: %p\n"
           "   Header Size: %lu\n"
           "   SearchStructureOffset: %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  v15 = a1[9];
  if ( v15 && v15 < v12 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with user data overlapping section header\n"
           "   Section header: %p\n"
           "   Header Size: %lu\n"
           "   User Data Offset: %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  v16 = a1[10];
  if ( v16 < 0x38 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with user data too small\n"
           "   Section header: %p\n"
           "   UserDataSize: %lu; needed: %lu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  if ( v16 + v15 > a2 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found assembly information section with user data extending beyond section data\n"
           "   Section header: %p\n"
           "   UserDataSize: %lu\n"
           "   UserDataOffset: %lu\n"
           "   Section size: %Iu\n",
      (int)"RtlpCrackActivationContextStringSectionHeader");
    return -1072365565;
  }
  if ( a4 )
    *a4 = a1[3];
  if ( a10 )
    *a10 = a1[10];
  if ( a11 )
  {
    v17 = a1[9];
    if ( v17 )
      *a11 = (char *)a1 + v17;
    else
      *a11 = 0;
  }
  return v11;
}
