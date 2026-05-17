/*
 * XREFs of RtlCompareUnicodeString @ 0x180016090
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x18005EE6C (LdrpSearchPath.c)
 *     ApiSetQuerySchemaInfo @ 0x1800691D4 (ApiSetQuerySchemaInfo.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006AE00 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180075500 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpQuerySxSMUIFile @ 0x18007657C (LdrpQuerySxSMUIFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079370 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007BD10 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x180084D64 (LdrpCompareModuleName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0C20 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D54AC (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3A48 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x1800FD69C (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800FD764 (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 *v3; // r9
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int16 v11; // r10
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx

  v3 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v4 = (unsigned __int64)*a1 >> 1;
  v5 = (unsigned __int64)*a2 >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)*a2 >> 1;
  v7 = &v3[v6];
  if ( v3 >= v7 )
    return (unsigned int)(v4 - v5);
  if ( a3 )
  {
    v8 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v9 = *v3;
      if ( (_WORD)v9 != *(unsigned __int16 *)((char *)v3 + v8) )
      {
        v12 = (unsigned __int16)NLS_UPCASE(v9);
        LOWORD(v13) = NLS_UPCASE(v11);
        if ( (_WORD)v12 != (_WORD)v13 )
          break;
      }
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
    v13 = (unsigned __int16)v13;
    v14 = v12;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v14 = *v3;
      v13 = *(unsigned __int16 *)((char *)v3 + v15);
      if ( (_WORD)v14 != (_WORD)v13 )
        break;
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
  }
  return (unsigned int)(v14 - v13);
}
