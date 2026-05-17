/*
 * XREFs of _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0
 * Callers:
 *     _RtlpEnterCriticalSectionContended@4 @ 0x4B2BFEE0 (_RtlpEnterCriticalSectionContended@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlpGetCriticalSectionContentionCount@4 @ 0x4B34A7EE (_RtlpGetCriticalSectionContentionCount@4.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 */

int __fastcall RtlpWaitOnCriticalSection(_UNKNOWN **a1, int a2)
{
  struct _TEB *v2; // eax
  _DWORD *v3; // edi
  volatile signed __int32 *v4; // esi
  int v5; // eax
  volatile signed __int32 v6; // ebx
  int v7; // eax
  int *v8; // ebx
  struct _TEB *v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  signed __int32 v13; // edx
  signed __int32 v14; // ecx
  signed __int32 v15; // eax
  int result; // eax
  signed __int32 j; // edx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  unsigned int v20; // ecx
  signed __int32 v21; // eax
  signed __int32 v22; // ecx
  _DWORD *SharedData; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // ebx
  struct _TEB *v28; // esi
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // ebx
  int CriticalSectionContentionCount; // eax
  int v33; // esi
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  char v36; // [esp+12h] [ebp-7Eh]
  char v37; // [esp+13h] [ebp-7Dh]
  volatile signed __int32 *v38; // [esp+14h] [ebp-7Ch]
  unsigned int v39; // [esp+14h] [ebp-7Ch]
  HANDLE Handle; // [esp+18h] [ebp-78h] BYREF
  int *v41; // [esp+1Ch] [ebp-74h]
  int WaitOnAddressHashTable; // [esp+20h] [ebp-70h]
  int v43; // [esp+24h] [ebp-6Ch]
  unsigned int v44; // [esp+28h] [ebp-68h]
  int v45; // [esp+2Ch] [ebp-64h]
  _DWORD v46[2]; // [esp+30h] [ebp-60h] BYREF
  unsigned int v47; // [esp+38h] [ebp-58h]
  int v48; // [esp+3Ch] [ebp-54h]
  _DWORD *v49; // [esp+40h] [ebp-50h]
  int v50; // [esp+44h] [ebp-4Ch]
  _DWORD *v51; // [esp+48h] [ebp-48h]
  _UNKNOWN **v52; // [esp+4Ch] [ebp-44h]
  volatile signed __int32 i; // [esp+50h] [ebp-40h]
  struct _TEB *v54; // [esp+54h] [ebp-3Ch]
  char v55[6]; // [esp+58h] [ebp-38h] BYREF
  __int16 v56; // [esp+5Eh] [ebp-32h]
  int v57; // [esp+78h] [ebp-18h]
  int v58; // [esp+7Ch] [ebp-14h]
  int v59; // [esp+80h] [ebp-10h]
  _DWORD *v60; // [esp+84h] [ebp-Ch]

  v2 = NtCurrentTeb();
  v3 = a1;
  v43 = a2;
  v52 = a1;
  v37 = 0;
  v54 = v2;
  v44 = 0;
  if ( a1 == &LdrpLoaderLock )
  {
    v37 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_4B3A5DA8 )
    ZwTerminateProcess(-1, -1073741749);
  if ( RtlpTimeoutDisable )
    v41 = 0;
  else
    v41 = &RtlpTimeout;
  v4 = v3 + 4;
  if ( !v3[4] )
  {
    v22 = -1;
    Handle = (HANDLE)-1;
    if ( RtlpForceCSToUseEvents )
    {
      if ( (int)NtCreateEvent(&Handle, 1048579, 0, 1, 0) >= 0 )
      {
        v22 = (signed __int32)Handle;
      }
      else
      {
        v22 = -1;
        Handle = (HANDLE)-1;
      }
    }
    if ( _InterlockedCompareExchange(v4, v22, 0) && Handle != (HANDLE)-1 )
      NtClose(Handle);
  }
  v5 = *v3;
  if ( *v3 == -1 )
  {
    v5 = -1;
    if ( (v3[5] & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(v3);
      v5 = *v3;
    }
  }
  v45 = 0;
  if ( v5 != -1 )
    ++*(_DWORD *)(v5 + 20);
  v6 = *v4;
  for ( i = *v4; ; v6 = i )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 552;
    else
      v7 = 2147353474;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v60 = v3;
      v56 = 5922;
      v58 = v3[5] & 0xFFFFFF;
      v57 = v3[1];
      v59 = v3[3];
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v24 = (int)NtCurrentPeb()->SharedData + 552;
      else
        v24 = 2147353474;
      NtTraceEvent(*(unsigned __int8 *)v24, 132098, 16, v55);
    }
    if ( v6 == -1 )
    {
      v8 = v3 + 1;
      v51 = v46;
      while ( 1 )
      {
        v9 = NtCurrentTeb();
        v46[0] = v8;
        v50 = 1;
        v48 = 0;
        v47 = 0;
        v49 = 0;
        v46[1] = v9->ClientId.UniqueThread;
        v10 = (unsigned int)v8;
        v11 = (unsigned int)v51;
        v12 = (v10 >> 5) & 0x7F;
        WaitOnAddressHashTable = (int)v9->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v13 = *(_DWORD *)(WaitOnAddressHashTable + 4 * v12);
        v38 = (volatile signed __int32 *)(WaitOnAddressHashTable + 4 * v12);
        while ( 1 )
        {
          v14 = v11 | v13 & 3;
          v47 = v13 & 0xFFFFFFFC;
          if ( (v13 & 0xFFFFFFFC) != 0 )
          {
            v49 = 0;
            v14 |= 2u;
          }
          else
          {
            v49 = v46;
          }
          v15 = _InterlockedCompareExchange(v38, v14, v13);
          if ( v15 == v13 )
            break;
          v13 = v15;
        }
        v3 = v52;
        v8 = (int *)(v52 + 1);
        if ( (((unsigned __int8)v13 ^ (unsigned __int8)v14) & 2) != 0 )
        {
          for ( j = *v38; ; j = v21 )
          {
            v18 = (_DWORD *)(j & 0xFFFFFFFC);
            if ( !*(_DWORD *)((j & 0xFFFFFFFC) + 16) )
            {
              do
              {
                v19 = v18;
                v18 = (_DWORD *)v18[2];
                v18[3] = v19;
              }
              while ( !v18[4] );
            }
            *(_DWORD *)((j & 0xFFFFFFFC) + 16) = v18[4];
            if ( (j & 1) != 0 )
            {
              v36 = 1;
              v20 = 0;
            }
            else
            {
              v36 = 0;
              v20 = j & 0xFFFFFFFC;
            }
            v21 = _InterlockedCompareExchange(v38, v20, j);
            if ( v21 == j )
              break;
          }
          if ( v36 )
          {
            v25 = v21 & 0xFFFFFFFC;
            v39 = v25;
            if ( v25 )
            {
              do
              {
                v26 = *(_DWORD *)(v25 + 8);
                if ( !_InterlockedExchange((volatile __int32 *)(v25 + 20), 2) )
                  ZwAlertThreadByThreadId(*(_DWORD *)(v39 + 4));
                v25 = v26;
                v39 = v26;
              }
              while ( v26 );
            }
          }
        }
        if ( *v8 == v43 )
        {
          result = RtlpWaitOnAddressWithTimeout(v41, 0);
        }
        else
        {
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v46);
          result = 0;
        }
        if ( result == 258 )
          goto LABEL_67;
        v43 = *v8;
        if ( (v43 & 2) == 0 )
          goto LABEL_26;
      }
    }
    result = ZwWaitForSingleObject(v6, 0, v41);
