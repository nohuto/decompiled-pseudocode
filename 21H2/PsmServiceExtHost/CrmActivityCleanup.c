/*
 * XREFs of CrmActivityCleanup @ 0x18002F500
 * Callers:
 *     CrmActivityDereference @ 0x18002FD24 (CrmActivityDereference.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmLogActivityStop @ 0x18002F870 (CrmLogActivityStop.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F8D8 (CrmRegistrationReadyQueueRemove.c)
 *     CrmStateMonitorCleanup @ 0x180036560 (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     CempLockReleaseExclusive @ 0x180085A94 (CempLockReleaseExclusive.c)
 */

__int64 __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int i; // r15d
  int v3; // r12d
  __int64 v4; // rbx
  int *v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  bool v11; // r13
  _QWORD *v12; // r14
  __int64 v13; // rax
  void *v15; // r8
  void *v16; // r8
  void *v17; // r8
  bool v19; // [rsp+30h] [rbp-98h] BYREF
  int v20; // [rsp+34h] [rbp-94h]
  int v21; // [rsp+38h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+40h] [rbp-88h] BYREF
  UUID *v23; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  int *v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  bool *v27; // [rsp+80h] [rbp-48h]
  __int64 v28; // [rsp+88h] [rbp-40h]

  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v3 = 1;
    v4 = *(_QWORD *)(a1 + 104) + 56LL * i;
    v5 = (int *)*((_QWORD *)&CrmGlobals + *(unsigned int *)(v4 + 32) + 2);
    v6 = *v5;
    v20 = *v5;
    RtlAcquireSRWLockExclusive(v5 + 2);
    v7 = (_QWORD *)(v4 + 8);
    v5[4] = GetCurrentThreadId();
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v7[1] = v7;
    *v7 = v7;
    v10 = v5 + 6;
    v11 = *v10 == (_QWORD)v10;
    if ( (_QWORD *)*v10 == v10 )
    {
      CempLockReleaseExclusive(v5 + 2);
      v3 = 0;
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800B3D68 = GetCurrentThreadId();
      if ( *((int **)&CrmGlobals + v6 + 2) == v5 )
      {
        RtlAcquireSRWLockExclusive(v5 + 2);
        v5[4] = GetCurrentThreadId();
        v12 = (_QWORD *)*v10;
        v11 = *v10 == (_QWORD)v10;
        if ( (_QWORD *)*v10 == v10 )
        {
          v13 = *v5;
          if ( *((int **)&CrmGlobals + v13 + 2) == v5 )
            *((_QWORD *)&CrmGlobals + v13 + 2) = 0LL;
        }
        CempLockReleaseExclusive(v5 + 2);
        CempLockReleaseExclusive(&CrmGlobals);
        if ( v12 == v10 )
        {
          CrmStateMonitorCleanup(v5);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        }
        LODWORD(v6) = v20;
      }
      else
      {
        CempLockReleaseExclusive(&CrmGlobals);
        v5 = 0LL;
      }
    }
    if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 8) != 0 && (qword_1800B3268 & 8) == qword_1800B3268 )
    {
      v24 = 16LL;
      v23 = &Uuid;
      v21 = v6;
      v25 = &v21;
      v26 = 4LL;
      v27 = &v19;
      v19 = v11;
      v28 = 1LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B3250,
        (unsigned __int8 *)dword_1800A35D8,
        0LL,
        0LL,
        5u,
        &v22);
    }
    if ( v3 )
      CempLockReleaseExclusive(v5 + 2);
  }
  v15 = *(void **)(a1 + 104);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  CrmRegistrationReadyQueueRemove(*(_QWORD *)(a1 + 40), a1, 0LL);
  if ( *(_DWORD *)(a1 + 128) || *(_DWORD *)(a1 + 132) )
    NtDeleteWnfStateName(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 124) )
    NtDeleteWnfStateName(a1 + 120);
  v16 = *(void **)(a1 + 200);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  v17 = *(void **)(a1 + 208);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  return CrmLogActivityStop(a1);
}
