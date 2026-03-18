/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168B30
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168214 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0168440 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01687BC (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016ABE0 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r13
  int v6; // ebx
  _WORD *v7; // rdi
  int v8; // edx
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // r11d
  struct tagINPUT_INJECTION_VALUE *v31; // r10
  unsigned int v32; // r13d
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  unsigned int v45; // edx
  __int64 v46; // rcx
  unsigned int v47; // eax
  int v48; // r9d
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // r13
  int v56; // eax
  int v57; // edx
  __int64 v58; // rcx
  unsigned int v59; // eax
  int v60; // eax
  int v61; // edx
  unsigned int v63[2]; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-A1h]
  __int64 v65; // [rsp+48h] [rbp-99h]
  struct tagINPUT_INJECTION_VALUE *v66[3]; // [rsp+50h] [rbp-91h] BYREF
  __int128 v67; // [rsp+68h] [rbp-79h]
  __int128 v68; // [rsp+78h] [rbp-69h]
  __int128 v69; // [rsp+88h] [rbp-59h]
  __int128 v70; // [rsp+98h] [rbp-49h]
  __int128 v71; // [rsp+A8h] [rbp-39h]
  __int128 v72; // [rsp+B8h] [rbp-29h]
  __int128 v73; // [rsp+C8h] [rbp-19h]
  __int128 v74; // [rsp+D8h] [rbp-9h]
  __int64 v75; // [rsp+E8h] [rbp+7h]
  unsigned int v78; // [rsp+150h] [rbp+6Fh]
  unsigned int v79; // [rsp+158h] [rbp+77h] BYREF
  unsigned int v80; // [rsp+160h] [rbp+7Fh]

  v79 = a3;
  v4 = (unsigned int)a3;
  v66[0] = 0LL;
  v5 = a2;
  v63[0] = 0;
  v6 = 0;
  v80 = 0;
  v7 = 0LL;
  if ( !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (unsigned int)v4 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)v5, v66, v63) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 45, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    goto LABEL_69;
  }
  v9 = v63[0];
  v10 = v4 * v63[0];
  v64 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, 36, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v4);
    }
LABEL_69:
    v6 = -1073741811;
    goto LABEL_70;
  }
  if ( *(_DWORD *)v5 == 2 )
  {
    v11 = v63[0] - 2;
  }
  else
  {
    if ( *(_DWORD *)v5 != 3 )
    {
      LODWORD(v65) = v63[0];
      goto LABEL_13;
    }
    v11 = v63[0] - 1;
  }
  LODWORD(v65) = v11;
