/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C005B018
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005AF1C (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C0076AA0 (ProtectHandle.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(IOCPDispatcher *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  NTSTATUS v11; // edi
  __int64 v12; // r9

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( !*((_QWORD *)this + 343) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v11 = ZwDuplicateObject(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          *((HANDLE *)this + 343),
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          (PHANDLE)this + 344,
          0,
          0,
          2u);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v10,
        3,
        24,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
        v11);
    }
  }
  else
  {
    LOBYTE(v12) = 1;
    ProtectHandle(*((_QWORD *)this + 344), v10, 0LL, v12);
  }
  return v11 >= 0;
}
