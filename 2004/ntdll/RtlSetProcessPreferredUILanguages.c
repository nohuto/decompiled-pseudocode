/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180089680
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMultiSZCchLength @ 0x18003EF7C (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003F034 (RtlpCheckMuiMultiStringSafe.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F8A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v16);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_27;
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v8, &v17) < 0 )
      return (unsigned int)-1073741811;
    if ( v17 < 2 || *a2 || a2[1] )
    {
      v7 = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v17, v5 | 2u, 26, 5u, &v15);
      if ( v7 < 0 )
      {
        v14 = v15;
LABEL_29:
        RtlpMuiRegFreeLanguageList(v14);
        return (unsigned int)v7;
      }
      v9 = v15;
      if ( !v15 || !*(_WORD *)(v15 + 4) )
      {
        RtlpMuiRegFreeLanguageList(v15);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *(unsigned __int16 *)(v15 + 4);
    }
    else
    {
LABEL_27:
      v9 = v15;
    }
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    v11 = v16[0];
    v12 = *(_QWORD *)(v16[0] + 72);
    *(_QWORD *)(v16[0] + 72) = v9;
    ++*(_DWORD *)(v11 + 16);
    v13 = *(_QWORD *)(v11 + 96);
    if ( v13 )
      *(_DWORD *)(v13 + 40) |= 0x80u;
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v13, v10);
    if ( !v12 )
      return (unsigned int)v7;
    v14 = v12;
    goto LABEL_29;
  }
  return result;
}
