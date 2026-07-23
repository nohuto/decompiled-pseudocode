/*
 * XREFs of _RtlpQueryInformationActivationContextManifestResourceName@16 @ 0x4B33DFBA
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpCrackActivationContextStringSectionHeader@44 @ 0x4B2A9C14 (_RtlpCrackActivationContextStringSectionHeader@44.c)
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 */

int __fastcall RtlpQueryInformationActivationContextManifestResourceName(
        int a1,
        _DWORD *a2,
        unsigned int a3,
        _DWORD *a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // [esp-1Ch] [ebp-34h]
  size_t v8; // [esp-18h] [ebp-30h]
  int v9; // [esp-18h] [ebp-30h]
  int v10; // [esp-14h] [ebp-2Ch]
  int v11; // [esp-10h] [ebp-28h]
  int v12; // [esp-Ch] [ebp-24h]
  int v13; // [esp+8h] [ebp-10h] BYREF
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF

  v16 = 0;
  v15 = -1073741595;
  if ( a4 )
    *a4 = 4;
  if ( a3 < 4 )
    return -1073741789;
  HIDWORD(v8) = a1;
  LODWORD(v8) = 4;
  RtlpLocateActivationContextSectionForQuery(&v16, &v15, a2, a3, a4, v8, a1, 1, (int)&v13, (int)&v14);
  if ( v16 == 2 )
    return v15;
  result = RtlpCrackActivationContextStringSectionHeader((_DWORD *)v13, v14, v6, 0, v7, v9, v10, v11, v12, 0, &v15);
  if ( result >= 0 )
  {
    *a2 = *(_DWORD *)(v15 + 52);
    return 0;
  }
  return result;
}
