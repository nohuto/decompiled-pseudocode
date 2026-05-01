/*
 * XREFs of CrmSrvActivityFree @ 0x18002F958
 * Callers:
 *     CrmRpcSrvActivityFree @ 0x18002F2D0 (CrmRpcSrvActivityFree.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmRegistrationFindActivity @ 0x18002F2E8 (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x18002FAA4 (CrmActivityDereference.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

int __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 *Activity; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  int v13; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-59h] BYREF
  UUID *v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  __int64 *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  int *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  int *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  __int64 *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]
  __int64 *v28; // [rsp+C0h] [rbp+17h]
  __int64 v29; // [rsp+C8h] [rbp+1Fh]

  v4 = 1001;
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v18 = &Uuid;
    v19 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A2BFA,
      0LL,
      0LL,
      3u,
      &v17);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = CrmRegistrationFindActivity(a2, a1);
  v6 = Activity;
  if ( Activity )
  {
    v4 = *((_DWORD *)Activity + 14);
    v7 = *Activity;
    if ( *(__int64 **)(v7 + 8) != v6 || (v8 = (__int64 *)v6[1], (__int64 *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
    if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 2) != 0 && (qword_1800B3268 & 2) == qword_1800B3268 )
    {
      v19 = 16LL;
      v18 = &Uuid;
      v15 = *(_QWORD *)(a2 + 16);
      v21 = 8LL;
      v20 = &v15;
      v13 = *((_DWORD *)v6 + 15);
      v22 = &v13;
      v23 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B3250,
        (unsigned __int8 *)dword_1800A3022,
        0LL,
        0LL,
        5u,
        &v17);
    }
    CrmActivityDereference(v6);
    *(_DWORD *)(a2 + 8) = 0;
    LODWORD(v9) = RtlReleaseSRWLockExclusive(a2);
    v10 = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
    v10 = -1073741811;
    LODWORD(v9) = RtlReleaseSRWLockExclusive(a2);
  }
  if ( v6 )
    LODWORD(v9) = CrmActivityDereference(v6);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 )
  {
    v9 = qword_1800B3268 & 1;
    if ( v9 == qword_1800B3268 )
    {
      v19 = 16LL;
      v18 = &Uuid;
      v13 = *(_DWORD *)(a2 + 24);
      v27 = 8LL;
      v20 = (__int64 *)&v13;
      v21 = 4LL;
      v22 = (int *)(a2 + 72);
      v11 = *(unsigned __int8 *)(a2 + 73);
      v14 = v4;
      v25 = 4LL;
      v16 = a1;
      v23 = (unsigned int)(4 * v11 + 8);
      v24 = &v14;
      v26 = &v16;
      v28 = &v15;
      LODWORD(v15) = v10;
      v29 = 4LL;
      LODWORD(v9) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800B3250,
                      (unsigned __int8 *)dword_1800A2870,
                      0LL,
                      0LL,
                      8u,
                      &v17);
    }
  }
  return v9;
}
