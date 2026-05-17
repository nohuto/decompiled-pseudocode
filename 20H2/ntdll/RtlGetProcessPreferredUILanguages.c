/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x18008A540
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F9A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, unsigned int *a4)
{
  char v7; // bl
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) == 0 && (a1 & 0xC) != 12 )
      goto LABEL_7;
    return 3221225485LL;
  }
  v7 = 8;
LABEL_7:
  result = RtlpCreateProcessRegistryInfo(&v13);
  if ( (int)result >= 0 )
  {
    v9 = v13;
    if ( *(_QWORD *)(v13 + 72) )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
      v10 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v9 + 72), v9, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v11, v12);
    }
    else
    {
      return (unsigned int)LdrpConvertLangFallbackListToMultiSz(0LL, v13, a3, a4, v7, 0, a2);
    }
    return v10;
  }
  return result;
}
