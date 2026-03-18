/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C00686A4
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0068C00 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000EEE0 (RtlStringCbPrintfW.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C0010428 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00104B4 (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0010DF8 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v6; // rsi
  _DWORD *v7; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void **v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 i; // rbx
  __int64 v18; // rcx
  PVOID *v19; // r15
  unsigned int v20; // r8d
  void **v21; // rax
  void **v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  int *v25; // rdx
  __int64 v26; // rax
  wchar_t *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  const void **v33; // r9
  unsigned int v34; // edx
  const void **v35; // r8
  const void **v36; // rax
  PPCW_INSTANCE *v37; // rcx
  __int64 m; // r15
  PVOID v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 j; // rbx
  void *v46; // rcx
  __int64 k; // rbx
  __int64 v48; // rcx
  unsigned int v49; // edx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  PVOID *v52; // rcx
  __int64 v53; // rcx
  unsigned int v54; // eax
  _QWORD *v55; // rdx
  _QWORD *v56; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-78h]
  __int64 v61; // [rsp+28h] [rbp-70h]
  __int64 v62; // [rsp+30h] [rbp-68h]
  __int64 v63; // [rsp+38h] [rbp-60h]
  struct _PCW_DATA v64; // [rsp+50h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-38h] BYREF
  wchar_t *pszDest; // [rsp+A0h] [rbp+8h]

  v2 = *(unsigned int *)(a2 + 4);
  v3 = a1 + 2656;
  ExAcquirePushLockExclusiveEx(a1 + 2656, 0LL);
  v6 = (unsigned int)v2;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v7 )
  {
    ++*v7;
    goto LABEL_29;
  }
  PoolWithTag = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xE8uLL, 0x32616956u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(PoolWithTag);
    **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1;
    if ( !NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
            (_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8LL),
            *(_DWORD *)(a2 + 76)) )
    {
LABEL_33:
      v44 = WdLogNewEntry5_WdWarning(v12, v11);
      WdLogEvent5_WdWarning(v44);
      goto LABEL_34;
    }
    v13 = 0;
    pszDest = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    if ( !pszDest )
    {
      v58 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
      WdLogEvent5_WdAssertion(v58);
      goto LABEL_34;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 72); i = (unsigned int)(i + 1) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v19 = *(PVOID **)(v18 + 8);
      if ( (unsigned int)i < *(_DWORD *)(v18 + 80) )
        v19 += i;
      *v19 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xE0uLL, 0x32616956u);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v11 = *(void ***)(v12 + 8);
      v20 = *(_DWORD *)(v12 + 80);
      v21 = &v11[i];
      if ( (unsigned int)i >= v20 )
        v21 = *(void ***)(v12 + 8);
      if ( !*v21 )
        goto LABEL_33;
      v22 = &v11[i];
      if ( (unsigned int)i >= v20 )
        v22 = v11;
      memset(*v22, 0, 0xE0uLL);
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 624) + 8 * i;
      if ( (unsigned int)i >= *(_DWORD *)(a2 + 696) )
        v24 = *(_QWORD *)(a2 + 624);
      v25 = (int *)(*(_QWORD *)(360LL * *(unsigned __int16 *)(*(_QWORD *)v24 + 6LL) + *(_QWORD *)(v23 + 2584) + 32)
                  + 74LL * *(unsigned __int16 *)(*(_QWORD *)v24 + 8LL));
      DestinationString = 0LL;
      v26 = *v25;
      if ( (_DWORD)v26 )
        v27 = off_1C003FEE0[v26];
      else
        v27 = (wchar_t *)(v25 + 1);
      LODWORD(v63) = *(unsigned __int16 *)(*(_QWORD *)v24 + 8LL);
      LODWORD(v62) = *(unsigned __int16 *)(*(_QWORD *)v24 + 6LL);
      LODWORD(v61) = *(_DWORD *)(v23 + 316);
      LODWORD(Data) = *(_DWORD *)(v23 + 320);
      v13 = RtlStringCbPrintfW(
              pszDest,
              0x208uLL,
              L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
              *(_QWORD *)(a1 + 2632),
              Data,
              v61,
              v62,
              v63,
              v27);
      if ( v13 < 0 )
        goto LABEL_52;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v31 = *(_QWORD *)(a1 + 24);
      v64.Size = 224;
      v32 = *(_QWORD *)(v31 + 8 * v6);
      v33 = *(const void ***)(v32 + 8);
      v34 = *(_DWORD *)(v32 + 80);
      v35 = &v33[i];
      v36 = v35;
      if ( (unsigned int)i >= v34 )
        v36 = *(const void ***)(v32 + 8);
      v37 = (PPCW_INSTANCE *)((char *)*v36 + 216);
      if ( (unsigned int)i >= v34 )
        v35 = v33;
      v64.Data = *v35;
      v13 = PcwCreateInstance(v37, GpuPerformanceCounterSetEngine, &DestinationString, 1u, &v64);
      if ( v13 < 0 )
      {
LABEL_52:
        v59 = WdLogNewEntry5_WdAssertion(v29, v28, v30);
        WdLogEvent5_WdAssertion(v59);
        break;
      }
    }
    operator delete(pszDest);
    if ( v13 < 0 )
    {
LABEL_34:
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a2 + 40); j = (unsigned int)(j + 1) )
      {
        v46 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8 * j + 88);
        if ( v46 )
        {
          ExFreePoolWithTag(v46, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 8 * j + 88) = 0LL;
        }
      }
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a2 + 72); k = (unsigned int)(k + 1) )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
        v49 = *(_DWORD *)(v48 + 80);
        v50 = *(_QWORD **)(v48 + 8);
        v51 = &v50[k];
        if ( (unsigned int)k >= v49 )
          v51 = v50;
        if ( *v51 )
        {
          v52 = (PVOID *)&v50[k];
          if ( (unsigned int)k >= v49 )
            v52 = (PVOID *)v50;
          ExFreePoolWithTag(*v52, 0);
          v53 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
          v54 = *(_DWORD *)(v53 + 80);
          v55 = *(_QWORD **)(v53 + 8);
          v56 = &v55[k];
          if ( (unsigned int)k >= v54 )
            v56 = v55;
          *v56 = 0LL;
        }
      }
      v57 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 24) + 8 * v6);
      if ( v57 )
      {
        VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v57);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 24) + 8 * v6), 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) = 0LL;
      }
      goto LABEL_50;
    }
    for ( m = 0LL; (unsigned int)m < *(_DWORD *)(a2 + 40); *(_DWORD *)(v40 + 8) = 0 )
    {
      v39 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x32616956u);
      v11 = *(void ***)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v11[m + 11] = v39;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6);
      v40 = *(_QWORD *)(v12 + 8 * m + 88);
      if ( !v40 )
        goto LABEL_33;
      m = (unsigned int)(m + 1);
      *(_QWORD *)v40 = 0LL;
    }
    v41 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6) + 216LL);
    v41[1] = v41;
    *v41 = v41;
LABEL_29:
    ExReleasePushLockExclusiveEx(v3, 0LL);
    return 0LL;
  }
  v43 = WdLogNewEntry5_WdWarning(v10, v9);
  WdLogEvent5_WdWarning(v43);
LABEL_50:
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return 3221225495LL;
}