LABEL_26:
    if ( result != 258 )
      break;
LABEL_67:
    v27 = v44;
    v28 = NtCurrentTeb();
    DbgPrintEx(101, 1, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", *(_QWORD *)v41 / -10000000LL, v44);
    if ( *v3 == -1 )
      v29 = 0;
    else
      v29 = *(_DWORD *)(*v3 + 20);
    v30 = DbgPrintEx(
            101,
            0,
            "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
            v28->ClientId.UniqueProcess,
            v28->ClientId.UniqueThread,
            (const void *)v3[3],
            v3,
            v29);
    v31 = v27 + 1;
    v44 = v31;
    CriticalSectionContentionCount = RtlpGetCriticalSectionContentionCount(v3, HIDWORD(v30));
    v33 = CriticalSectionContentionCount;
    if ( v31 > 2 && v3 != &LdrpLoaderLock && CriticalSectionContentionCount == v45 )
      RtlpPossibleDeadlock();
    v45 = v33;
    DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
  }
  if ( result < 0 )
    RtlRaiseStatus(result);
  if ( v37 )
  {
    v54->WaitingOnLoaderLock = 0;
    v34 = NtCurrentPeb()->SharedData;
    if ( v34 && *v34 )
      result = (int)NtCurrentPeb()->SharedData + 554;
    else
      result = 2147353476;
    if ( *(_BYTE *)result )
    {
      result = (int)NtCurrentPeb();
      if ( (*(_BYTE *)(result + 576) & 4) != 0 )
      {
        v35 = NtCurrentPeb()->SharedData;
        if ( v35 && *v35 )
          result = (int)NtCurrentPeb()->SharedData + 555;
        else
          result = 2147353477;
        if ( (*(_BYTE *)result & 0x20) != 0 )
          return LdrpLogEtwEvent(-1, -1, 0, 0);
      }
    }
  }
  return result;
}
