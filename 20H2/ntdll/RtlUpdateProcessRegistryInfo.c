/*
 * XREFs of RtlUpdateProcessRegistryInfo @ 0x18006ED10
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006F000 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F9A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 RtlUpdateProcessRegistryInfo()
{
  int v0; // ebx
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !g_RegInfo || *(_DWORD *)(g_RegInfo + 12) != MEMORY[0x7FFE03A4] )
  {
    v5 = 0LL;
    v0 = RtlpMuiRegCreateAndLoadRegistryInfo(&v5);
    if ( v0 >= 0 )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      if ( g_RegInfo && *(_DWORD *)(g_RegInfo + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v5);
      }
      else
      {
        v2 = v5;
        *(_QWORD *)(v5 + 104) = g_RegInfo;
        v3 = g_RegInfo;
        if ( g_RegInfo )
        {
          v3 = *(_QWORD *)(g_RegInfo + 72);
          *(_QWORD *)(v2 + 72) = v3;
        }
        g_RegInfo = v2;
      }
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v3, v1);
    }
  }
  return (unsigned int)v0;
}
