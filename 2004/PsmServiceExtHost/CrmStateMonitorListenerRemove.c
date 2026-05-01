/*
 * XREFs of CrmStateMonitorListenerRemove @ 0x1800364BC
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 *     CrmStateMonitorGPUUsageCleanup @ 0x180036448 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x1800365C0 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18003C4E4 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x1800849A0 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x180084A44 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x180084A94 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x180084B3C (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x180084BDC (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180084C2C (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180084CE4 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180084D9C (CrmStateMonitorPowerConstrainedCleanup.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorCleanup @ 0x180036360 (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

char __fastcall CrmStateMonitorListenerRemove(char *P, __int64 a2, int a3)
{
  int v3; // r13d
  char *v4; // rdi
  int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  BOOL v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-39h] BYREF
  UUID *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  bool *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]

  v3 = *(_DWORD *)P;
  v4 = P + 8;
  v8 = 1;
  RtlAcquireSRWLockExclusive(P + 8);
  v9 = (_QWORD *)(a2 + 8);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = P + 24;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v13 = *v12 == (_QWORD)v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    if ( !a3 )
    {
      *((_DWORD *)v4 + 2) = 0;
      RtlReleaseSRWLockExclusive(v4);
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800B3D68 = GetCurrentThreadId();
      RtlAcquireSRWLockExclusive(v4);
      *((_DWORD *)v4 + 2) = GetCurrentThreadId();
      v13 = *v12 == (_QWORD)v12;
    }
    if ( v13 )
    {
      v15 = *(int *)P;
      if ( *((char **)&CrmGlobals + v15 + 2) == P )
        *((_QWORD *)&CrmGlobals + v15 + 2) = 0LL;
    }
    *((_DWORD *)v4 + 2) = 0;
    LOBYTE(v11) = RtlReleaseSRWLockExclusive(v4);
    v8 = 0;
    if ( !a3 )
    {
      dword_1800B3D68 = 0;
      LOBYTE(v11) = RtlReleaseSRWLockExclusive(&CrmGlobals);
    }
    if ( v13 )
    {
      CrmStateMonitorCleanup((__int64)P);
      LOBYTE(v11) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)&dword_1800B3250, 8LL);
    if ( (_BYTE)v11 )
    {
      v22 = 0;
      v25 = 0;
      v20 = &Uuid;
      v21 = 16;
      v17 = v13;
      v23 = &v18;
      v28 = 0;
      v26 = &v17;
      v18 = v3;
      v24 = 4;
      v27 = 1;
      LOBYTE(v11) = tlgWriteTransfer_EventWriteTransfer(v14, (unsigned __int8 *)dword_1800A3538, 0LL, 0LL, 5u, &v19);
    }
  }
  if ( v8 )
  {
    *((_DWORD *)v4 + 2) = 0;
    LOBYTE(v11) = RtlReleaseSRWLockExclusive(v4);
  }
  return (char)v11;
}