LABEL_13:
  v7 = Win32AllocPoolZInit(12LL * (unsigned int)v10, 0x6A6E6952u);
  if ( !v7 )
  {
    v6 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 37, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, 23);
    }
  }
  if ( v9 > 0xC )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  if ( v6 < 0 )
    goto LABEL_70;
  v16 = v79;
  v17 = 0LL;
  v63[0] = 0;
  if ( !v79 )
  {
LABEL_31:
    if ( v6 < 0 )
      goto LABEL_70;
    if ( *(_DWORD *)v5 != 2 )
      goto LABEL_48;
    v36 = v80;
    v37 = v64;
    LODWORD(v15) = v80 + 1;
    if ( v80 + 1 > (unsigned int)v64 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v37, 1, 39, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
        v37 = v64;
        v36 = v80;
      }
      v6 = -1073741811;
    }
    else
    {
      v38 = 3LL * v80;
      v7[2 * v38 + 4] = 0;
      v36 = v15;
      *(_DWORD *)&v7[2 * v38] = 5505037;
      *(_DWORD *)&v7[2 * v38 + 2] = v16;
      v80 = v15;
    }
    if ( v6 < 0 )
      goto LABEL_48;
    if ( v36 + 1 > v37 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_47:
        v6 = -1073741811;
LABEL_48:
        v45 = v80;
        v47 = v64;
LABEL_49:
        if ( *(_DWORD *)v5 == 3 )
        {
          v78 = v45 + 1;
          if ( v45 + 1 <= v47 )
          {
            v49 = *(_OWORD *)(v5 + 8);
            v50 = *(_OWORD *)(v5 + 24);
            v79 = 0;
            *(_OWORD *)&v66[1] = v49;
            v51 = *(_OWORD *)(v5 + 40);
            v67 = v50;
            v52 = *(_OWORD *)(v5 + 56);
            v68 = v51;
            v53 = *(_OWORD *)(v5 + 72);
            v69 = v52;
            v54 = *(_OWORD *)(v5 + 88);
            v55 = a1;
            v70 = v53;
            v71 = v54;
            v56 = RIMIDEGetTimeStampDelta(a1, (__int64)&v66[1], &v79, v15);
            v57 = 0;
            if ( v56 )
            {
              v58 = 3LL * v80;
              *(_DWORD *)&v7[2 * v58 + 2] = v79;
              v59 = v78;
              *(_DWORD *)&v7[2 * v58] = 5636109;
              v7[2 * v58 + 4] = 0;
LABEL_61:
              if ( v6 >= 0 )
              {
                v60 = RIMIDEInjectDeviceInput(v55, (__int64)v7, v59);
                v6 = v60;
                if ( v60 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v61) = 2;
                  WPP_RECORDER_SF_d(
                    (_DWORD)gRimLog,
                    v61,
                    1,
                    44,
                    (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
                    v60);
                }
              }
              goto LABEL_70;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v57) = 2;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v57, 1, 42, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
            }
            v6 = -1073741811;
LABEL_60:
            v59 = v64;
            goto LABEL_61;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v45) = 2;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v45, 1, 43, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
          }
          v6 = -1073741811;
        }
        v55 = a1;
        goto LABEL_60;
      }
      v48 = 41;
    }
    else
    {
      v39 = *(_OWORD *)(v5 + 8);
      v79 = 0;
      v40 = *(_OWORD *)(v5 + 24);
      *(_OWORD *)&v66[1] = v39;
      v41 = *(_OWORD *)(v5 + 40);
      v67 = v40;
      v42 = *(_OWORD *)(v5 + 56);
      v68 = v41;
      v43 = *(_OWORD *)(v5 + 72);
      v69 = v42;
      v44 = *(_OWORD *)(v5 + 88);
      v70 = v43;
      v71 = v44;
      if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v66[1], &v79, v15) )
      {
        v45 = v80;
        v46 = 3LL * v80;
        *(_DWORD *)&v7[2 * v46 + 2] = v79;
        v7[2 * v46 + 4] = 0;
        v47 = v45 + 1;
        v64 = v45 + 1;
        *(_DWORD *)&v7[2 * v46] = 5636109;
        goto LABEL_49;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v48 = 40;
    }
    LOBYTE(v37) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v37, 1, v48, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    goto LABEL_47;
  }
  while ( v6 >= 0 )
  {
    v18 = v5 + 152 * v17;
    v19 = *(_OWORD *)(v18 + 16);
    *(_OWORD *)&v66[1] = *(_OWORD *)v18;
    v20 = *(_OWORD *)(v18 + 32);
    v67 = v19;
    v21 = *(_OWORD *)(v18 + 48);
    v68 = v20;
    v22 = *(_OWORD *)(v18 + 64);
    v69 = v21;
    v23 = *(_OWORD *)(v18 + 80);
    v70 = v22;
    v24 = *(_OWORD *)(v18 + 96);
    v71 = v23;
    v25 = *(_OWORD *)(v18 + 112);
    v72 = v24;
    v26 = *(_OWORD *)(v18 + 128);
    v27 = *(_QWORD *)(v18 + 144);
    v73 = v25;
    v74 = v26;
    v75 = v27;
    if ( (unsigned int)RIMIDEFillContactUsageValues((_DWORD *)v66[0], (unsigned int)v65, &v66[1]) )
    {
      v29 = v65;
      v30 = 0;
      if ( (_DWORD)v65 )
      {
        v31 = v66[0];
        v32 = v64;
        v33 = v80;
        LODWORD(v15) = v63[0];
        do
        {
          if ( v33 >= v32 )
            break;
          ++v30;
          v34 = v33++;
          v35 = 3 * v34;
          *(_QWORD *)&v7[2 * v35] = *(_QWORD *)v31;
          *(_DWORD *)&v7[2 * v35 + 4] = *((_DWORD *)v31 + 2);
          v7[2 * v35 + 4] = v15 + 1;
          *((_DWORD *)v31 + 1) = 0;
          v31 = (struct tagINPUT_INJECTION_VALUE *)((char *)v31 + 12);
        }
        while ( v30 < v29 );
        v5 = a2;
        v80 = v33;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 38, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
      v6 = -1073741811;
    }
    v16 = v79;
    v17 = v63[0] + 1;
    v63[0] = v17;
    if ( (unsigned int)v17 >= v79 )
      goto LABEL_31;
  }
LABEL_70:
  if ( v66[0] )
    Win32FreePool((__int64)v66[0]);
  if ( v7 )
    Win32FreePool((__int64)v7);
  return (unsigned int)v6;
}
