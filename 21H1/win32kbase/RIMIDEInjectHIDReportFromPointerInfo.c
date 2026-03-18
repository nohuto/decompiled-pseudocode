/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01713E0
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0170AC4 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0170CF0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C017106C (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0173490 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  int v5; // ebx
  _WORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // r11d
  struct tagINPUT_INJECTION_VALUE *v27; // r10
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // r9d
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // r13
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v55[2]; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-A1h]
  __int64 v57; // [rsp+48h] [rbp-99h]
  struct tagINPUT_INJECTION_VALUE *v58[3]; // [rsp+50h] [rbp-91h] BYREF
  __int128 v59; // [rsp+68h] [rbp-79h]
  __int128 v60; // [rsp+78h] [rbp-69h]
  __int128 v61; // [rsp+88h] [rbp-59h]
  __int128 v62; // [rsp+98h] [rbp-49h]
  __int128 v63; // [rsp+A8h] [rbp-39h]
  __int128 v64; // [rsp+B8h] [rbp-29h]
  __int128 v65; // [rsp+C8h] [rbp-19h]
  __int128 v66; // [rsp+D8h] [rbp-9h]
  __int64 v67; // [rsp+E8h] [rbp+7h]
  unsigned int v70; // [rsp+150h] [rbp+6Fh]
  unsigned int v71; // [rsp+158h] [rbp+77h] BYREF
  unsigned int v72; // [rsp+160h] [rbp+7Fh]

  v71 = a3;
  v3 = a3;
  v58[0] = 0LL;
  v4 = a2;
  v55[0] = 0;
  v5 = 0;
  v72 = 0;
  v6 = 0LL;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (unsigned int)v3 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)v4, v58, v55) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 45, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    goto LABEL_69;
  }
  v9 = v55[0];
  v10 = v3 * v55[0];
  v56 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 36, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v3);
    }
LABEL_69:
    v5 = -1073741811;
    goto LABEL_70;
  }
  if ( *(_DWORD *)v4 == 2 )
  {
    v11 = v55[0] - 2;
  }
  else
  {
    if ( *(_DWORD *)v4 != 3 )
    {
      LODWORD(v57) = v55[0];
      goto LABEL_13;
    }
    v11 = v55[0] - 1;
  }
  LODWORD(v57) = v11;
