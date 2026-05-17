/*
 * XREFs of LdrpLogEtwEvent @ 0x1800CF0E0
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x1800116AC (LdrpLogDllStateEx2.c)
 *     LdrpCompleteMapModule @ 0x1800148B4 (LdrpCompleteMapModule.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     LdrpReleaseLoaderLock @ 0x18003E654 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     RtlpWaitOnCriticalSection @ 0x180063370 (RtlpWaitOnCriticalSection.c)
 *     LdrpProcessInitializationComplete @ 0x180080840 (LdrpProcessInitializationComplete.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CDBE0 (LdrpTryAcquireLoaderLock.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     LdrpEventAddUnicodeString @ 0x1800CED2C (LdrpEventAddUnicodeString.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *result; // rax
  size_t v11; // r8
  int v14[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE v15[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = v15;
  v7 = 0;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 <= 0x214
    || (result = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7 + 42), (v6 = result) != 0LL) )
  {
    v11 = 576LL;
    if ( v7 + 42 > 0x240 )
      v11 = v7 + 42;
    memset(v6, 0, v11);
    *((_WORD *)v6 + 3) = a1;
    if ( a2 != -1 )
    {
      v6[40] = a3;
      *((_QWORD *)v6 + 4) = a2;
      v6[41] = a4;
      if ( v7 )
      {
        LdrpEventAddUnicodeString((__int64)a5, (_WORD *)v6 + 21, v7, v14);
        if ( a6 )
          LdrpEventAddUnicodeString((__int64)a6, &v6[v14[0] + 42], v7 - v14[0], v14);
      }
    }
    RtlGetCurrentServiceSessionId();
    NtTraceEvent();
    result = v15;
    if ( v15 != v6 )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
  }
  return result;
}
