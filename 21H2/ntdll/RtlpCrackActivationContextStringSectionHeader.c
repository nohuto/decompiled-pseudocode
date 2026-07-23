/*
 * XREFs of RtlpCrackActivationContextStringSectionHeader @ 0x18007941C
 * Callers:
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079048 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800E00C0 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 */

__int64 __fastcall RtlpCrackActivationContextStringSectionHeader(
        int *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        _QWORD *a11)
{
  unsigned int v11; // r8d
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // edi
  const CHAR *v20; // r8
  const CHAR *v21; // r8
  int v22; // [rsp+20h] [rbp-28h]
  unsigned __int64 v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+28h] [rbp-20h]
  int v26; // [rsp+30h] [rbp-18h]

  v11 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( a2 < 8 )
  {
    v23 = a2;
    v20 = "SXS: %s() passed string section at %p only %Iu bytes long; that's not even enough for the 4-byte magic and 4-b"
          "yte header length!\n";
LABEL_29:
    DbgPrintEx(0x33u, 0, v20, "RtlpCrackActivationContextStringSectionHeader", a1, v23);
    return (unsigned int)-1072365565;
  }
  if ( *a1 != 1682469715 )
  {
    v24 = *a1;
    v22 = 1682469715;
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() found assembly information section with wrong magic value\n   Expected %lu; got %lu\n",
      "RtlpCrackActivationContextStringSectionHeader",
      v22,
      v24);
    return (unsigned int)-1072365565;
  }
  v14 = (unsigned int)a1[1];
  if ( a1 + 2 > (int *)((char *)a1 + v14) )
  {
    LODWORD(v23) = v14;
    v20 = "SXS: %s() passed string section at %p claims %lu byte header size; that doesn't even include the HeaderSize member!\n";
    goto LABEL_29;
  }
  if ( a1 + 11 > (int *)((char *)a1 + v14) )
  {
    v26 = 44;
    v21 = "SXS: %s() passed string section at %p with too small of a header\n   HeaderSize: %lu\n   Required: %lu\n";
LABEL_36:
    v25 = v14;
LABEL_38:
    DbgPrintEx(0x33u, 0, v21, "RtlpCrackActivationContextStringSectionHeader", a1, v25, v26);
    return (unsigned int)-1072365565;
  }
  v15 = a1[6];
  if ( v15 && v15 < (unsigned int)v14 )
  {
    v26 = a1[6];
    v21 = "SXS: %s() found assembly information section with element list overlapping section header\n"
          "   Section header: %p\n"
          "   Header Size: %lu\n"
          "   ElementListOffset: %lu\n";
    goto LABEL_36;
  }
  v16 = a1[8];
  if ( v16 && v16 < (unsigned int)v14 )
  {
    v26 = a1[8];
    v21 = "SXS: %s() found assembly information section with search structure overlapping section header\n"
          "   Section header: %p\n"
          "   Header Size: %lu\n"
          "   SearchStructureOffset: %lu\n";
    goto LABEL_36;
  }
  v17 = a1[9];
  if ( v17 && v17 < (unsigned int)v14 )
  {
    v26 = a1[9];
    v21 = "SXS: %s() found assembly information section with user data overlapping section header\n"
          "   Section header: %p\n"
          "   Header Size: %lu\n"
          "   User Data Offset: %lu\n";
    goto LABEL_36;
  }
  v18 = a1[10];
  if ( v18 < 0x38 )
  {
    v26 = 56;
    v21 = "SXS: %s() found assembly information section with user data too small\n"
          "   Section header: %p\n"
          "   UserDataSize: %lu; needed: %lu\n";
    v25 = a1[10];
    goto LABEL_38;
  }
  if ( v18 + v17 > a2 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() found assembly information section with user data extending beyond section data\n"
      "   Section header: %p\n"
      "   UserDataSize: %lu\n"
      "   UserDataOffset: %lu\n"
      "   Section size: %Iu\n",
      "RtlpCrackActivationContextStringSectionHeader",
      a1,
      v18,
      v17,
      a2);
    return (unsigned int)-1072365565;
  }
  if ( a4 )
    *a4 = a1[3];
  if ( a10 )
    *a10 = a1[10];
  if ( a11 )
  {
    if ( a1[9] )
      *a11 = (char *)a1 + (unsigned int)a1[9];
    else
      *a11 = 0LL;
  }
  return v11;
}
