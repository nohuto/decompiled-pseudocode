/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180016880
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003E500 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FE60 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180017480 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006A72C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180074A1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180074F4C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180074FF4 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180075784 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800759A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800760A8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // r11
  int v15; // r15d
  unsigned __int64 v16; // xmm3_8
  _DWORD *v17; // rdx
  unsigned int *v18; // r10
  _QWORD *v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // ebx
  int v23; // r9d
  unsigned int *v24; // rax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v28; // r9d
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned int v31; // eax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __m128i v40; // [rsp+70h] [rbp-90h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h]
  __m128i v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-30h]
  __m128i v47; // [rsp+E0h] [rbp-20h]
  __int128 v48; // [rsp+F0h] [rbp-10h]
  __int64 *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  __int64 *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  unsigned int **v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  __int64 v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  __int64 v67; // [rsp+1A0h] [rbp+A0h]
  __m128i v68; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v69; // [rsp+1C0h] [rbp+C0h]
  __m128i v70; // [rsp+1D0h] [rbp+D0h]
  __int128 v71; // [rsp+1E0h] [rbp+E0h]
  __int128 v72; // [rsp+1F0h] [rbp+F0h]

  v36 = a4;
  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  memset_0(&v45, 0, 0xF0uLL);
  v9 = *(_QWORD *)(v7 + 32);
  *(ULONGLONG *)((char *)&v45.Ptr + 4) = -1LL;
  NtManagePartition(v9, 0LL, 0LL, &v45, 240);
  v10 = 0;
  v42.m128i_i64[0] = 0LL;
  v40.m128i_i64[1] = RmpPageSize * v47.m128i_i64[0] - RmpPageSize * v67;
  *(_QWORD *)&v41 = RmpPageSize * *((_QWORD *)&v46 + 1) - RmpPageSize * v67;
  *((_QWORD *)&v41 + 1) = v40.m128i_i64[1] - v41;
  v42.m128i_i64[1] = RmpPageSize * v48 - RmpPageSize * v67;
  *(_QWORD *)&v43 = RmpPageSize
                  * ((_QWORD)v49
                   + (unsigned __int64)&v53[(unsigned __int64)v52 / 8 + (unsigned __int64)v54 / 8]
                   + (_QWORD)v55
                   + v56
                   + v57
                   + v50);
  *((_QWORD *)&v43 + 1) = v42.m128i_i64[1] - v43;
  v40.m128i_i64[0] = RmpPageSize * v66 - RmpPageSize * v67;
  v44 = (unsigned __int64)(v58 + v65 + v64 + v63 + v62 + v61 + v60 + v59);
  v34 = v8 + 456;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v8 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v8 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v40,
    v40.m128i_u64[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v68 = v40;
  v11 = (_DWORD *)(v8 + 472);
  v12 = 4;
  v13 = a2 + 6;
  v14 = v41;
  v15 = 0;
  v16 = _mm_srli_si128(v40, 8).m128i_u64[0];
  v69 = v41;
  v17 = (_DWORD *)(v8 + 472);
  v70 = v42;
  v71 = v43;
  v35 = _mm_srli_si128(v42, 8).m128i_u64[0];
  v47.m128i_i64[1] = v35;
  v72 = v44;
  *(_WORD *)(v7 + 188) = 0;
  v45.Ptr = 0LL;
  v46 = 0uLL;
  v47.m128i_i64[0] = 0LL;
  v48 = 0uLL;
  v37 = v16;
  *(_QWORD *)&v45.Size = v16;
  do
  {
    if ( v14 >= *v13 )
    {
      v26 = v12;
      if ( v10 > v12 )
        v26 = v10;
      v10 = v26;
      if ( *v17 )
        break;
    }
    --v13;
    --v17;
    --v12;
  }
  while ( v12 );
  v18 = (unsigned int *)*((_QWORD *)&v43 + 1);
  v19 = a2 + 11;
  v20 = 0;
  v21 = 4;
  do
  {
    if ( *((_QWORD *)&v43 + 1) >= *v19 )
    {
      v27 = v21;
      if ( v20 > v21 )
        v27 = v20;
      v20 = v27;
      if ( *v11 )
        break;
    }
    --v19;
    --v11;
    --v21;
  }
  while ( v21 );
  v22 = 3;
  if ( v12 || v21 )
  {
    if ( v12 < v21 )
    {
      v23 = 3;
      v15 = *(_DWORD *)(v34 + 4LL * v21 + 20);
      *((_QWORD *)&v48 + 1) = a2[v21 + 7];
      *(_QWORD *)&v48 = v35 - *((_QWORD *)&v48 + 1);
    }
    else
    {
      v23 = 1;
      v15 = *(_DWORD *)(v34 + 4LL * v12);
      *(_QWORD *)&v46 = a2[v12 + 2];
      *((_QWORD *)&v46 + 1) = v37 - v46;
    }
    v40 = (__m128i)v45;
    v41 = v46;
    v42 = v47;
    v43 = v48;
    v44 = 0LL;
  }
  else
  {
    v23 = v34;
  }
  v24 = v36;
  *a3 = v10;
  *v24 = v20;
  if ( !v15 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v36 = v18;
      v35 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009DF5F,
        v12,
        v23,
        (__int64)&v35,
        (__int64)&v36);
    }
    return v22;
  }
  if ( v15 != 4 && (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v36 = (unsigned int *)*((_QWORD *)&v43 + 1);
    v35 = v41;
    v55 = &v36;
    v53 = &v35;
    v51 = &v38;
    v49 = &v39;
    *(_QWORD *)&v48 = &v37;
    v47.m128i_i64[0] = (__int64)&v34;
    LODWORD(v37) = v28;
    v38 = v29;
    v39 = v30;
    LODWORD(v34) = v15;
    v56 = 8LL;
    v54 = 8LL;
    v52 = 8LL;
    v50 = 8LL;
    *((_QWORD *)&v48 + 1) = 4LL;
    v47.m128i_i64[1] = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009DE86, 0, 0, 8u, &v45);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v15 )
  {
    case 2:
      v31 = RmpMemoryMonitorEmptyWorkingSets(a1, &v68, &v40, 0LL);
      goto LABEL_45;
    case 3:
      v22 = RmpMemoryMonitorEmptyWorkingSets(a1, &v68, &v40, 1LL);
      if ( v22 != 2 )
        break;
      *((_QWORD *)&v43 + 1) = a2[14];
      v31 = RmpMemoryMonitorEmptySystemStore(a1, &v68, &v40);
LABEL_45:
      v22 = v31;
      break;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      break;
    case 5:
      v31 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v68, &v40);
      goto LABEL_45;
    case 7:
      v22 = RmpMemoryMonitorRevokeAnyHost(a1, &v68, &v40, a2);
      if ( v22 == 2 )
        goto LABEL_47;
      break;
    default:
      v22 = 2;
      break;
  }
  *((_DWORD *)a1 + 23) &= ~2u;
LABEL_47:
  if ( dword_1800B31E0 )
  {
    if ( v15 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v68);
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
        {
          v39 = *((_QWORD *)&v71 + 1);
          v38 = v69;
          LODWORD(v34) = v22;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800B31E0,
            (unsigned int)&unk_18009E5CD,
            v32,
            v33,
            (__int64)&v34,
            (__int64)&v38,
            (__int64)&v39);
        }
      }
    }
  }
  return v22;
}
