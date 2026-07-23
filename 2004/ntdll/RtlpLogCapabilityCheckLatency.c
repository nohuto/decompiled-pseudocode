/*
 * XREFs of RtlpLogCapabilityCheckLatency @ 0x180042354
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x180084EF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int16 __fastcall RtlpLogCapabilityCheckLatency(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  struct _PEB *v6; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  char v16; // [rsp+38h] [rbp-49h] BYREF
  char v17; // [rsp+39h] [rbp-48h] BYREF
  char v18; // [rsp+3Ah] [rbp-47h] BYREF
  char v19; // [rsp+3Bh] [rbp-46h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+74h] [rbp-Dh]
  char *v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+84h] [rbp+3h]
  char *v28; // [rsp+88h] [rbp+7h]
  int v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+94h] [rbp+13h]
  char *v31; // [rsp+98h] [rbp+17h]
  int v32; // [rsp+A0h] [rbp+1Fh]
  int v33; // [rsp+A4h] [rbp+23h]
  char *v34; // [rsp+A8h] [rbp+27h]
  int v35; // [rsp+B0h] [rbp+2Fh]
  int v36; // [rsp+B4h] [rbp+33h]

  v6 = NtCurrentPeb();
  if ( v6->ProcessHeap )
  {
    LOWORD(v6) = RtlRunOnceExecuteOnce(&RtlpCapChkTelemetryRunOnceCtx, RtlpCapChkTelemetryRunOnce, 0LL, 0LL);
    if ( a1 )
    {
      if ( a2 )
      {
        if ( *a1 )
        {
          if ( *a2 )
          {
            if ( RtlpPerformanceCounterFrequency )
            {
              LOWORD(v6) = _InterlockedDecrement16(&TelemetryEventThrottle);
              if ( !(_WORD)v6 )
              {
                if ( (unsigned int)dword_180164590 > 5
                  && (unsigned __int8)tlgKeywordOn(&dword_180164590, 0x200000000000LL) )
                {
                  v14 = *a2 - *a1;
                  v24 = 0;
                  v27 = 0;
                  v30 = 0;
                  v33 = 0;
                  v36 = 0;
                  v23 = 8;
                  v16 = a3;
                  v17 = a4;
                  v20 = 1000000 * v14 / RtlpPerformanceCounterFrequency;
                  v22 = &v20;
                  v25 = &v16;
                  v28 = &v17;
                  v18 = a5;
                  v31 = &v18;
                  v19 = a6;
                  v34 = &v19;
                  v26 = 1;
                  v29 = 1;
                  v32 = 1;
                  v35 = 1;
                  tlgWriteTransfer_EtwEventWriteTransfer(v11, (int)&dword_180130403, v12, v13, 7u, &v21);
                }
                LOWORD(v6) = TelemetryEventThrottle;
                TelemetryEventThrottle = 100;
              }
            }
          }
        }
      }
    }
  }
  return (__int16)v6;
}
