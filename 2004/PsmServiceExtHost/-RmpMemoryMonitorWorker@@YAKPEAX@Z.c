/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003E500
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180016880 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180017480 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x18003383C (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034B1C (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003EC30 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180062520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800705E0 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x180070868 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800748D0 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180074BB0 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180074F24 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800759A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  __int64 v2; // r13
  DWORD TickCount; // eax
  int v4; // r12d
  int v5; // esi
  int v6; // ebx
  DWORD v7; // edi
  __int64 v8; // r8
  unsigned int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  void *v20; // rdx
  DWORD v21; // eax
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int i; // eax
  int v26; // edi
  unsigned int v27; // ebx
  int v28; // ebx
  DWORD v29; // edi
  struct _RM_PARTITION *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __m128i v33; // xmm1
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  DWORD v36; // r14d
  _QWORD *Value; // rdi
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  bool v41; // zf
  DWORD v42; // edi
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // ebx
  DWORD v50; // edi
  int v51; // edi
  int v52; // r8d
  int v53; // r9d
  struct _RM_PARTITION *v54; // rbx
  DWORD v55; // ebx
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  int v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int *v63; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v66; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v67; // [rsp+68h] [rbp-98h]
  _QWORD v68[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v69; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-58h]
  __int128 v73; // [rsp+B0h] [rbp-50h]
  __int128 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-30h]
  __int128 v76; // [rsp+E0h] [rbp-20h]
  __m128i v77; // [rsp+F0h] [rbp-10h]
  __int128 v78; // [rsp+100h] [rbp+0h]
  _BYTE v79[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v80; // [rsp+114h] [rbp+14h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  __int64 v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+150h] [rbp+50h]
  __int64 v85; // [rsp+158h] [rbp+58h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  __int64 v89; // [rsp+180h] [rbp+80h]
  __int64 v90; // [rsp+188h] [rbp+88h]
  __int64 v91; // [rsp+190h] [rbp+90h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  __int64 v95; // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1C8h] [rbp+C8h]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  _OWORD v102[5]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v103[13]; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  char v105[144]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v106[6]; // [rsp+360h] [rbp+260h] BYREF
  HANDLE Handles[6]; // [rsp+378h] [rbp+278h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+3A8h] [rbp+2A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v105);
  v2 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)(v2 + 400),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v103,
    0LL);
  v4 = v59;
  v5 = 0;
  while ( 1 )
  {
    v6 = 7;
    if ( v5 >= 4 )
      v6 = 39;
    v7 = 0;
    if ( WaitForSingleObjectEx(*(HANDLE *)(Parameter + 8), 0, 0) )
      *(_DWORD *)(Parameter + 92) &= ~1u;
    v9 = 0;
    v10 = 1;
    do
    {
      if ( (v10 & v6) != 0 && (v9 || (*(_BYTE *)(Parameter + 92) & 1) == 0) )
      {
        v8 = v7++;
        v106[v8] = v9;
        Handles[v8] = *(HANDLE *)(Parameter + 8LL * v9 + 8);
      }
      if ( (__ROL4__(v10, 1) & v6) != 0 )
      {
        v11 = v9 + 1;
        v12 = *(void **)(Parameter + 8 * v11 + 8);
        v8 = v7++;
        v106[v8] = v11;
        Handles[v8] = v12;
      }
      if ( (__ROL4__(v10, 2) & v6) != 0 )
      {
        v13 = v9 + 2;
        v14 = *(void **)(Parameter + 8 * v13 + 8);
        v8 = v7++;
        v106[v8] = v13;
        Handles[v8] = v14;
      }
      if ( (__ROL4__(v10, 3) & v6) != 0 )
      {
        v15 = v9 + 3;
        v16 = *(void **)(Parameter + 8 * v15 + 8);
        v8 = v7++;
        v106[v8] = v15;
        Handles[v8] = v16;
      }
      if ( (__ROL4__(v10, 4) & v6) != 0 )
      {
        v17 = v9 + 4;
        v18 = *(void **)(Parameter + 8 * v17 + 8);
        v8 = v7++;
        v106[v8] = v17;
        Handles[v8] = v18;
      }
      LODWORD(v19) = __ROL4__(v10, 5);
      if ( ((unsigned int)v19 & v6) != 0 )
      {
        v19 = v9 + 5;
        v20 = *(void **)(Parameter + 8 * v19 + 8);
        v8 = v7++;
        v106[v8] = v19;
        Handles[v8] = v20;
      }
      v9 += 6;
      v10 = __ROL4__(v10, 6);
    }
    while ( v9 < 6 );
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v60 = -1;
      v66 = v106;
      v67 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<4>>(
        v19,
        (unsigned int)&unk_18009DE47,
        v8,
        v9,
        (__int64)&v66,
        (__int64)&v60);
    }
    v21 = WaitForMultipleObjectsEx(v7, Handles, 0, 0xFFFFFFFF, 0);
    if ( v21 >= 0x40 )
    {
      if ( v21 == 258 )
      {
        v24 = 258;
      }
      else
      {
        v4 = v106[0];
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
      v4 = v106[v21];
      if ( !v4 )
        *(_DWORD *)(Parameter + 92) |= 1u;
    }
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v62 = v24;
      v61 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009E256,
        v22,
        v23,
        (__int64)&v62,
        (__int64)&v61);
    }
    if ( v4 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                v103,
                (unsigned int *)&v58,
                (unsigned int *)&v57);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                v103,
                (unsigned int *)&v58,
                (unsigned int *)&v57) )
    {
      if ( i == 3 )
        break;
      v26 = 0;
      if ( i == 2 )
        goto LABEL_32;
    }
    v26 = i;
