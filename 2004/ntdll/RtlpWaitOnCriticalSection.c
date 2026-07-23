/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x180063370
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18002FAF0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     RtlpWaitOnAddress @ 0x1800635A4 (RtlpWaitOnAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180063A30 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009D390 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CF0E0 (LdrpLogEtwEvent.c)
 *     RtlpGetCriticalSectionContentionCount @ 0x1800E8D68 (RtlpGetCriticalSectionContentionCount.c)
 *     RtlpPossibleDeadlock @ 0x1800E8ED8 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r13
  unsigned int v5; // r12d
  LARGE_INTEGER *v6; // rdi
  __int64 v7; // rax
  int v8; // r15d
  void *v9; // r14
  __int64 v10; // rcx
  struct _PEB *v11; // rax
  int v12; // r9d
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  struct _TEB *v15; // rcx
  __int64 WowTebOffset; // rax
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *SharedData; // rcx
  __int64 v20; // rcx
  struct _TEB *v21; // rsi
  unsigned __int64 v22; // rdx
  int v23; // eax
  int CriticalSectionContentionCount; // eax
  int v25; // esi
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  char v29; // [rsp+40h] [rbp-98h]
  int v30; // [rsp+48h] [rbp-90h] BYREF
  struct _TEB *v31; // [rsp+50h] [rbp-88h]
  _BYTE Fields[6]; // [rsp+58h] [rbp-80h] BYREF
  __int16 v33; // [rsp+5Eh] [rbp-7Ah]
  int v34; // [rsp+78h] [rbp-60h]
  int v35; // [rsp+7Ch] [rbp-5Ch]
  __int64 v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]

  v3 = NtCurrentTeb();
  v30 = a2;
  v29 = 0;
  v31 = v3;
  v5 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v29 = 1;
    v3->WaitingOnLoaderLock = 1;
  }
  if ( byte_18016A508 )
    goto LABEL_34;
  if ( UseWOW64 )
  {
    v15 = NtCurrentTeb();
    WowTebOffset = v15->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v15 = (struct _TEB *)((char *)v15 + WowTebOffset);
    }
    else
    {
      v15 = 0LL;
    }
    v17 = *(unsigned int *)(LODWORD(v15->NtTib.Self) + 0xCLL);
    if ( v17 )
    {
      if ( *(_BYTE *)(v17 + 40) )
LABEL_34:
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    }
  }
  v6 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1, a2, a3);
  v7 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v7 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      v7 = *(_QWORD *)a1;
    }
  }
  v8 = 0;
  if ( v7 != -1 )
    ++*(_DWORD *)(v7 + 36);
  v9 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v10 = 2147353474LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v18 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v33 = 5922;
      v35 = v18;
      v34 = *(_DWORD *)(a1 + 8);
      v36 = *(_QWORD *)(a1 + 16);
      v37 = a1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v20 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v20 = 2147353474LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v20, 0x20402u, 0x18u, Fields);
    }
    if ( v9 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v11) = RtlpWaitOnAddress((int)a1 + 8, (unsigned int)&v30, 4, (_DWORD)v6, 0);
        if ( (_DWORD)v11 == 258 )
          goto LABEL_44;
        v30 = *(_DWORD *)(a1 + 8);
        if ( (v30 & 2) == 0 )
          goto LABEL_19;
      }
    }
    LODWORD(v11) = NtWaitForSingleObject(v9, 0, v6);
LABEL_19:
    if ( (_DWORD)v11 != 258 )
      break;
LABEL_44:
    v21 = NtCurrentTeb();
    v22 = (__int64)(((unsigned __int128)(v6->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v6->QuadPart) >> 23;
    DbgPrintEx(0x65u, 1u, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v22 + (v22 >> 63), v5);
    if ( *(_QWORD *)a1 == -1LL )
      v23 = 0;
    else
      v23 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      0x65u,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v21->ClientId.UniqueProcess,
      v21->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v23);
    ++v5;
    CriticalSectionContentionCount = RtlpGetCriticalSectionContentionCount(a1);
    v25 = CriticalSectionContentionCount;
    if ( v5 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && CriticalSectionContentionCount == v8 )
      RtlpPossibleDeadlock();
    v8 = v25;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v11 < 0 )
    RtlRaiseStatus((NTSTATUS)v11);
  if ( v29 )
  {
    v31->WaitingOnLoaderLock = 0;
    v11 = NtCurrentPeb();
    v13 = v11->SharedData;
    if ( v13 && *v13 )
    {
      v11 = NtCurrentPeb();
      v14 = (__int64)v11->SharedData + 554;
    }
    else
    {
      v14 = 2147353476LL;
    }
    if ( *(_BYTE *)v14 )
    {
      v11 = NtCurrentPeb();
      if ( (v11->TracingFlags & 4) != 0 )
      {
        v11 = NtCurrentPeb();
        v26 = v11->SharedData;
        if ( v26 && *v26 )
        {
          v11 = NtCurrentPeb();
          v27 = (__int64)v11->SharedData + 555;
        }
        else
        {
          v27 = 2147353477LL;
        }
        if ( (*(_BYTE *)v27 & 0x20) != 0 )
        {
          LOBYTE(v12) = -1;
          LODWORD(v11) = LdrpLogEtwEvent(5251, -1, 255, v12, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v11;
}
