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

int __fastcall RtlpWaitOnCriticalSection(_RTL_CRITICAL_SECTION *a1, int a2)
{
  struct _TEB *v2; // eax
  _RTL_CRITICAL_SECTION *v3; // edi
  volatile signed __int32 *p_LockSemaphore; // esi
  int DebugInfo; // eax
  void *v6; // ebx
  int v7; // eax
  int *p_LockCount; // ebx
  struct _TEB *v9; // ecx
  int *v10; // eax
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
  int CriticalSectionContentionCount; // eax
  int v30; // esi
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  int v33; // [esp+0h] [ebp-90h]
  char v34; // [esp+12h] [ebp-7Eh]
  char v35; // [esp+13h] [ebp-7Dh]
  volatile signed __int32 *v36; // [esp+14h] [ebp-7Ch]
  unsigned int v37; // [esp+14h] [ebp-7Ch]
  HANDLE EventHandle; // [esp+18h] [ebp-78h] BYREF
  PLARGE_INTEGER Timeout; // [esp+1Ch] [ebp-74h]
  int WaitOnAddressHashTable; // [esp+20h] [ebp-70h]
  int v41; // [esp+24h] [ebp-6Ch]
  unsigned int v42; // [esp+28h] [ebp-68h]
  int v43; // [esp+2Ch] [ebp-64h]
  _DWORD v44[2]; // [esp+30h] [ebp-60h] BYREF
  unsigned int v45; // [esp+38h] [ebp-58h]
  int v46; // [esp+3Ch] [ebp-54h]
  _DWORD *v47; // [esp+40h] [ebp-50h]
  int v48; // [esp+44h] [ebp-4Ch]
  _DWORD *v49; // [esp+48h] [ebp-48h]
  _RTL_CRITICAL_SECTION *v50; // [esp+4Ch] [ebp-44h]
  volatile signed __int32 i; // [esp+50h] [ebp-40h]
  struct _TEB *v52; // [esp+54h] [ebp-3Ch]
  char Fields[6]; // [esp+58h] [ebp-38h] BYREF
  __int16 v54; // [esp+5Eh] [ebp-32h]
  int LockCount; // [esp+78h] [ebp-18h]
  int v56; // [esp+7Ch] [ebp-14h]
  void *OwningThread; // [esp+80h] [ebp-10h]
  _RTL_CRITICAL_SECTION *v58; // [esp+84h] [ebp-Ch]

  v2 = NtCurrentTeb();
  v3 = a1;
  v41 = a2;
  v50 = a1;
  v35 = 0;
  v52 = v2;
  v42 = 0;
  if ( a1 == &LdrpLoaderLock )
  {
    v35 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_4B3A5DA8 )
    ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073741749);
  if ( RtlpTimeoutDisable )
    Timeout = 0;
  else
    Timeout = &RtlpTimeout;
  p_LockSemaphore = (volatile signed __int32 *)&v3->LockSemaphore;
  if ( !v3->LockSemaphore )
  {
    v22 = -1;
    EventHandle = (HANDLE)-1;
    if ( RtlpForceCSToUseEvents )
    {
      if ( NtCreateEvent(&EventHandle, 0x100003u, 0, SynchronizationEvent, 0) >= 0 )
      {
        v22 = (signed __int32)EventHandle;
      }
      else
      {
        v22 = -1;
        EventHandle = (HANDLE)-1;
      }
    }
    if ( _InterlockedCompareExchange(p_LockSemaphore, v22, 0) && EventHandle != (HANDLE)-1 )
      NtClose(EventHandle);
  }
  DebugInfo = (int)v3->DebugInfo;
  if ( v3->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1 )
  {
    DebugInfo = -1;
    if ( (v3->SpinCount & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(v3);
      DebugInfo = (int)v3->DebugInfo;
    }
  }
  v43 = 0;
  if ( DebugInfo != -1 )
    ++*(_DWORD *)(DebugInfo + 20);
  v6 = (void *)*p_LockSemaphore;
  for ( i = *p_LockSemaphore; ; v6 = (void *)i )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 552;
    else
      v7 = 2147353474;
    if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v58 = v3;
      v54 = 5922;
      v56 = v3->SpinCount & 0xFFFFFF;
      LockCount = v3->LockCount;
      OwningThread = v3->OwningThread;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v24 = (int)NtCurrentPeb()->SharedData + 552;
      else
        v24 = 2147353474;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v24, 0x20402u, 0x10u, Fields);
    }
    if ( v6 == (void *)-1 )
    {
      p_LockCount = &v3->LockCount;
      v49 = v44;
      while ( 1 )
      {
        v9 = NtCurrentTeb();
        v44[0] = p_LockCount;
        v48 = 1;
        v46 = 0;
        v45 = 0;
        v47 = 0;
        v44[1] = v9->ClientId.UniqueThread;
        v10 = p_LockCount;
        v11 = (unsigned int)v49;
        v12 = ((unsigned int)v10 >> 5) & 0x7F;
        WaitOnAddressHashTable = (int)v9->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v13 = *(_DWORD *)(WaitOnAddressHashTable + 4 * v12);
        v36 = (volatile signed __int32 *)(WaitOnAddressHashTable + 4 * v12);
        while ( 1 )
        {
          v14 = v11 | v13 & 3;
          v45 = v13 & 0xFFFFFFFC;
          if ( (v13 & 0xFFFFFFFC) != 0 )
          {
            v47 = 0;
            v14 |= 2u;
          }
          else
          {
            v47 = v44;
          }
          v15 = _InterlockedCompareExchange(v36, v14, v13);
          if ( v15 == v13 )
            break;
          v13 = v15;
        }
        v3 = v50;
        p_LockCount = &v50->LockCount;
        if ( (((unsigned __int8)v13 ^ (unsigned __int8)v14) & 2) != 0 )
        {
          for ( j = *v36; ; j = v21 )
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
              v34 = 1;
              v20 = 0;
            }
            else
            {
              v34 = 0;
              v20 = j & 0xFFFFFFFC;
            }
            v21 = _InterlockedCompareExchange(v36, v20, j);
            if ( v21 == j )
              break;
          }
          if ( v34 )
          {
            v25 = v21 & 0xFFFFFFFC;
            v37 = v25;
            if ( v25 )
            {
              do
              {
                v26 = *(_DWORD *)(v25 + 8);
                if ( !_InterlockedExchange((volatile __int32 *)(v25 + 20), 2) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(v37 + 4));
                v25 = v26;
                v37 = v26;
              }
              while ( v26 );
            }
          }
        }
        if ( *p_LockCount == v41 )
        {
          result = RtlpWaitOnAddressWithTimeout(Timeout, 0);
        }
        else
        {
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v44);
          result = 0;
        }
        if ( result == 258 )
          goto LABEL_67;
        v41 = *p_LockCount;
        if ( (v41 & 2) == 0 )
          goto LABEL_26;
      }
    }
    result = ZwWaitForSingleObject(v6, 0, Timeout);
