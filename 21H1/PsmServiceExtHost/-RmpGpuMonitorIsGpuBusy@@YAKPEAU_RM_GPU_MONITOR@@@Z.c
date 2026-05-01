/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18007455C
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800746B0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CrmStateMonitorGPUUsageQuery @ 0x18002BF58 (CrmStateMonitorGPUUsageQuery.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  BOOL v2; // ebx
  unsigned __int8 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // r9
  int v11; // r10d
  bool v13; // [rsp+38h] [rbp-29h] BYREF
  char v14; // [rsp+39h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  char *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  bool *v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  if ( CrmStateMonitorGPUUsageQuery(&v15) < 0
    || (RtlQueryUnbiasedInterruptTime(&v16), v3 = 100, v4 = v16 - *((_QWORD *)a1 + 3), v16 == *((_QWORD *)a1 + 3)) )
  {
    v2 = 1;
  }
  else
  {
    v5 = v15;
    v6 = v15;
    *((_QWORD *)a1 + 3) = v16;
    v7 = v6 - *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = v5;
    v8 = 100 * v7 / v4;
    if ( v8 < 0x64 )
      v3 = v8;
    v2 = v3 > *((_BYTE *)a1 + 48);
  }
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v24 = &v13;
    v21 = &v14;
    v18 = &v15;
    v14 = v10;
    v13 = v2;
    LODWORD(v15) = v11;
    v25 = 1;
    v22 = 1;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_18009DB2A, 0LL, 0LL, 5u, &v17);
  }
  return v2;
}