LABEL_32:
    v5 = v57;
    v27 = v58;
    RmpMemoryMonitorUpdateMemoryUsageMetrics(Parameter, v58, v57);
    if ( v27 > v5 )
      v5 = v27;
    if ( v26 == 4 )
      break;
    if ( v4 != 1 && v26 == 3 && (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B31E0,
        (unsigned __int8 *)dword_18009E458,
        0LL,
        0LL,
        2u,
        &v108);
    if ( *(_DWORD *)(v2 + 496) )
    {
      v49 = *(_DWORD *)(Parameter + 80);
      v50 = *(_DWORD *)(Parameter + 76);
      if ( GetTickCount() - v49 >= v50 )
      {
        RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
          (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v103);
        *(_DWORD *)(Parameter + 80) = GetTickCount();
      }
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v28 = *(_DWORD *)(Parameter + 88);
      v29 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v28 >= v29 )
      {
        v30 = *(struct _RM_PARTITION **)Parameter;
        v31 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
        memset_0(v103, 0, 0x80uLL);
        memset_0(v79, 0, 0xF0uLL);
        v32 = *((_QWORD *)v30 + 4);
        v80 = -1LL;
        NtManagePartition(v32, 0LL, 0LL, v79, 240);
        *(_QWORD *)&v76 = 0LL;
        *((_QWORD *)&v74 + 1) = RmpPageSize * v82 - RmpPageSize * v101;
        *(_QWORD *)&v75 = RmpPageSize * v81 - RmpPageSize * v101;
        *((_QWORD *)&v75 + 1) = *((_QWORD *)&v74 + 1) - v75;
        *((_QWORD *)&v76 + 1) = RmpPageSize * v83 - RmpPageSize * v101;
        v77.m128i_i64[0] = RmpPageSize * (v84 + v85 + v91 + v90 + v89 + v88 + v86 + v87);
        v77.m128i_i64[1] = *((_QWORD *)&v76 + 1) - v77.m128i_i64[0];
        *(_QWORD *)&v74 = RmpPageSize * v100 - RmpPageSize * v101;
        v78 = (unsigned __int64)(v95 + v94 + v93 + v92 + v99 + v98 + v97 + v96);
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v31 + 400),
          (struct _RM_REMEDIATION_ACTIONS *)(v31 + 456),
          (struct _RM_SYSTEM_MEMORY_METRICS *)&v74,
          v74,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v103);
        v102[0] = v74;
        v102[1] = v75;
        v33 = v77;
        v102[2] = v76;
        v102[3] = v77;
        v102[4] = v78;
        *((_WORD *)v30 + 94) = 0;
        v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
        if ( v34 > v104 )
        {
          v68[0] = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v73 = 0LL;
          v68[1] = 0LL;
          v71 = 0LL;
          v72 = v104;
          v51 = RmpMemoryMonitorEmptyWorkingSets(Parameter, v102, v68, 6LL);
          if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
          {
            v64 = v34;
            v59 = v51;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1800B31E0,
              (unsigned int)&unk_18009E368,
              v52,
              v53,
              (__int64)&v59,
              (__int64)&v64);
          }
          if ( !v51 )
            *(_DWORD *)(Parameter + 88) = GetTickCount();
        }
      }
    }
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 2720LL);
    if ( v35 )
    {
      v36 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v36) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800B4218 = GetCurrentThreadId();
      v38 = *(_DWORD *)(v35 + 160);
      if ( (v38 & 3) == 0 )
      {
        v39 = *(_QWORD *)(v35 + 144);
        *(_DWORD *)(v35 + 160) = v38 | 1;
        TpPostWork(v39);
      }
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v40 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v40 & 1) == 0 )
          __int2c();
        v41 = v40[1]-- == 1LL;
        if ( v41 )
          *v40 &= ~1uLL;
      }
    }
    if ( v4 == 1 || RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
    {
      v42 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v43 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v42) )
          __int2c();
        *v43 |= 1uLL;
        ++v43[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800B4218 = GetCurrentThreadId();
      v44 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
      if ( (*(_DWORD *)(v44 + 656) & 1) == 0 && (*(_BYTE *)(v44 + 2712) & 1) == 0 )
      {
        if ( (*(_DWORD *)(v44 + 656) & 2) != 0 )
        {
          v45 = 1000LL;
          if ( v5 <= 0 )
            v45 = 1000LL;
        }
        else
        {
          v45 = 0xFFFFFFFFLL;
        }
        v46 = -10000000LL;
        if ( v5 <= 0 )
          v46 = -50000000LL;
        v47 = *(_QWORD *)(Parameter + 64);
        v65 = v46;
        TpSetTimer(v47, &v65, 0LL, v45);
      }
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v48 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v48 & 1) == 0 )
          __int2c();
        v41 = v48[1]-- == 1LL;
        if ( v41 )
          *v48 &= ~1uLL;
      }
    }
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v54 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 312LL),
    *(struct _RM_PARTITION **)Parameter,
    &v63);
  RmpPartitionCleanup(v54);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v54);
  v55 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v55, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)v63);
  RtlWakeAddressAll(v63);
  return 0LL;
}
