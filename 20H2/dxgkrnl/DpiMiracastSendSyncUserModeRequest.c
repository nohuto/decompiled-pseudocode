/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x1C02CD9E0
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00526F0 (DpiMiracastInterfaceChange.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054860 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001E5B0 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039544 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C02165CC (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rsi
  struct _DEVICE_OBJECT *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  PIRP v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v39; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    v35 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v16) = -1073741790;
    *(_QWORD *)(v35 + 24) = -1073741790LL;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v11 = *(_QWORD *)(a1 + 432);
    if ( v11
      && ((v12 = *(_QWORD *)(v11 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)))
       || DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v12 + 3896), 1LL)) )
    {
      v15 = WdLogNewEntry5_WdError(v14, v13);
      LODWORD(v16) = -1073741790;
      *(_QWORD *)(v15 + 24) = -1073741790LL;
      WdLogEvent5_WdError(v15);
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v17 = *(struct _FILE_OBJECT **)(a1 + 176);
      v18 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v17 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v17 )
      {
        v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v22 + 24) = a1;
        WdLogEvent5_WdWarning(v22);
        return 3221226166LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
        McTemplateK0pqtqq_EtwWriteTransfer(
          v20,
          &EventEnterMiracastSendUserModeRequest,
          v21,
          *(_QWORD *)(a1 + 96),
          1,
          0,
          a6,
          0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v24 = IoBuildDeviceIoControlRequest(a2, v18, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
      if ( v24 )
      {
        v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = v17;
        v24->IoStatus.Status = -1073741637;
        LODWORD(v16) = IofCallDriver(v18, v24);
        if ( (_DWORD)v16 == 259 )
        {
          v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v16 = v29;
          if ( v29 )
          {
            v32 = WdLogNewEntry5_WdError(v31, v30);
            *(_QWORD *)(v32 + 24) = v16;
            WdLogEvent5_WdError(v32);
          }
          else
          {
            LODWORD(v16) = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        LODWORD(v16) = -1073741801;
        v28 = WdLogNewEntry5_WdLowResource(v25, 0LL, v26, v27);
        *(_QWORD *)(v28 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v28);
      }
      ObfDereferenceObject(v17);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        LODWORD(v39) = v16;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = 0;
        LODWORD(OutputBuffer) = 1;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v33,
          &EventLeaveMiracastSendUserModeRequest,
          v34,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v39);
      }
    }
  }
  return (unsigned int)v16;
}
