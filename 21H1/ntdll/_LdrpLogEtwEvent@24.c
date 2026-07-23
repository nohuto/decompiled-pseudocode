/*
 * XREFs of _LdrpLogEtwEvent@24 @ 0x4B330117
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _LdrpProcessInitializationComplete@0 @ 0x4B2E645A (_LdrpProcessInitializationComplete@0.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _LdrpTryAcquireLoaderLock@0 @ 0x4B32E68D (_LdrpTryAcquireLoaderLock@0.c)
 *     _LdrpLogDllStateEx2@16 @ 0x4B32FDF3 (_LdrpLogDllStateEx2@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpEventAddUnicodeString@16 @ 0x4B32FC55 (_LdrpEventAddUnicodeString@16.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(__int16 a1, int a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  unsigned int v6; // esi
  _BYTE *v7; // edi
  _BYTE *result; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  size_t v12; // [esp-4h] [ebp-26Ch]
  int v14; // [esp+10h] [ebp-258h] BYREF
  int v15; // [esp+14h] [ebp-254h]
  unsigned __int16 *v16; // [esp+18h] [ebp-250h]
  unsigned __int16 *v17; // [esp+1Ch] [ebp-24Ch]
  _BYTE Fields[580]; // [esp+20h] [ebp-248h] BYREF

  v6 = 0;
  v15 = a2;
  v16 = a5;
  v17 = a6;
  v7 = Fields;
  if ( a5 )
  {
    v6 = *a5 + 2;
    if ( a6 )
      v6 += *a6 + 2;
  }
  if ( v6 <= 0x214
    || (LODWORD(v12) = v6 + 42, result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12), (v7 = result) != 0) )
  {
    v9 = 576;
    if ( v6 + 42 > 0x240 )
      v9 = v6 + 42;
    LODWORD(v12) = v9;
    memset(v7, 0, v12);
    *((_WORD *)v7 + 3) = a1;
    if ( v15 != -1 )
    {
      v10 = v15;
      *((_DWORD *)v7 + 8) = v15;
      v7[40] = a3;
      *((_DWORD *)v7 + 9) = HIDWORD(v10);
      v7[41] = a4;
      if ( v6 )
      {
        LdrpEventAddUnicodeString((int)v16, (_WORD *)v7 + 21, v6, &v14);
        if ( v17 )
          LdrpEventAddUnicodeString((int)v17, &v7[v14 + 42], v6 - v14, &v14);
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v11, 0x402u, v6 + 10, v7);
    result = Fields;
    if ( Fields != v7 )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return result;
}
