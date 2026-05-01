/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180017480
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD74 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180016880 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016B60 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034B88 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003E500 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$07@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$07@@433@Z @ 0x180071184 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperArray@$07@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // kr10_8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // kr20_8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // kr30_8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // kr40_8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // kr50_8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // kr60_8
  bool v32; // zf
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  char *v48; // [rsp+70h] [rbp-90h] BYREF
  __int16 v49; // [rsp+78h] [rbp-88h]
  __int128 *v50; // [rsp+80h] [rbp-80h] BYREF
  __int16 v51; // [rsp+88h] [rbp-78h]
  __int128 v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-50h]
  __int128 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v56; // [rsp+D0h] [rbp-30h]
  __int128 v57; // [rsp+E0h] [rbp-20h]
  __int128 v58; // [rsp+F0h] [rbp-10h]
  __int128 v59; // [rsp+100h] [rbp+0h]

  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    *(_QWORD *)&v53 = 0LL;
    *((_QWORD *)&v55 + 1) = 0LL;
    *((_QWORD *)&v56 + 1) = 0LL;
    *(_QWORD *)&v59 = 0LL;
    v7 = *((unsigned int *)a1 + 5);
    v8 = -1LL;
    v10 = v7;
    v9 = a4 * v7;
    v58 = 0LL;
    v11 = -1LL;
    v12 = *((_QWORD *)a3 + 5);
    if ( is_mul_ok(a4, v10) )
      v11 = v9;
    *(_QWORD *)&v52 = a4;
    *((_QWORD *)&v52 + 1) = v12;
    v13 = v11 / 0x64;
    if ( v13 >= a4 - *(_QWORD *)a1 )
      v13 = a4 - *(_QWORD *)a1;
    v14 = -1LL;
    v15 = *((unsigned int *)a1 + 11);
    v16 = -1LL;
    *(_QWORD *)&v55 = v13;
    *((_QWORD *)&v54 + 1) = v13;
    if ( is_mul_ok(a4, v15) )
      v14 = a4 * v15;
    v17 = *((unsigned int *)a1 + 3);
    *((_QWORD *)&v59 + 1) = v14 / 0x64;
    v18 = -1LL;
    if ( is_mul_ok(a4, v17) )
      v18 = a4 * v17;
    v19 = v18 / 0x64;
    if ( is_mul_ok(v12, *((unsigned int *)a1 + 4)) )
      v16 = v12 * *((unsigned int *)a1 + 4);
    v20 = v16 / 0x64;
    if ( v19 < v20 )
      v20 = v19;
    if ( v13 < v20 )
      v20 = v13;
    v21 = -1LL;
    v22 = *((unsigned int *)a1 + 2);
    *(_QWORD *)&v54 = v20;
    if ( is_mul_ok(a4, v22) )
      v21 = a4 * v22;
    v23 = v21 / 0x64;
    if ( v20 < v23 )
      v23 = v20;
    v24 = -1LL;
    v25 = *((unsigned int *)a1 + 6);
    *((_QWORD *)&v53 + 1) = v23;
    v26 = -1LL;
    if ( is_mul_ok(v12, v25) )
      v24 = v12 * v25;
    v27 = *((unsigned int *)a1 + 7);
    *((_QWORD *)&v56 + 1) = v24 / 0x64;
    *(_QWORD *)&v56 = v24 / 0x64;
    if ( is_mul_ok(v12, v27) )
      v26 = v12 * v27;
    v28 = *((unsigned int *)a1 + 8);
    *(_QWORD *)&v57 = v26 / 0x64;
    v29 = -1LL;
    v31 = v28;
    v30 = v12 * v28;
    if ( is_mul_ok(v12, v31) )
      v29 = v30;
    v32 = *((_DWORD *)a2 + 10) == 0;
    *((_QWORD *)&v57 + 1) = v29 / 0x64;
    if ( v32 )
    {
      v33 = v58;
    }
    else
    {
      v43 = -1LL;
      if ( is_mul_ok(a4, *((unsigned int *)a1 + 9)) )
        v43 = a4 * *((unsigned int *)a1 + 9);
      v33 = v43 / 0x64;
      *(_QWORD *)&v58 = v33;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v34 = -1LL;
      if ( is_mul_ok(v12, *((unsigned int *)a1 + 10)) )
        v34 = v12 * *((unsigned int *)a1 + 10);
      v35 = v34 / 0x64;
      *((_QWORD *)&v58 + 1) = v35;
    }
    else
    {
      v35 = *((_QWORD *)&v58 + 1);
    }
    if ( *((_DWORD *)a1 + 12) )
    {
      if ( is_mul_ok(v12, *((unsigned int *)a1 + 12)) )
        v8 = v12 * *((unsigned int *)a1 + 12);
      *(_QWORD *)&v59 = v8 / 0x64;
    }
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v44 = v35;
      v45 = v33;
      v48 = (char *)&v55 + 8;
      v49 = 5;
      v50 = &v53;
      v51 = 5;
      v46 = v12;
      v47 = a4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        5,
        (unsigned int)&unk_18009D050,
        v35,
        v33,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v50,
        (__int64)&v48,
        (__int64)&v45,
        (__int64)&v44);
    }
    v36 = v53;
    *(_OWORD *)a5 = v52;
    v37 = v54;
    *((_OWORD *)a5 + 1) = v36;
    v38 = v55;
    *((_OWORD *)a5 + 2) = v37;
    v39 = v56;
    *((_OWORD *)a5 + 3) = v38;
    v40 = v57;
    *((_OWORD *)a5 + 4) = v39;
    v41 = v58;
    *((_OWORD *)a5 + 5) = v40;
    v42 = v59;
    *((_OWORD *)a5 + 6) = v41;
    *((_OWORD *)a5 + 7) = v42;
  }
}
