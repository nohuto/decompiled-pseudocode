/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C016A9A0
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C016B090 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C011E3D4 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C016A918 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C016BF94 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C016C040 (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_SF_didi @ 0x1C016C954 (WPP_RECORDER_SF_didi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+98h] [rbp+10h]

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
    v30 = v13;
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
      v29 = 0;
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
      v27 = *(_QWORD *)(v11 + 40);
      if ( v6 <= v27 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v24, v25, v26);
        v27 = *(_QWORD *)(v11 + 40);
      }
      v28 = 10000 * (v6 - v27) / gliQpcFreq.QuadPart;
      v21 = 10000 * (v6 - v27) % gliQpcFreq.QuadPart;
      v19 = v28;
      if ( !*(_DWORD *)(v15 + 952) )
      {
        *(_QWORD *)(v11 + 40) = v6;
        goto LABEL_39;
      }
      if ( (_DWORD)v28 != *(_DWORD *)(v11 + 32) )
        goto LABEL_44;
      v9 = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v23 = 61;
    }
    else
    {
      v29 = 1;
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
        if ( v29 )
        {
          if ( !v30 || v4 )
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
