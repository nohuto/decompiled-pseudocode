/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1406CBCE0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x1403A05A0 (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x1403B98C0 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x1405B8F1C (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1405B98C0 (AsiSortValueList.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     EtwpExpandFileName @ 0x1406CBAA4 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407578BC (PnpCheckDeviceIdsChanged.c)
 *     sub_14079E020 @ 0x14079E020 (sub_14079E020.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x1408AF184 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1408F5680 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14097EBAC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097EE4C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebp
  int v7; // esi
  unsigned __int16 *v8; // r10
  const WCHAR *v9; // r11
  signed __int64 v10; // rbx
  int v11; // eax
  int v12; // ecx
  int v14; // edi
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // ax

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = (unsigned __int16 *)String1;
  v9 = &String1[v5];
  if ( String1 >= v9 )
    return String1Length - String2Length;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    do
    {
      if ( *v8 != *(unsigned __int16 *)((char *)v8 + v10) )
      {
        v14 = NLS_UPCASE(*v8);
        v16 = NLS_UPCASE(v15);
        if ( (_WORD)v14 != v16 )
        {
          v12 = v16;
          v11 = v14;
          return v11 - v12;
        }
      }
      ++v8;
    }
    while ( v8 < v9 );
    return v7 - v6;
  }
  else
  {
    while ( 1 )
    {
      v11 = *v8;
      v12 = *(unsigned __int16 *)((char *)v8 + v10);
      if ( (_WORD)v11 != (_WORD)v12 )
        break;
      if ( ++v8 >= v9 )
        return String1Length - String2Length;
    }
    return v11 - v12;
  }
}
