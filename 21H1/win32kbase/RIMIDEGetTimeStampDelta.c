/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C0170CF0
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01713E0 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0124A64 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C0170C68 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C01722E4 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C0172390 (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_SF_didi @ 0x1C0172CA4 (WPP_RECORDER_SF_didi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  int v7; // edx
  int v8; // esi
  unsigned int v9; // r15d
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r11
  unsigned int v19; // edi
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // r9d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 64);
  v5 = a1 + 288;
  v6 = *(_QWORD *)(a2 + 80);
  v7 = 200;
  v8 = 1;
  if ( !a1 )
    v5 = 200LL;
  v9 = 1;
  if ( (*(_DWORD *)v5 & 0x80u) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 472);
    v12 = a1 + 568;
    if ( !a1 )
      v12 = 480LL;
    v13 = *(_DWORD *)(v11 + 28);
    v14 = *(_QWORD *)(v11 + 48);
    v27 = v13;
    v15 = *(_QWORD *)v12;
    if ( !*(_DWORD *)(*(_QWORD *)v12 + 952LL) )
    {
      *(_QWORD *)(v11 + 20) = 0LL;
      *(_DWORD *)(v11 + 28) = 0;
      *(_DWORD *)(v11 + 36) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)(v11 + 56) = 0;
    }
    if ( v4 && v6 || *(_DWORD *)(v11 + 20) && v6 || (v16 = *(_QWORD *)(v11 + 40)) != 0 && v4 )
    {
      v9 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(a1, v13, (_DWORD)a3, a4);
      return v9;
    }
    if ( v6 || v16 )
    {
      v26 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v6,
                            v14,
                            *(_QWORD *)(v15 + 752),
                            *(_DWORD *)(v15 + 952) == 0,
                            *(_DWORD *)(v11 + 56)) )
      {
        v9 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            (__int64)gRimLog,
            2u,
            1u,
            0x3Bu,
            (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
            v6,
            v14);
        return v9;
      }
      v24 = *(_QWORD *)(v11 + 40);
      if ( v6 <= v24 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
        v24 = *(_QWORD *)(v11 + 40);
      }
      v25 = 10000 * (v6 - v24) / gliQpcFreq.QuadPart;
      v21 = 10000 * (v6 - v24) % gliQpcFreq.QuadPart;
      v19 = v25;
      if ( !*(_DWORD *)(v15 + 952) )
      {
        *(_QWORD *)(v11 + 40) = v6;
        goto LABEL_39;
      }
      if ( (_DWORD)v25 != *(_DWORD *)(v11 + 32) )
        goto LABEL_44;
      v9 = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v23 = 61;
    }
    else
    {
      v26 = 1;
      if ( !(unsigned int)RIMIDEValidateInjectionTime(
                            v4,
                            v13,
                            *(_DWORD *)(v15 + 744),
                            *(_DWORD *)(v15 + 952) == 0,
                            *(_DWORD *)(v11 + 36)) )
      {
        v9 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dd(
            (__int64)gRimLog,
            2u,
            1u,
            0x3Au,
            (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
            v4,
            v17);
        return v9;
      }
      v19 = 10 * (v4 - *(_DWORD *)(v11 + 20));
      v20 = RIMIDEGetQpcBasedTouchStackTime(v18);
      if ( !*(_DWORD *)(v15 + 952) )
      {
        *(_DWORD *)(v11 + 20) = v4;
        *(_DWORD *)(v11 + 24) = v20;
LABEL_39:
        v19 = 0;
        goto LABEL_44;
      }
      if ( v19 )
        goto LABEL_44;
      v22 = *(_DWORD *)(v11 + 32);
      v19 = v20 - *(_DWORD *)(v11 + 24);
      if ( v19 > v22 )
        goto LABEL_44;
      if ( v22 - v19 < 5 )
      {
        v19 = v22 + 1;
LABEL_44:
        *(_DWORD *)(v11 + 32) = v19;
        if ( v26 )
        {
          if ( !v27 || v4 )
            v8 = 0;
          *(_DWORD *)(v11 + 36) = v8;
          *(_DWORD *)(v11 + 28) = v4;
        }
        else
        {
          if ( !v14 || v6 )
            v8 = 0;
          *(_DWORD *)(v11 + 56) = v8;
          *(_QWORD *)(v11 + 48) = v6;
        }
        *a3 = v19;
        return v9;
      }
      v9 = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v23 = 60;
    }
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, v23, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 56, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
  }
  return 0LL;
}
