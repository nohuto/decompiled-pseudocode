/*
 * XREFs of _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

__int16 __fastcall RtlpLogCapabilityCheckLatency(_DWORD *a1, _DWORD *a2, char a3, char a4, char a5, char a6)
{
  struct _PEB *v6; // eax
  __int64 v9; // kr00_8
  __int64 v11; // [esp+10h] [ebp-88h] BYREF
  char v12; // [esp+1Ch] [ebp-7Ch] BYREF
  char v13; // [esp+1Dh] [ebp-7Bh] BYREF
  char v14; // [esp+1Eh] [ebp-7Ah] BYREF
  char v15; // [esp+1Fh] [ebp-79h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+20h] [ebp-78h] BYREF
  __int64 *v17; // [esp+40h] [ebp-58h]
  int v18; // [esp+44h] [ebp-54h]
  int v19; // [esp+48h] [ebp-50h]
  int v20; // [esp+4Ch] [ebp-4Ch]
  char *v21; // [esp+50h] [ebp-48h]
  int v22; // [esp+54h] [ebp-44h]
  int v23; // [esp+58h] [ebp-40h]
  int v24; // [esp+5Ch] [ebp-3Ch]
  char *v25; // [esp+60h] [ebp-38h]
  int v26; // [esp+64h] [ebp-34h]
  int v27; // [esp+68h] [ebp-30h]
  int v28; // [esp+6Ch] [ebp-2Ch]
  char *v29; // [esp+70h] [ebp-28h]
  int v30; // [esp+74h] [ebp-24h]
  int v31; // [esp+78h] [ebp-20h]
  int v32; // [esp+7Ch] [ebp-1Ch]
  char *v33; // [esp+80h] [ebp-18h]
  int v34; // [esp+84h] [ebp-14h]
  int v35; // [esp+88h] [ebp-10h]
  int v36; // [esp+8Ch] [ebp-Ch]

  v6 = NtCurrentPeb();
  if ( v6->ProcessHeap )
  {
    LOWORD(v6) = RtlRunOnceExecuteOnce(&RtlpCapChkTelemetryRunOnceCtx, RtlpCapChkTelemetryRunOnce, 0, 0);
    if ( a1 )
    {
      if ( a2 )
      {
        v6 = (struct _PEB *)(a1[1] | *a1);
        if ( *(_QWORD *)a1 )
        {
          v6 = (struct _PEB *)(a2[1] | *a2);
          if ( *(_QWORD *)a2 )
          {
            LOWORD(v6) = WORD2(RtlpPerformanceCounterFrequency) | RtlpPerformanceCounterFrequency;
            if ( RtlpPerformanceCounterFrequency )
            {
              LOWORD(v6) = _InterlockedDecrement16(&TelemetryEventThrottle);
              if ( !(_WORD)v6 )
              {
                if ( (unsigned int)dword_4B3A3430 > 5 && _tlgKeywordOn(&dword_4B3A3430, 0x200000000000LL) )
                {
                  v9 = *(_QWORD *)a2 - *(_QWORD *)a1;
                  v11 = 1000000 * v9 / RtlpPerformanceCounterFrequency;
                  v17 = &v11;
                  v15 = a3;
                  v21 = &v15;
                  v14 = a4;
                  v25 = &v14;
                  v13 = a5;
                  v29 = &v13;
                  v12 = a6;
                  v33 = &v12;
                  v18 = 0;
                  v23 = 1;
                  v27 = 1;
                  v31 = 1;
                  v35 = 1;
                  v19 = 8;
                  v20 = 0;
                  v22 = 0;
                  v24 = 0;
                  v26 = 0;
                  v28 = 0;
                  v30 = 0;
                  v32 = 0;
                  v34 = 0;
                  v36 = 0;
                  _tlgWriteTransfer_EtwEventWriteTransfer(v9, v9, 7u, &UserData);
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
