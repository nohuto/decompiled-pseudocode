/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C02CEE38
 * Callers:
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C005262C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053450 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C02CD9E8 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02CE09C (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C02CE524 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  _DWORD *PoolWithQuotaTag; // r15
  char v6; // r12
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DeviceContextFromLuid; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // eax
  char *v24; // rdx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // rax
  int v31; // r13d
  int v32; // eax
  struct _KEVENT *v33; // r9
  void *v34; // rcx
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rax
  void *v42; // r13
  __int64 v43; // rdi
  char v44; // [rsp+40h] [rbp-B8h]
  char v45; // [rsp+42h] [rbp-B6h]
  char v46; // [rsp+43h] [rbp-B5h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  PVOID v49; // [rsp+60h] [rbp-98h]
  __int64 v50; // [rsp+68h] [rbp-90h]
  __int64 v51; // [rsp+70h] [rbp-88h]
  __int64 v52; // [rsp+78h] [rbp-80h]
  _DWORD v53[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v54[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-58h]
  int v56; // [rsp+A8h] [rbp-50h]
  int v57; // [rsp+ACh] [rbp-4Ch]
  int v58; // [rsp+B0h] [rbp-48h]
  int v59; // [rsp+B4h] [rbp-44h]
  int v60; // [rsp+B8h] [rbp-40h]
  int v61; // [rsp+BCh] [rbp-3Ch]

  v51 = a2;
  LODWORD(v3) = 0;
  v4 = 0LL;
  v52 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v44 = 0;
  v46 = 0;
  v45 = 0;
  if ( (unsigned int)a1 < 0x38 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
    return 3221225507LL;
  }
  *(_DWORD *)(a2 + 48) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*(_QWORD *)a2, 0);
  v50 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v10, v9) != *(_QWORD *)(DeviceContextFromLuid + 104) )
  {
    v3 = -1073741790LL;
LABEL_7:
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = v3;
LABEL_8:
    WdLogEvent5_WdError(v16);
    goto LABEL_63;
  }
  v19 = *(_DWORD *)(a2 + 16);
  if ( v19 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x74727044u)) == 0LL
    || (v23 = *(_DWORD *)(a2 + 32)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v23, 0x74727044u)) == 0LL )
  {
    LODWORD(v3) = -1073741801;
    v22 = WdLogNewEntry5_WdLowResource(v20, v13, v15, v21);
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v22);
    goto LABEL_63;
  }
  v14 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v14 )
  {
    v24 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v24[v14] > MmUserProbeAddress || &v24[v14] < v24 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v14) = *(_DWORD *)(a2 + 16);
      v24 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v24, (unsigned int)v14);
  }
  v25 = *(_DWORD *)(a2 + 32);
  if ( v25 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v25, 1u);
  v26 = *(_DWORD *)(a2 + 8);
  if ( (v26 & 6) != 0 )
  {
    AcquireMiniportListMutex();
    v6 = 1;
    v27 = *(_QWORD *)(DeviceContextFromLuid + 432);
    if ( !v27 )
    {
      v28 = -1073741275LL;
LABEL_24:
      LODWORD(v3) = v28;
      v16 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v16 + 24) = v28;
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v27 + 64);
    v52 = v4;
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 484) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v44 = 1;
    v14 = *(unsigned int *)(v4 + 236);
    if ( (_DWORD)v14 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v14 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 4) )
    {
      v28 = -1073741130LL;
      goto LABEL_24;
    }
    v26 = *(_DWORD *)(a2 + 8);
    if ( (v26 & 4) != 0 )
    {
      v29 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
      v3 = v29;
      if ( v29 < 0 )
        goto LABEL_7;
      v46 = 1;
      v26 = *(_DWORD *)(a2 + 8);
    }
  }
  if ( (v26 & 1) != 0 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 32);
    *(_QWORD *)(DeviceContextFromLuid + 88) = KeGetCurrentThread();
    v45 = 1;
    v26 = *(_DWORD *)(a2 + 8);
  }
  if ( v26 == 4 )
  {
    LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                    v4,
                    *(_QWORD *)(DeviceContextFromLuid + 448),
                    *(unsigned int *)(a2 + 16),
                    (__int64)PoolWithQuotaTag,
                    *(_DWORD *)(a2 + 32),
                    (__int64)Src,
                    (_DWORD *)(a2 + 48));
    goto LABEL_62;
  }
  if ( v26 == 8 )
  {
    if ( *(_DWORD *)(a2 + 16) >= 0x350u )
    {
      DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v15);
      goto LABEL_62;
    }
    LODWORD(v3) = -1073741811;
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = 8LL;
    goto LABEL_58;
  }
  if ( v26 != 16 )
  {
    if ( v26 == 24 )
    {
      v33 = 0LL;
      v49 = 0LL;
      if ( *(_DWORD *)(a2 + 16) >= 0x18u )
      {
        v34 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
        if ( v34 )
        {
          Object = 0LL;
          v35 = ObReferenceObjectByHandle(v34, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
          v38 = v35;
          v33 = (struct _KEVENT *)Object;
          v49 = Object;
          LODWORD(v3) = v35;
          if ( v35 < 0 )
          {
            v39 = WdLogNewEntry5_WdError(v37, v36);
            *(_QWORD *)(v39 + 24) = v38;
            WdLogEvent5_WdError(v39);
            v33 = 0LL;
            v49 = 0LL;
          }
        }
        DpiMiracastStopMiracastSessionSync(
          (char *)DeviceContextFromLuid,
          0,
          0LL,
          v33,
          PoolWithQuotaTag[4],
          *PoolWithQuotaTag);
        goto LABEL_62;
      }
    }
    else
    {
      if ( v26 != 32 )
      {
        LODWORD(v3) = -1073741637;
        v30 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v30 + 24) = -1073741637LL;
LABEL_59:
        WdLogEvent5_WdError(v30);
        goto LABEL_62;
      }
      memset(v54, 0, sizeof(v54));
      v57 = 0;
      *(_BYTE *)(DeviceContextFromLuid + 591) = 1;
      if ( *(_DWORD *)(a2 + 16) >= 0x404u )
      {
        *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
        v31 = 0;
        LOBYTE(v14) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v14) )
        {
          DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
          __debugbreak();
          v31 = 1;
        }
        v32 = PoolWithQuotaTag[256];
        v53[0] = 6;
        v53[1] = 64;
        v56 = 0;
        v55 = 0LL;
        memset(v54, 0, sizeof(v54));
        v58 = 74;
        v59 = v32;
        v60 = v31;
        v61 = 0;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v53, 0x200000000LL);
        goto LABEL_62;
      }
    }
    LODWORD(v3) = -1073741811;
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 16) < 0x350u )
  {
    LODWORD(v3) = -1073741811;
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = 16LL;
LABEL_58:
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    goto LABEL_59;
  }
  DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v15);
LABEL_62:
  v44 = v6;
LABEL_63:
  if ( (int)v3 < 0 )
  {
LABEL_68:
    v42 = Src;
    goto LABEL_69;
  }
  v40 = *(_DWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 32) < v40 )
  {
    LODWORD(v3) = -1073741811;
    v41 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v41);
    goto LABEL_68;
  }
  if ( !v40 )
    goto LABEL_68;
  v42 = Src;
  memmove(*(void **)(a2 + 40), Src, *(unsigned int *)(a2 + 48));
LABEL_69:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  if ( v45 )
  {
    *(_QWORD *)(DeviceContextFromLuid + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 32);
  }
  if ( v46 )
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(DeviceContextFromLuid + 432), *(_BYTE *)(a2 + 12));
  if ( v44 )
  {
    v43 = v52;
    if ( *(_BYTE *)(v52 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v52 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v43 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C00B1B50, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, DeviceContextFromLuid);
  return (unsigned int)v3;
}