LABEL_13:
  v6 = Win32AllocPoolZInit(12LL * (unsigned int)v10, 0x6A6E6952u);
  if ( !v6 )
  {
    v5 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 37, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, 23);
    }
  }
  if ( v9 > 0xC )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  if ( v5 < 0 )
    goto LABEL_70;
  v8 = v71;
  v14 = 0LL;
  v55[0] = 0;
  if ( !v71 )
  {
LABEL_31:
    if ( v5 < 0 )
      goto LABEL_70;
    if ( *(_DWORD *)v4 != 2 )
      goto LABEL_48;
    v31 = v72;
    v32 = v56;
    v13 = v72 + 1;
    if ( v72 + 1 > (unsigned int)v56 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v32, 1, 39, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
        v32 = v56;
        v31 = v72;
      }
      v5 = -1073741811;
    }
    else
    {
      v33 = 3LL * v72;
      v6[2 * v33 + 4] = 0;
      v31 = v13;
      *(_DWORD *)&v6[2 * v33] = 5505037;
      *(_DWORD *)&v6[2 * v33 + 2] = v8;
      v72 = v13;
    }
    if ( v5 < 0 )
      goto LABEL_48;
    if ( v31 + 1 > v32 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        v5 = -1073741811;
LABEL_48:
        v7 = v72;
        v41 = v56;
LABEL_49:
        if ( *(_DWORD *)v4 == 3 )
        {
          v70 = v7 + 1;
          if ( (int)v7 + 1 <= v41 )
          {
            v43 = *(_OWORD *)(v4 + 8);
            v44 = *(_OWORD *)(v4 + 24);
            v71 = 0;
            *(_OWORD *)&v58[1] = v43;
            v45 = *(_OWORD *)(v4 + 40);
            v59 = v44;
            v46 = *(_OWORD *)(v4 + 56);
            v60 = v45;
            v47 = *(_OWORD *)(v4 + 72);
            v61 = v46;
            v48 = *(_OWORD *)(v4 + 88);
            v49 = a1;
            v62 = v47;
            v63 = v48;
            v50 = RIMIDEGetTimeStampDelta(a1, (__int64)&v58[1], &v71, v13);
            v7 = 0LL;
            if ( v50 )
            {
              v51 = 3LL * v72;
              *(_DWORD *)&v6[2 * v51 + 2] = v71;
              v52 = v70;
              *(_DWORD *)&v6[2 * v51] = 5636109;
              v6[2 * v51 + 4] = 0;
LABEL_61:
              if ( v5 >= 0 )
              {
                v53 = RIMIDEInjectDeviceInput(v49, (__int64)v6, v52);
                v5 = v53;
                if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v7) = 2;
                  WPP_RECORDER_SF_d(
                    (_DWORD)gRimLog,
                    v7,
                    1,
                    44,
                    (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
                    v53);
                }
              }
              goto LABEL_70;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 2;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 42, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
            }
            v5 = -1073741811;
LABEL_60:
            v52 = v56;
            goto LABEL_61;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 2;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 43, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
          }
          v5 = -1073741811;
        }
        v49 = a1;
        goto LABEL_60;
      }
      v42 = 41;
    }
    else
    {
      v34 = *(_OWORD *)(v4 + 8);
      v71 = 0;
      v35 = *(_OWORD *)(v4 + 24);
      *(_OWORD *)&v58[1] = v34;
      v36 = *(_OWORD *)(v4 + 40);
      v59 = v35;
      v37 = *(_OWORD *)(v4 + 56);
      v60 = v36;
      v38 = *(_OWORD *)(v4 + 72);
      v61 = v37;
      v39 = *(_OWORD *)(v4 + 88);
      v62 = v38;
      v63 = v39;
      if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v58[1], &v71, v13) )
      {
        v7 = v72;
        v40 = 3LL * v72;
        *(_DWORD *)&v6[2 * v40 + 2] = v71;
        v6[2 * v40 + 4] = 0;
        v41 = v7 + 1;
        v56 = (unsigned int)(v7 + 1);
        *(_DWORD *)&v6[2 * v40] = 5636109;
        goto LABEL_49;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v42 = 40;
    }
    LOBYTE(v32) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v32, 1, v42, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    goto LABEL_47;
  }
  while ( v5 >= 0 )
  {
    v15 = v4 + 152 * v14;
    v16 = *(_OWORD *)(v15 + 16);
    *(_OWORD *)&v58[1] = *(_OWORD *)v15;
    v17 = *(_OWORD *)(v15 + 32);
    v59 = v16;
    v18 = *(_OWORD *)(v15 + 48);
    v60 = v17;
    v19 = *(_OWORD *)(v15 + 64);
    v61 = v18;
    v20 = *(_OWORD *)(v15 + 80);
    v62 = v19;
    v21 = *(_OWORD *)(v15 + 96);
    v63 = v20;
    v22 = *(_OWORD *)(v15 + 112);
    v64 = v21;
    v23 = *(_OWORD *)(v15 + 128);
    v24 = *(_QWORD *)(v15 + 144);
    v65 = v22;
    v66 = v23;
    v67 = v24;
    if ( (unsigned int)RIMIDEFillContactUsageValues((_DWORD *)v58[0], v57, &v58[1]) )
    {
      v25 = v57;
      v26 = 0;
      if ( (_DWORD)v57 )
      {
        v27 = v58[0];
        v28 = v56;
        v7 = v72;
        v13 = v55[0];
        do
        {
          if ( (unsigned int)v7 >= v28 )
            break;
          ++v26;
          v29 = (unsigned int)v7;
          v7 = (unsigned int)(v7 + 1);
          v30 = 3 * v29;
          *(_QWORD *)&v6[2 * v30] = *(_QWORD *)v27;
          *(_DWORD *)&v6[2 * v30 + 4] = *((_DWORD *)v27 + 2);
          v6[2 * v30 + 4] = v13 + 1;
          *((_DWORD *)v27 + 1) = 0;
          v27 = (struct tagINPUT_INJECTION_VALUE *)((char *)v27 + 12);
        }
        while ( v26 < v25 );
        v4 = a2;
        v72 = v7;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 38, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
      v5 = -1073741811;
    }
    v8 = v71;
    v14 = v55[0] + 1;
    v55[0] = v14;
    if ( (unsigned int)v14 >= v71 )
      goto LABEL_31;
  }
LABEL_70:
  if ( v58[0] )
    Win32FreePool((__int64)v58[0], v7, v8);
  if ( v6 )
    Win32FreePool((__int64)v6, v7, v8);
  return (unsigned int)v5;
}
