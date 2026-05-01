/*
 * XREFs of CrmSrvActivityStop @ 0x18002F128
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x18002EAF0 (CrmRpcSrvActivityStop.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmLogSrvActivityStopStop @ 0x18002EE8C (CrmLogSrvActivityStopStop.c)
 *     CrmRegistrationFindActivity @ 0x18002F2E8 (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x18002FAA4 (CrmActivityDereference.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

int __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  int v6; // ebx
  int v7; // r14d
  __int64 Activity; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int result; // eax
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-60h] BYREF
  UUID *v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v19 = 0;
    v17 = &Uuid;
    v18 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A2C24,
      0LL,
      0LL,
      3u,
      &v16);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v7 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(Activity + 72);
    *(_DWORD *)(Activity + 80) = GetCurrentThreadId();
    v9 = *(_DWORD *)(Activity + 136);
    if ( v9 )
    {
      RtlQueryUnbiasedInterruptTime(&v15);
      v10 = v15;
      v11 = v15 - *(_QWORD *)(Activity + 168);
      if ( *(_DWORD *)(Activity + 92) == *(_DWORD *)(Activity + 88) )
        *(_QWORD *)(Activity + 176) += v11;
      else
        *(_QWORD *)(Activity + 184) += v11;
      v9 = *(_DWORD *)(Activity + 136);
      *(_QWORD *)(Activity + 168) = v10;
    }
    v3 = *(_QWORD *)(Activity + 192);
    v12 = v9 - 1;
    v6 = *(_DWORD *)(Activity + 160);
    *(_DWORD *)(Activity + 136) = v12;
    if ( !v12 )
    {
      *(_QWORD *)(Activity + 192) = -1LL;
      *(_DWORD *)(Activity + 160) = 3;
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741811;
  }
  result = CrmLogSrvActivityStopStop(a2, a1, Activity, v6, v3, v13);
  if ( v2 )
  {
    *(_DWORD *)(Activity + 80) = 0;
    result = RtlReleaseSRWLockExclusive(Activity + 72);
  }
  if ( Activity )
    result = CrmActivityDereference(Activity);
  if ( v7 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
