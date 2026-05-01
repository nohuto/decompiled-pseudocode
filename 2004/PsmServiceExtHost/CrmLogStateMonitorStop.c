/*
 * XREFs of CrmLogStateMonitorStop @ 0x18003639C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180036360 (CrmStateMonitorCleanup.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18002BC18 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(int *a1)
{
  unsigned int v1; // r10d
  unsigned __int16 v2; // bx
  __int64 v3; // rdi
  int IsTelemetryState; // eax
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // r11
  int v8; // r10d
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-A0h] BYREF
  UUID *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  _DWORD *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  _DWORD v28[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  _DWORD *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 v33; // [rsp+E8h] [rbp-20h]
  _DWORD v34[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+118h] [rbp+10h] BYREF
  UUID *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  _DWORD *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  __int64 v46; // [rsp+168h] [rbp+60h]
  _DWORD v47[2]; // [rsp+170h] [rbp+68h] BYREF
  __int64 *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  _DWORD *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  __int64 v52; // [rsp+198h] [rbp+90h]
  _DWORD v53[2]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]

  v2 = CrmStateMonitorStateSizeGet(*a1);
  v3 = MEMORY[0x7FFE0008];
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v1);
  if ( IsTelemetryState )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800B3250, 0x400000000008LL);
      if ( (_BYTE)IsTelemetryState )
      {
        v10 = *(_QWORD *)(v9 + 40);
        v21 = &Uuid;
        v23 = &v13;
        v25 = v28;
        v15 = *(_QWORD *)(v9 + 48);
        v29 = &v15;
        v31 = v34;
        v35 = &v16;
        v37 = &v17;
        v27 = v10;
        v33 = v10;
        v22 = 16LL;
        v13 = v8;
        v24 = 4LL;
        v26 = 2LL;
        v28[0] = v2;
        v28[1] = 0;
        v30 = 8LL;
        v32 = 2LL;
        v34[0] = v2;
        v34[1] = 0;
        v16 = v3;
        v36 = 8LL;
        v17 = 0x2000000LL;
        v38 = 8LL;
        LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer(
                                     (__int64)&dword_1800B3250,
                                     byte_1800A325C,
                                     0LL,
                                     0LL,
                                     0xBu,
                                     &v20);
      }
    }
  }
  else if ( (unsigned int)dword_1800B3250 > 5 )
  {
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800B3250, 8LL);
    if ( (_BYTE)IsTelemetryState )
    {
      v11 = *(_QWORD *)(v7 + 40);
      v40 = &Uuid;
      v42 = &v14;
      v44 = v47;
      v18 = *(_QWORD *)(v7 + 48);
      v48 = &v18;
      v50 = v53;
      v54 = &v19;
      v46 = v11;
      v52 = v11;
      v41 = 16LL;
      v14 = v6;
      v43 = 4LL;
      v45 = 2LL;
      v47[0] = v2;
      v47[1] = 0;
      v49 = v5;
      v51 = 2LL;
      v53[0] = v2;
      v53[1] = 0;
      v19 = v3;
      v55 = v5;
      LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer(
                                   (__int64)&dword_1800B3250,
                                   (unsigned __int8 *)dword_1800A3454,
                                   0LL,
                                   0LL,
                                   0xAu,
                                   &v39);
    }
  }
  return IsTelemetryState;
}
