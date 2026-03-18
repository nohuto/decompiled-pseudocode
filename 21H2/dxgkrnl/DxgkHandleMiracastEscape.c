/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1C038E208
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C006111C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0061CB0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x1C038CE68 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C038D50C (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C038D988 (DpiMiracastHandleStopSessionDone.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  _DWORD *PoolWithQuotaTag; // r15
  char v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *DeviceContextFromLuid; // r14
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  char *v19; // rdx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  struct _KEVENT *v27; // r9
  void *v28; // rcx
  NTSTATUS v29; // eax
  unsigned int v30; // eax
  char v31; // [rsp+40h] [rbp-B8h]
  char v32; // [rsp+42h] [rbp-B6h]
  char v33; // [rsp+43h] [rbp-B5h]
  int v34; // [rsp+44h] [rbp-B4h]
  PVOID Src; // [rsp+48h] [rbp-B0h]
  PVOID Object[4]; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v37[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v38[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-58h]
  int v40; // [rsp+A8h] [rbp-50h]
  int v41; // [rsp+ACh] [rbp-4Ch]
  int v42; // [rsp+B0h] [rbp-48h]
  int v43; // [rsp+B4h] [rbp-44h]
  int v44; // [rsp+B8h] [rbp-40h]
  int v45; // [rsp+BCh] [rbp-3Ch]

  Object[2] = a2;
  LODWORD(v3) = 0;
  v4 = 0LL;
  PoolWithQuotaTag = 0LL;
  Src = 0LL;
  v6 = 0;
  v31 = 0;
  v33 = 0;
  v32 = 0;
  if ( a1 < 0x38 )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    return 3221225507LL;
  }
  *((_DWORD *)a2 + 12) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a2, 0);
  Object[1] = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v9, v8, v10, v11) == DeviceContextFromLuid[13] )
  {
    v16 = *((_DWORD *)a2 + 4);
    if ( v16 && (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v16, 0x74727044u)) == 0LL
      || (v17 = *((_DWORD *)a2 + 8)) != 0 && (Src = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x74727044u)) == 0LL )
    {
      v14 = -1073741801LL;
      LODWORD(v3) = -1073741801;
      v15 = 6LL;
      goto LABEL_9;
    }
    v18 = *((unsigned int *)a2 + 4);
    if ( (_DWORD)v18 )
    {
      v19 = (char *)a2[3];
      if ( (unsigned __int64)&v19[v18] > MmUserProbeAddress || &v19[v18] < v19 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        LODWORD(v18) = *((_DWORD *)a2 + 4);
        v19 = (char *)a2[3];
      }
      memmove(PoolWithQuotaTag, v19, (unsigned int)v18);
    }
    v20 = *((_DWORD *)a2 + 8);
    if ( v20 )
      ProbeForWrite((volatile void *)a2[5], v20, 1u);
    v21 = *((_DWORD *)a2 + 2);
    if ( (v21 & 6) != 0 )
    {
      AcquireMiniportListMutex();
      v6 = 1;
      v22 = DeviceContextFromLuid[54];
      if ( !v22 )
      {
        v14 = -1073741275LL;
LABEL_25:
        LODWORD(v3) = v14;
        goto LABEL_8;
      }
      v4 = *(_QWORD *)(v22 + 64);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 484) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      v31 = 1;
      v18 = *(unsigned int *)(v4 + 236);
      if ( (_DWORD)v18 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v18 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v18 == 4) )
      {
        v14 = -1073741130LL;
        goto LABEL_25;
      }
      v21 = *((_DWORD *)a2 + 2);
      if ( (v21 & 4) != 0 )
      {
        v23 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
        v3 = v23;
        if ( v23 < 0 )
          goto LABEL_7;
        v33 = 1;
        v21 = *((_DWORD *)a2 + 2);
      }
    }
    if ( (v21 & 1) != 0 )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
      DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
      v32 = 1;
      v21 = *((_DWORD *)a2 + 2);
    }
    if ( v21 == 4 )
    {
      LODWORD(v3) = DpiMiracastDdiMiracastIoControl(
                      v4,
                      DeviceContextFromLuid[56],
                      *((unsigned int *)a2 + 4),
                      (__int64)PoolWithQuotaTag,
                      *((_DWORD *)a2 + 8),
                      (__int64)Src,
                      (_DWORD *)a2 + 12);
      goto LABEL_61;
    }
    v24 = 8LL;
    if ( v21 == 8 )
    {
      if ( *((_DWORD *)a2 + 4) >= 0x350u )
      {
        DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
        goto LABEL_61;
      }
    }
    else
    {
      v24 = 16LL;
      if ( v21 != 16 )
      {
        if ( v21 == 24 )
        {
          v27 = 0LL;
          if ( *((_DWORD *)a2 + 4) >= 0x18u )
          {
            v28 = (void *)*((_QWORD *)PoolWithQuotaTag + 1);
            if ( v28 )
            {
              Object[0] = 0LL;
              v29 = ObReferenceObjectByHandle(v28, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
              v27 = (struct _KEVENT *)Object[0];
              LODWORD(v3) = v29;
              if ( v29 < 0 )
              {
                WdLogSingleEntry1(2LL, v29);
                v27 = 0LL;
              }
            }
            DpiMiracastStopMiracastSessionSync(
              (char *)DeviceContextFromLuid,
              0,
              0LL,
              v27,
              PoolWithQuotaTag[4],
              *PoolWithQuotaTag);
            goto LABEL_61;
          }
        }
        else
        {
          if ( v21 != 32 )
          {
            v25 = -1073741637LL;
            LODWORD(v3) = -1073741637;
LABEL_50:
            WdLogSingleEntry1(2LL, v25);
LABEL_61:
            v31 = v6;
            goto LABEL_62;
          }
          memset(v38, 0, sizeof(v38));
          v41 = 0;
          *((_BYTE *)DeviceContextFromLuid + 591) = 1;
          if ( *((_DWORD *)a2 + 4) >= 0x404u )
          {
            *((_BYTE *)PoolWithQuotaTag + 1023) = 0;
            v34 = 0;
            LOBYTE(v18) = 1;
            if ( (unsigned __int8)WdIsDebuggerPresent(v18) )
            {
              DbgPrintEx(0x65u, 0, (PCSTR)PoolWithQuotaTag);
              __debugbreak();
              v34 = 1;
            }
            v26 = PoolWithQuotaTag[256];
            v37[0] = 6;
            v37[1] = 64;
            v40 = 0;
            v39 = 0LL;
            memset(v38, 0, sizeof(v38));
            v42 = 74;
            v43 = v26;
            v44 = v34;
            v45 = 0;
            DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, 0x200000000LL);
            goto LABEL_61;
          }
        }
        LODWORD(v3) = -1073741811;
        v25 = -1073741811LL;
        goto LABEL_50;
      }
      if ( *((_DWORD *)a2 + 4) >= 0x350u )
      {
        DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)PoolWithQuotaTag, v13);
        goto LABEL_61;
      }
    }
    LODWORD(v3) = -1073741811;
    WdLogSingleEntry2(2LL, v24, -1073741811LL);
    goto LABEL_61;
  }
  v3 = -1073741790LL;
LABEL_7:
  v14 = v3;
LABEL_8:
  v15 = 2LL;
LABEL_9:
  WdLogSingleEntry1(v15, v14);
LABEL_62:
  if ( (int)v3 >= 0 )
  {
    v30 = *((_DWORD *)a2 + 12);
    if ( *((_DWORD *)a2 + 8) >= v30 )
    {
      if ( v30 )
        memmove((void *)a2[5], Src, *((unsigned int *)a2 + 12));
    }
    else
    {
      LODWORD(v3) = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v32 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v33 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
  if ( v31 )
  {
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    _InterlockedExchange64(&qword_1C01304D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
