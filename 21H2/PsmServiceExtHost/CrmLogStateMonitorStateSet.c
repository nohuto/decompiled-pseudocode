/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x18002BBD4
 * Callers:
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x18002B6E0 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x18002B824 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002B900 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002BA70 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18002BD88 (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStateSet(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int16 v4; // ax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int16 v8; // r14
  SIZE_T v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // r9d
  const int *v13; // rdx
  ULONG v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  int *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  _DWORD *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  _DWORD v28[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _DWORD *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  _DWORD v34[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]

  v2 = *a1;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  v5 = v4;
  v7 = v6 + 16;
  v8 = v4;
  v9 = RtlCompareMemory((const void *)(v6 + 16), (const void *)v6, v4);
  LODWORD(v10) = CrmLogStateMonitorIsTelemetryState(v2, v9 != v5);
  if ( (_DWORD)v10 && *(_DWORD *)(a2 + 48) == v12 && v11 )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_1800B3250, 0x400000000008LL);
      if ( (_BYTE)v10 )
      {
        v18 = 0x2000000LL;
        v21 = &Uuid;
        v13 = &dword_1800A355C;
        v38 = 8LL;
        v23 = (int *)&v16;
        v25 = v28;
        v19 = *(_QWORD *)(a2 + 40);
        v29 = &v19;
        v31 = v34;
        v17 = *(_QWORD *)(a2 + 32);
        v35 = &v17;
        v37 = &v18;
        v15 = 11;
LABEL_10:
        v28[0] = v8;
        v34[0] = v8;
        v27 = v7;
        v26 = 2LL;
        v24 = 4LL;
        v16 = v2;
        v22 = 16LL;
        v28[1] = v12;
        v30 = 8LL;
        v32 = 2LL;
        v33 = a2;
        v34[1] = v12;
        v36 = 8LL;
        LOBYTE(v10) = tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3250, (int)v13, 0, v12, v15, &v20);
      }
    }
  }
  else if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 8) != 0 )
  {
    v10 = qword_1800B3268 & 8;
    if ( v10 == qword_1800B3268 )
    {
      v21 = &Uuid;
      v13 = (const int *)&unk_1800A3290;
      v23 = (int *)&v16;
      v25 = v28;
      v18 = *(_QWORD *)(a2 + 40);
      v29 = &v18;
      v31 = v34;
      v17 = *(_QWORD *)(a2 + 32);
      v35 = &v17;
      v15 = 10;
      goto LABEL_10;
    }
  }
  return v10;
}
