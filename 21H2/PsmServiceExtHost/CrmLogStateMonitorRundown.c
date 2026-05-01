/*
 * XREFs of CrmLogStateMonitorRundown @ 0x18003B0F0
 * Callers:
 *     CrmGlobalsRundown @ 0x18003AFE0 (CrmGlobalsRundown.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18002BD88 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BDB0 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorRundown(__int64 a1)
{
  unsigned int v2; // r9d
  int IsTelemetryState; // eax
  int v4; // r9d
  unsigned __int16 v5; // r10
  unsigned __int8 *v6; // rdx
  __int64 v7; // rdx
  ULONG v9; // [rsp+28h] [rbp-E0h]
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+98h] [rbp-70h] BYREF
  UUID *v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  __int64 *v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  _DWORD *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  _BYTE *v25; // [rsp+E8h] [rbp-20h]
  _DWORD v26[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  _DWORD *v29; // [rsp+108h] [rbp+0h]
  __int64 v30; // [rsp+110h] [rbp+8h]
  _BYTE *v31; // [rsp+118h] [rbp+10h]
  _DWORD v32[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v33; // [rsp+128h] [rbp+20h]
  __int64 v34; // [rsp+130h] [rbp+28h]
  __int64 *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  CrmStateMonitorLogDataGet((const void **)a1, (__int64)v14, 0LL);
  *(_DWORD *)(a1 + 16) = 0;
  RtlReleaseSRWLockExclusive(a1 + 8);
  CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v2);
  if ( IsTelemetryState )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800B3250, 0x400000000008LL);
      if ( (_BYTE)IsTelemetryState )
      {
        v28 = 8LL;
        v19 = &Uuid;
        v6 = (unsigned __int8 *)&dword_1800A3374;
        v34 = 8LL;
        v21 = &v10;
        v23 = v26;
        v25 = v15;
        v13 = v17;
        v27 = &v13;
        v29 = v32;
        v31 = v14;
        v11 = v16;
        v33 = &v11;
        v35 = &v12;
        v9 = 11;
        v12 = 0x2000000LL;
        v36 = 8LL;
LABEL_5:
        v26[0] = v5;
        v32[0] = v5;
        LODWORD(v10) = v4;
        v20 = 16LL;
        v24 = 2LL;
        v22 = 4LL;
        v26[1] = 0;
        v30 = 2LL;
        v32[1] = 0;
        LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer(
                                     (__int64)&dword_1800B3250,
                                     v6,
                                     0LL,
                                     0LL,
                                     v9,
                                     &v18);
      }
    }
  }
  else if ( (unsigned int)dword_1800B3250 > 5 )
  {
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800B3250, 8LL);
    if ( (_BYTE)IsTelemetryState )
    {
      v28 = v7;
      v19 = &Uuid;
      v21 = &v10;
      v23 = v26;
      v25 = v15;
      v12 = v17;
      v27 = &v12;
      v29 = v32;
      v31 = v14;
      v11 = v16;
      v33 = &v11;
      v34 = v7;
      v6 = (unsigned __int8 *)&unk_1800A3484;
      v9 = 10;
      goto LABEL_5;
    }
  }
  return IsTelemetryState;
}
