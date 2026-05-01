/*
 * XREFs of CrmActivityCleanup @ 0x18002F330
 * Callers:
 *     CrmActivityDereference @ 0x18002FAA4 (CrmActivityDereference.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F65C (CrmRegistrationReadyQueueRemove.c)
 *     CrmStateMonitorCleanup @ 0x180036360 (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

char __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int i; // edi
  int v3; // r12d
  __int64 v4; // rbx
  int *v5; // r15
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  BOOL v10; // r13d
  void *v12; // r8
  __int64 v13; // rax
  void *v14; // r8
  void *v15; // r8
  __int64 v16; // rax
  int v17; // r9d
  bool v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh]
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-90h] BYREF
  UUID *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  UUID *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+160h] [rbp+60h] BYREF
  UUID *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  int *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  bool *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v3 = 1;
    v4 = *(_QWORD *)(a1 + 104) + 56LL * i;
    v5 = (int *)*((_QWORD *)&CrmGlobals + *(unsigned int *)(v4 + 32) + 2);
    v20 = *v5;
    RtlAcquireSRWLockExclusive(v5 + 2);
    v5[4] = GetCurrentThreadId();
    v6 = (_QWORD *)(v4 + 8);
    v7 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v7 + 8) != v4 + 8 || (v8 = *(_QWORD **)(v4 + 16), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    v9 = v5 + 6;
    *(_QWORD *)(v7 + 8) = v8;
    v6[1] = v6;
    *v6 = v6;
    v10 = *v9 == (_QWORD)v9;
    if ( (_QWORD *)*v9 == v9 )
    {
      v5[4] = 0;
      RtlReleaseSRWLockExclusive(v5 + 2);
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800B3D68 = GetCurrentThreadId();
      RtlAcquireSRWLockExclusive(v5 + 2);
      v5[4] = GetCurrentThreadId();
      if ( (_QWORD *)*v9 == v9 )
      {
        v16 = *v5;
        v10 = 1;
        if ( *((int **)&CrmGlobals + v16 + 2) == v5 )
          *((_QWORD *)&CrmGlobals + v16 + 2) = 0LL;
      }
      else
      {
        v10 = 0;
      }
      v5[4] = 0;
      RtlReleaseSRWLockExclusive(v5 + 2);
      v3 = 0;
      dword_1800B3D68 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      if ( v10 )
      {
        CrmStateMonitorCleanup(v5);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 8) != 0 && (qword_1800B3268 & 8) == qword_1800B3268 )
    {
      v57 = 16LL;
      v56 = &Uuid;
      v21 = v20;
      v59 = 4LL;
      v58 = &v21;
      v19 = v10;
      v61 = 1LL;
      v60 = &v19;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B3250,
        (unsigned __int8 *)dword_1800A3538,
        0LL,
        0LL,
        5u,
        &v55);
    }
    if ( v3 )
    {
      v5[4] = 0;
      RtlReleaseSRWLockExclusive(v5 + 2);
    }
  }
  v12 = *(void **)(a1 + 104);
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  LOBYTE(v13) = CrmRegistrationReadyQueueRemove(*(_QWORD *)(a1 + 40), a1, 0LL);
  if ( *(_DWORD *)(a1 + 128) || *(_DWORD *)(a1 + 132) )
    LOBYTE(v13) = NtDeleteWnfStateName(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 124) )
    LOBYTE(v13) = NtDeleteWnfStateName(a1 + 120);
  v14 = *(void **)(a1 + 200);
  if ( v14 )
    LOBYTE(v13) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  v15 = *(void **)(a1 + 208);
  if ( v15 )
    LOBYTE(v13) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( *(_DWORD *)(a1 + 136) )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      LOBYTE(v13) = tlgKeywordOn((__int64)&dword_1800B3250, 0x400000000004LL);
      if ( (_BYTE)v13 )
      {
        v28 = *(_QWORD *)(a1 + 48);
        v34 = &v28;
        v22 = *(_DWORD *)(a1 + 60);
        v36 = &v22;
        v38 = &v23;
        v24 = *(_DWORD *)(a1 + 64);
        v40 = &v24;
        v42 = &v29;
        v32 = &Uuid;
        v33 = 16LL;
        v35 = 8LL;
        v37 = 4LL;
        v23 = v17;
        v39 = 4LL;
        v41 = 4LL;
        v29 = 0x2000000LL;
        v43 = 8LL;
        LOBYTE(v13) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B3250, byte_1800A2DDB, 0LL, 0LL, 8u, &v31);
      }
    }
  }
  else if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 4) != 0 )
  {
    v13 = qword_1800B3268 & 4;
    if ( v13 == qword_1800B3268 )
    {
      v30 = *(_QWORD *)(a1 + 48);
      v47 = &v30;
      v25 = *(_DWORD *)(a1 + 60);
      v49 = &v25;
      v51 = &v26;
      v27 = *(_DWORD *)(a1 + 64);
      v53 = &v27;
      v45 = &Uuid;
      v46 = 16LL;
      v48 = 8LL;
      v50 = 4LL;
      v26 = 0;
      v52 = 4LL;
      v54 = 4LL;
      LOBYTE(v13) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800B3250,
                      (unsigned __int8 *)dword_1800A2D17,
                      0LL,
                      0LL,
                      7u,
                      &v44);
    }
  }
  return v13;
}
