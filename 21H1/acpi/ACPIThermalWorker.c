/*
 * XREFs of ACPIThermalWorker @ 0x1C009A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     ACPIThermalLoop @ 0x1C00127B0 (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C001308C (WPP_RECORDER_SF_ddqssdddd.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C00145C0 (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C001472C (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C00148C8 (ACPIThermalUpdateConstraints.c)
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ACPIThermalStopZoneWorker @ 0x1C006014C (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C00918C0 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0098748 (ACPIThermalGetOverrideHandle.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C009A52C (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C009A5E0 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalGetParameter @ 0x1C009B69C (ACPIThermalGetParameter.c)
 *     ACPIThermalReadTemperature @ 0x1C00B5578 (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  int v2; // r12d
  LONG result; // eax
  __int64 v5; // rdi
  __int64 *v6; // r14
  union _LARGE_INTEGER v7; // r13
  union _LARGE_INTEGER v8; // rax
  char *v9; // r15
  char *v10; // rsi
  __int64 v11; // rax
  char *v12; // r15
  char *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  char *v16; // r15
  char *v17; // rsi
  __int64 v18; // rax
  union _LARGE_INTEGER v19; // r13
  union _LARGE_INTEGER v20; // r12
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rsi
  union _LARGE_INTEGER v24; // r13
  char *v25; // r15
  char *v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rsi
  char *v30; // r15
  char *v31; // rsi
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // esi
  __int64 *v35; // rax
  __int64 v36; // r15
  __int64 *v37; // rax
  __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rsi
  _WORD *v41; // rcx
  _WORD *v42; // rax
  __int64 v43; // r9
  signed int v44; // r8d
  __int16 v45; // dx
  __int64 *v46; // rcx
  __int64 *v47; // rcx
  int Timeout; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER v50; // [rsp+90h] [rbp-78h]
  unsigned int v51; // [rsp+98h] [rbp-70h] BYREF
  int v52; // [rsp+9Ch] [rbp-6Ch]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h] BYREF
  union _LARGE_INTEGER v55; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+B8h] [rbp-50h]
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER Time; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v59; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v60; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v61; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v62; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v63; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v64; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v65; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER v66; // [rsp+108h] [rbp+0h] BYREF
  union _LARGE_INTEGER v67; // [rsp+110h] [rbp+8h] BYREF
  union _LARGE_INTEGER v68; // [rsp+118h] [rbp+10h] BYREF
  __int128 v69; // [rsp+128h] [rbp+20h] BYREF
  __int128 v70; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v72; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v73; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v74; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v75; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v76; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v77; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v78; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v79; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v80; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _TIME_FIELDS v81; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _TIME_FIELDS v82; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v83; // [rsp+208h] [rbp+100h] BYREF
  __int128 v84; // [rsp+218h] [rbp+110h]
  __int128 v85; // [rsp+228h] [rbp+120h]
  _DWORD v86[10]; // [rsp+238h] [rbp+130h] BYREF
  _DWORD v87[10]; // [rsp+260h] [rbp+158h] BYREF

  v52 = a2;
  Interval.QuadPart = 0LL;
  P = 0LL;
  v2 = a2;
  v51 = 0;
  v54 = 0LL;
  result = MEMORY[0xFFFFF78000000008];
  v50.QuadPart = MEMORY[0xFFFFF78000000008];
  v49 = 0LL;
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(__int64 **)(a1 + 720);
    v56 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v86, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v86));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v33 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5 + 100) = 1;
    v34 = 0;
    *(_BYTE *)(v5 + 274) = v33 >= 0;
    do
    {
      v35 = AMLIGetNamedChild(v6, v86[v34]);
      v36 = (__int64)v35;
      if ( !v35 )
        break;
      ACPIThermalBuildConstraints((unsigned __int64 *)v35, a1, 0, v34);
      AMLIDereferenceHandleEx(v36);
      ++v34;
    }
    while ( v34 < 0xA );
    v37 = AMLIGetNamedChild(v6, 1280528479);
    v2 = v52;
    v38 = (__int64)v37;
    if ( v37 )
    {
      ACPIThermalBuildConstraints((unsigned __int64 *)v37, a1, 1, 1u);
      AMLIDereferenceHandleEx(v38);
      *(_BYTE *)(v5 + 33) = 1;
    }
    v39 = AMLIGetNamedChild(v6, 1146770527);
    v40 = (__int64)v39;
    if ( v39 )
    {
      ACPIThermalBuildConstraints((unsigned __int64 *)v39, a1, 1, 0);
      AMLIDereferenceHandleEx(v40);
      *(_BYTE *)(v5 + 33) = 1;
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v51) < 0 )
      goto LABEL_7;
    if ( v51 <= 2 || (v51 & 1) != 0 )
      goto LABEL_88;
    v41 = P;
    if ( *((_WORD *)P + ((unsigned __int64)v51 >> 1) - 1) )
      goto LABEL_89;
    *(_OWORD *)(v5 + 304) = 0LL;
    if ( !v41 )
      goto LABEL_87;
    v42 = v41;
    v43 = 0x7FFFLL;
    do
    {
      if ( !*v42 )
        break;
      ++v42;
      --v43;
    }
    while ( v43 );
    v44 = v43 == 0 ? 0xC000000D : 0;
    if ( v43 )
    {
      if ( v5 == -304 )
      {
        v44 = -1073741811;
      }
      else
      {
        v45 = 2 * (v43 != 0 ? 0x7FFF - v43 : 0);
        *(_QWORD *)(v5 + 312) = v41;
        *(_WORD *)(v5 + 304) = v45;
        *(_WORD *)(v5 + 306) = v45 + 2;
      }
    }
    if ( v44 < 0 )
    {
LABEL_88:
      v41 = P;
    }
    else
    {
LABEL_87:
      v41 = 0LL;
      P = 0LL;
    }
LABEL_89:
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v87, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v87));
      v55.QuadPart = (__int64)ACPIThermalGetOverrideHandle(a1);
      v7 = v55;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v55.QuadPart,
        826496095LL,
        &v49);
      v8 = v50;
      *(_DWORD *)(v5 + 4) = v49;
      Time = v8;
      v9 = byte_1C00701BA;
      v10 = byte_1C00701BA;
      TimeFields = 0LL;
      RtlTimeToTimeFields(&Time, &TimeFields);
      v11 = *(_QWORD *)(a1 + 8);
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(char **)(a1 + 568);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)TimeFields.Minute,
          (unsigned int)TimeFields.Hour,
          0x17u,
          Timeout,
          *(_DWORD *)(v5 + 4),
          a1,
          (__int64)v9,
          (__int64)v10);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        843273311LL,
        &v49);
      *(_DWORD *)(v5 + 8) = v49;
      v59 = v50;
      v12 = byte_1C00701BA;
      v13 = byte_1C00701BA;
      v72 = 0LL;
      RtlTimeToTimeFields(&v59, &v72);
      v14 = *(_QWORD *)(a1 + 8);
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v12 = *(char **)(a1 + 568);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v72.Minute,
          (unsigned int)v72.Hour,
          0x18u,
          Timeout,
          *(_DWORD *)(v5 + 8),
          a1,
          (__int64)v12,
          (__int64)v13);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        1448300639LL,
        &v49);
      *(_DWORD *)(v5 + 20) = v49;
      v60 = v50;
      v73 = 0LL;
      RtlTimeToTimeFields(&v60, &v73);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 20) / 0xAu,
          (unsigned int)v73.Minute,
          0x19u,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        1414677343LL,
        &v49);
      *(_DWORD *)(v5 + 28) = v49;
      v61 = v50;
      v74 = 0LL;
      RtlTimeToTimeFields(&v61, &v74);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 28) / 0xAu,
          (unsigned int)v74.Minute,
          0x1Au,
          Timeout);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                  a1,
                  (union _LARGE_INTEGER)v7.QuadPart,
                  1346786399LL,
                  &v49) >= 0
        || (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                  a1,
                  (union _LARGE_INTEGER)v7.QuadPart,
                  1347638367LL,
                  &v49) < 0 )
      {
        v15 = v49;
      }
      else
      {
        v15 = 100 * v49;
        v49 *= 100LL;
      }
      *(_DWORD *)(v5 + 12) = v15;
      v62 = v50;
      v16 = byte_1C00701BA;
      v17 = byte_1C00701BA;
      v75 = 0LL;
      RtlTimeToTimeFields(&v62, &v75);
      v18 = *(_QWORD *)(a1 + 8);
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v16 = *(char **)(a1 + 568);
        if ( (v18 & 0x400000000000LL) != 0 )
          v17 = *(char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v75.Minute,
          (unsigned int)v75.Hour,
          0x1Bu,
          Timeout,
          *(_DWORD *)(v5 + 12),
          a1,
          (__int64)v16,
          (__int64)v17);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        861029215LL,
        &v49);
      *(_DWORD *)(v5 + 24) = v49;
      v63 = v50;
      v76 = 0LL;
      RtlTimeToTimeFields(&v63, &v76);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 24) / 0xAu,
          (unsigned int)v76.Minute,
          0x1Cu,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        1414482015LL,
        &v49);
      *(_DWORD *)(v5 + 76) = v49;
      v64 = v50;
      v77 = 0LL;
      RtlTimeToTimeFields(&v64, &v77);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 76) / 0xAu,
          (unsigned int)v77.Minute,
          0x1Du,
          Timeout);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v7.QuadPart,
        1414811231LL,
        &v49);
      v19 = v50;
      *(_DWORD *)(v5 + 104) = v49;
      v78 = 0LL;
      v65 = v19;
      RtlTimeToTimeFields(&v65, &v78);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 104) / 0xAu,
          (unsigned int)v78.Minute,
          0x1Eu,
          Timeout);
      v20 = v55;
      v21 = 0LL;
      do
      {
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
                    a1,
                    (union _LARGE_INTEGER)v20.QuadPart,
                    (unsigned int)v87[v21],
                    &v49) < 0 )
          break;
        *(_DWORD *)(v5 + 4 * v21 + 36) = v49;
        v66 = v50;
        v79 = 0LL;
        RtlTimeToTimeFields(&v66, &v79);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddqssdddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)(v5 + 4 * v21 + 36) / 0xAu,
            (unsigned int)v79.Minute,
            (unsigned int)v79.Hour,
            Timeout);
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < 0xA );
      *(_BYTE *)(v5 + 32) = v21;
      v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
              a1,
              (union _LARGE_INTEGER)v20.QuadPart,
              1280593247LL,
              &v49);
      v2 = v52;
      if ( v22 < 0
        && (*(_DWORD *)(v5 + 128) & 2) != 0
        && (v46 = *(__int64 **)(a1 + 720),
            v83 = 0LL,
            v84 = 0LL,
            v85 = 0LL,
            v69 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v46, (__int64)&v69, 0, 1u, (__int64)&v83, &v54) >= 0) )
      {
        if ( *(_WORD *)(v54 + 2) == 1 )
          v23 = *(unsigned int *)(v54 + 16);
        else
          v23 = v49;
        AMLIFreeDataBuffs(v54);
      }
      else
      {
        v23 = v49;
      }
      v24 = v50;
      v67 = v50;
      v25 = byte_1C00701BA;
      if ( v23 > 0x64 )
        LODWORD(v23) = 100;
      *(_DWORD *)(v5 + 80) = v23;
      v26 = byte_1C00701BA;
      v80 = 0LL;
      RtlTimeToTimeFields(&v67, &v80);
      v27 = *(_QWORD *)(a1 + 8);
      if ( (v27 & 0x200000000000LL) != 0 )
      {
        v25 = *(char **)(a1 + 568);
        if ( (v27 & 0x400000000000LL) != 0 )
          v26 = *(char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v80.Minute,
          (unsigned int)v80.Hour,
          0x20u,
          Timeout,
          *(_DWORD *)(v5 + 80),
          a1,
          (__int64)v25,
          (__int64)v26);
      v28 = *(_DWORD *)(v5 + 128);
      v29 = 0LL;
      v49 = 0LL;
      if ( (v28 & 8) != 0 )
      {
        v47 = *(__int64 **)(a1 + 720);
        v83 = 0LL;
        v84 = 0LL;
        v85 = 0LL;
        v70 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v47, (__int64)&v70, 0, 3u, (__int64)&v83, &v54) >= 0 )
        {
          if ( *(_WORD *)(v54 + 2) == 1 )
            v29 = *(unsigned int *)(v54 + 16);
          AMLIFreeDataBuffs(v54);
          if ( v29 > 0x64 )
            v29 = 100LL;
          v49 = v29;
        }
      }
      *(_DWORD *)(v5 + 84) = v29;
      v68 = v24;
      v30 = byte_1C00701BA;
      v81 = 0LL;
      v31 = byte_1C00701BA;
      RtlTimeToTimeFields(&v68, &v81);
      v32 = *(_QWORD *)(a1 + 8);
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(char **)(a1 + 568);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v81.Minute,
          (unsigned int)v81.Hour,
          0x21u,
          Timeout,
          *(_DWORD *)(v5 + 84),
          a1,
          (__int64)v30,
          (__int64)v31);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ACPIThermalGetParameter)(
        a1,
        (union _LARGE_INTEGER)v55.QuadPart,
        1348097119LL,
        &v49);
      *(_DWORD *)(v5 + 88) = v49;
      v55 = v24;
      v82 = 0LL;
      RtlTimeToTimeFields(&v55, &v82);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5 + 88) / 0xAu,
          (unsigned int)v82.Minute,
          0x22u,
          Timeout);
    }
    if ( v56 )
    {
      if ( *(_BYTE *)(v5 + 272) )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      KeWaitForSingleObject((PVOID)(v5 + 248), Executive, 0, 0, 0LL);
      ACPIThermalLoop(a1, 0x4000000LL);
      if ( (v2 & 2) != 0 )
        ACPIThermalReadTemperature(a1, 1LL);
      if ( (v2 & 0x200) != 0 )
        ACPIThermalReadTemperature(a1, 0LL);
    }
    return ACPIThermalLoop(a1, (v2 & 0xFFFFFDFD) != 0 ? 1073742338 : 0x40000000);
  }
  return result;
}
