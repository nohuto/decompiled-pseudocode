/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C0053450
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00185C0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0053A20 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0055868 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0159E80 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C0172830 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C02CED90 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CEE38 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053F08 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1C0055A1C (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C0055AFC (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02CD4C8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C02CE638 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  char v6; // r12
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r15
  char *v13; // r13
  __int64 v14; // rdx
  IRP *v15; // rcx
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  int v21; // eax
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  struct _KEVENT *v24; // rcx
  __int64 v25; // rdx
  int v26; // edi
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v38; // [rsp+61h] [rbp-68h]
  char v39; // [rsp+62h] [rbp-67h]
  char v40; // [rsp+63h] [rbp-66h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v42; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v44[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v45; // [rsp+98h] [rbp-31h]
  __int64 v46; // [rsp+A8h] [rbp-21h]
  __int64 v47; // [rsp+B0h] [rbp-19h]
  __int64 v48; // [rsp+B8h] [rbp-11h]
  int v49; // [rsp+C0h] [rbp-9h]
  unsigned int v50; // [rsp+C4h] [rbp-5h]
  int v51; // [rsp+C8h] [rbp-1h]
  int v52; // [rsp+CCh] [rbp+3h]

  v42 = a3;
  v6 = 0;
  DeviceObject = 0;
  v40 = a2;
  v39 = 1;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v9 = *((_QWORD *)P + 54);
  if ( !v9 )
  {
    v10 = -2147483642;
    v11 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v11 + 24) = P;
    WdLogEvent5_WdEvent(v11);
LABEL_49:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopSessionRequestCallback);
    goto LABEL_50;
  }
  v12 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v12 + 484) )
    DpiCheckForOutstandingD3Requests(v12);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v12 + 168), 1u);
  v13 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  v17 = *((_DWORD *)P + 102);
  if ( v17 != 2 )
  {
    if ( v17 != 1 )
    {
      if ( v17 == 3 )
      {
        v10 = 2;
        v18 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v18 + 24) = P;
        WdLogEvent5_WdEvent(v18);
        if ( a4 && !*((_QWORD *)P + 59) )
        {
          KeClearEvent(a4);
          *((_QWORD *)P + 59) = a4;
          a4 = 0LL;
        }
      }
      else
      {
        v10 = -2147483641;
        v19 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v19 + 24) = P;
        *(_QWORD *)(v19 + 32) = -2147483641LL;
        WdLogEvent5_WdError(v19);
      }
      goto LABEL_43;
    }
    v15 = (IRP *)*((_QWORD *)P + 53);
    if ( v15 )
      IoCancelIrp(v15);
  }
  v20 = 8;
  if ( !P[591] )
    v20 = a5;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      (_DWORD)v15,
      (unsigned int)&EventMiracastStopMiracastSession,
      v16,
      *(_QWORD *)(v12 + 48),
      *((_QWORD *)P + 12),
      *((_QWORD *)P + 19),
      v20,
      a6);
  if ( v20 <= 8 && (v21 = 374, _bittest(&v21, v20))
    || v20 - 133 <= 0xB && (LODWORD(v15) = 2065, _bittest((const int *)&v15, v20 - 133)) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
      McTemplateK0qqqz_EtwWriteTransfer(
        (_DWORD)v15,
        (unsigned int)&EventMiracastStopMiracastSessionAbnormal,
        v16,
        v20,
        a6,
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
  }
  *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
  *((_DWORD *)P + 102) = 3;
  *((_DWORD *)P + 164) = v20;
  *((_DWORD *)P + 166) = a6;
  v38 = 1;
  *((_DWORD *)P + 104) = 2;
  DpiMiracastBroadcastDeviceStateChange(P);
  v22 = (struct _KEVENT *)*((_QWORD *)P + 59);
  if ( v22 )
  {
    KeSetEvent(v22, 0, 0);
    ObfDereferenceObject(*((PVOID *)P + 59));
  }
  v23 = (struct _KEVENT *)*((_QWORD *)P + 58);
  *((_QWORD *)P + 59) = a4;
  KeClearEvent(v23);
  if ( a4 )
    KeClearEvent(a4);
  a4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v24 = (struct _KEVENT *)*((_QWORD *)P + 62);
  if ( v24 )
  {
    KeSetEvent(v24, 0, 0);
    *((_QWORD *)P + 62) = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v26 = 3;
  while ( 1 )
  {
    if ( v26 != 3 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LODWORD(Timeout) = 0;
    v27 = DpiMiracastSendAsyncUserModeRequest(
            (int)P,
            v25,
            2295816,
            0,
            (size_t)Timeout,
            0LL,
            0,
            (__int64)DpiMiracastStopSessionRequestCallback,
            (__int64)P,
            (PDEVICE_OBJECT)&DeviceObject,
            0LL);
    v28 = v27;
    if ( DeviceObject )
      break;
    if ( !--v26 )
      goto LABEL_39;
  }
  v39 = 0;
LABEL_39:
  if ( v27 >= 0 )
  {
    v48 = 0LL;
    v51 = 2;
    v10 = 2;
    v47 = 0LL;
    v44[0] = 6;
    v44[1] = 64;
    v45 = 0LL;
    v46 = 0LL;
    v49 = 71;
    v50 = v20;
    v52 = a6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44, 0x200000000uLL);
  }
  else
  {
    v10 = -2147483647;
    v29 = WdLogNewEntry5_WdError(0LL, v25);
    *(_QWORD *)(v29 + 24) = v28;
    WdLogEvent5_WdError(v29);
  }
  v6 = v38;
  v13 = P + 32;
LABEL_43:
  if ( v10 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v13);
  if ( *(_BYTE *)(v12 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v12 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
  KeLeaveCriticalRegion();
  if ( v39 )
    goto LABEL_49;
LABEL_50:
  _InterlockedExchange64(&qword_1C00B1B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v40 )
  {
    if ( v10 == 2 )
    {
      v30 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v42);
      v31 = v30;
      if ( v30 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v34 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v34 + 24) = v31;
        WdLogEvent5_WdError(v34);
      }
      v10 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopMiracastSessionSync);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