LABEL_26:
    if ( result != 258 )
      break;
LABEL_67:
    v27 = v42;
    v28 = NtCurrentTeb();
    DbgPrintEx(101, 1u, (int)"RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", Timeout->QuadPart / -10000000);
    DbgPrintEx(
      101,
      0,
      (int)"RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      (int)v28->ClientId.UniqueProcess);
    v42 = ++v27;
    CriticalSectionContentionCount = RtlpGetCriticalSectionContentionCount(v3);
    v30 = CriticalSectionContentionCount;
    if ( v27 > 2 && v3 != &LdrpLoaderLock && CriticalSectionContentionCount == v43 )
      RtlpPossibleDeadlock();
    v43 = v30;
    DbgPrintEx(101, 0, (int)"RTL: Re-Waiting\n", v33);
  }
  if ( result < 0 )
    RtlRaiseStatus(result);
  if ( v35 )
  {
    v52->WaitingOnLoaderLock = 0;
    v31 = NtCurrentPeb()->SharedData;
    if ( v31 && *v31 )
      result = (int)NtCurrentPeb()->SharedData + 554;
    else
      result = 2147353476;
    if ( *(_BYTE *)result )
    {
      result = (int)NtCurrentPeb();
      if ( (*(_BYTE *)(result + 576) & 4) != 0 )
      {
        v32 = NtCurrentPeb()->SharedData;
        if ( v32 && *v32 )
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
