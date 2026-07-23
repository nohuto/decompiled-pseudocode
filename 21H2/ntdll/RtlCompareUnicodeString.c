/*
 * XREFs of RtlCompareUnicodeString @ 0x180016090
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 *     ApiSetQuerySchemaInfo @ 0x18006A6C4 (ApiSetQuerySchemaInfo.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BE30 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076530 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpQuerySxSMUIFile @ 0x1800775AC (LdrpQuerySxSMUIFile.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18007A3A0 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007C6B0 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x1800850A4 (LdrpCompareModuleName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0BA0 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D521C (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3898 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x1800FD4FC (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800FD5C4 (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  wchar_t *v7; // r11
  char *v8; // rbx
  __int64 v9; // rcx
  unsigned __int16 v11; // r10
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  char *v15; // rdx

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v9 = *Buffer;
      if ( (_WORD)v9 != *(wchar_t *)((char *)Buffer + (_QWORD)v8) )
      {
        v12 = (unsigned __int16)NLS_UPCASE(v9);
        LOWORD(v13) = NLS_UPCASE(v11);
        if ( (_WORD)v12 != (_WORD)v13 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    v13 = (unsigned __int16)v13;
    v14 = v12;
  }
  else
  {
    v15 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v14 = *Buffer;
      v13 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v15);
      if ( (_WORD)v14 != (_WORD)v13 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
  }
  return v14 - v13;
}
