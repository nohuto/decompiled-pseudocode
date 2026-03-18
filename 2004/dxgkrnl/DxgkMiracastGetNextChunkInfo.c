/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x1C00546C8
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1C0224500 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C005235C (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x1C005262C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DxgkMiracastGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a5,
        unsigned int *a6)
{
  __int64 v6; // rbp
  __int64 DeviceContextFromLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  union _LARGE_INTEGER *Timeout; // rdx
  int v21; // ecx
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v14 = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    v15 = -1073741811;
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_20;
  }
  v17 = *(_QWORD *)(DeviceContextFromLuid + 432);
  if ( !v17 || *(_QWORD *)(DeviceContextFromLuid + 496) )
    goto LABEL_4;
  if ( (unsigned int)(*(_DWORD *)(DeviceContextFromLuid + 408) - 1) > 1 )
  {
LABEL_8:
    v18 = -1073741653LL;
    goto LABEL_5;
  }
  v15 = ProcessMiracastAPIChunk(
          (struct _MIRACAST_DEVICE_CONTEXT *)DeviceContextFromLuid,
          *(struct _FDO_CONTEXT **)(v17 + 64),
          a4,
          a5,
          a6);
  if ( v15 == -1073741762 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(v14 + 496) = &Event;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v23 = 0LL;
    Timeout = 0LL;
    if ( (_DWORD)v6 != -1 )
    {
      Timeout = (union _LARGE_INTEGER *)&v23;
      v23 = -10000 * v6;
    }
    v21 = *(_DWORD *)(a3 + 280);
    *(_QWORD *)a3 = &Event;
    v15 = KeWaitForMultipleObjects(v21 + 1, (PVOID *)a3, WaitAny, Executive, 0, 0, Timeout, (PKWAIT_BLOCK)(a3 + 40));
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v17 = *(_QWORD *)(v14 + 432);
    if ( v17 )
    {
      v17 = *(_QWORD *)(v17 + 64);
      *(_QWORD *)(v14 + 496) = 0LL;
      if ( *(_DWORD *)(v14 + 408) != 2 )
        goto LABEL_8;
      if ( v15 )
      {
        if ( v15 >= 1 && v15 < *(_DWORD *)(a3 + 280) + 1 )
          --v15;
        *a4 = 0;
      }
      else
      {
        v15 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v14, (struct _FDO_CONTEXT *)v17, a4, a5, a6);
      }
      goto LABEL_20;
    }
LABEL_4:
    v18 = -1073741811LL;
LABEL_5:
    v15 = v18;
    v19 = WdLogNewEntry5_WdWarning(v12, v17, v13);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdWarning(v19);
  }
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v14 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v14, v14);
  return (unsigned int)v15;
}
