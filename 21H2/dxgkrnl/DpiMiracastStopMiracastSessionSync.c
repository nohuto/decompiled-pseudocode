/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C001C290 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0062480 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C006423C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01DAC40 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F0830 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C038E160 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0061CB0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0062950 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1C00643E4 (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C00644C4 (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C038C97C (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C038DA88 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  char v6; // r14
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // r15
  char *v12; // r12
  IRP *v13; // rcx
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // eax
  struct _KEVENT *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _KEVENT *v20; // rcx
  int v21; // edx
  int v22; // edi
  int v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v29; // [rsp+61h] [rbp-68h]
  char v30; // [rsp+62h] [rbp-67h]
  char v31; // [rsp+63h] [rbp-66h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v33; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v35[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v36; // [rsp+98h] [rbp-31h]
  __int64 v37; // [rsp+A8h] [rbp-21h]
  __int64 v38; // [rsp+B0h] [rbp-19h]
  __int64 v39; // [rsp+B8h] [rbp-11h]
  int v40; // [rsp+C0h] [rbp-9h]
  unsigned int v41; // [rsp+C4h] [rbp-5h]
  int v42; // [rsp+C8h] [rbp-1h]
  int v43; // [rsp+CCh] [rbp+3h]

  v33 = a3;
  v6 = 0;
  DeviceObject = 0;
  v31 = a2;
  v30 = 1;
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
    WdLogSingleEntry1(4LL, P);
LABEL_49:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
    goto LABEL_50;
  }
  v11 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v11 + 484) )
    DpiCheckForOutstandingD3Requests(v11);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
  v12 = P + 32;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  v15 = *((_DWORD *)P + 102);
  if ( v15 != 2 )
  {
    if ( v15 != 1 )
    {
      if ( v15 == 3 )
      {
        v10 = 2;
        WdLogSingleEntry1(4LL, P);
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
        WdLogSingleEntry2(2LL, P, -2147483641LL);
      }
      goto LABEL_43;
    }
    v13 = (IRP *)*((_QWORD *)P + 53);
    if ( v13 )
      IoCancelIrp(v13);
  }
  v16 = 8;
  if ( !P[591] )
    v16 = a5;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      (_DWORD)v13,
      (unsigned int)&EventMiracastStopMiracastSession,
      v14,
      *(_QWORD *)(v11 + 48),
      *((_QWORD *)P + 12),
      *((_QWORD *)P + 19),
      v16,
      a6);
  if ( v16 <= 8 && (v17 = 374, _bittest(&v17, v16))
    || v16 - 133 <= 0xB && (LODWORD(v13) = 2065, _bittest((const int *)&v13, v16 - 133)) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      McTemplateK0qqqz_EtwWriteTransfer(
        (_DWORD)v13,
        (unsigned int)&EventMiracastStopMiracastSessionAbnormal,
        v14,
        v16,
        a6,
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
  }
  *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
  *((_DWORD *)P + 102) = 3;
  *((_DWORD *)P + 164) = v16;
  *((_DWORD *)P + 166) = a6;
  v29 = 1;
  *((_DWORD *)P + 104) = 2;
  DpiMiracastBroadcastDeviceStateChange(P);
  v18 = (struct _KEVENT *)*((_QWORD *)P + 59);
  if ( v18 )
  {
    KeSetEvent(v18, 0, 0);
    ObfDereferenceObject(*((PVOID *)P + 59));
  }
  v19 = (struct _KEVENT *)*((_QWORD *)P + 58);
  *((_QWORD *)P + 59) = a4;
  KeClearEvent(v19);
  if ( a4 )
    KeClearEvent(a4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  a4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v20 = (struct _KEVENT *)*((_QWORD *)P + 62);
  if ( v20 )
  {
    KeSetEvent(v20, 0, 0);
    *((_QWORD *)P + 62) = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v22 = 3;
  while ( 1 )
  {
    if ( v22 != 3 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LODWORD(Timeout) = 0;
    v23 = DpiMiracastSendAsyncUserModeRequest(
            (int)P,
            v21,
            2295816,
            0,
            (size_t)Timeout,
            0LL,
            0,
            (__int64)DpiMiracastStopSessionRequestCallback,
            (__int64)P,
            (PDEVICE_OBJECT)&DeviceObject,
            0LL);
    if ( DeviceObject )
      break;
    if ( !--v22 )
      goto LABEL_39;
  }
  v30 = 0;
LABEL_39:
  if ( v23 >= 0 )
  {
    v39 = 0LL;
    v42 = 2;
    v10 = 2;
    v38 = 0LL;
    v35[0] = 6;
    v35[1] = 64;
    v36 = 0LL;
    v37 = 0LL;
    v40 = 71;
    v41 = v16;
    v43 = a6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, 0x200000000uLL);
  }
  else
  {
    v10 = -2147483647;
    WdLogSingleEntry1(2LL, v23);
  }
  v6 = v29;
  v12 = P + 32;
LABEL_43:
  if ( v10 < 0 && v6 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v12);
  if ( *(_BYTE *)(v11 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
  KeLeaveCriticalRegion();
  if ( v30 )
    goto LABEL_49;
LABEL_50:
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v31 )
  {
    if ( v10 == 2 )
    {
      v24 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v33);
      v25 = v24;
      if ( v24 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        WdLogSingleEntry1(2LL, v25);
      }
      v10 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
