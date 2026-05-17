/*
 * XREFs of _ValidateRegistrLangType@4 @ 0x4B2ADAAA
 * Callers:
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 * Callees:
 *     <none>
 */

int __fastcall ValidateRegistrLangType(int a1)
{
  int v1; // edx
  int *v2; // esi

  v1 = 0;
  if ( (a1 & 0x18) == 0 || (a1 & 7) == 0 )
    return -1073741811;
  v2 = ulInvalidTypes;
  do
  {
    if ( *v2 == (a1 & *v2) )
      return -1073741811;
    ++v2;
  }
  while ( (int)v2 < (int)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED );
  if ( (a1 & 3) != 0 && (a1 & 0x10) == 0 )
    return -1073741811;
  return v1;
}
