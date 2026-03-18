/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C004D5A8
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C004D4AC (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(IOCPDispatcher *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  NTSTATUS v8; // edi
  __int64 v9; // r9

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( !*((_QWORD *)this + 343) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v8 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 343),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 344,
         0,
         0,
         2u);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        3,
        24,
        (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
        v8);
    }
  }
  else
  {
    LOBYTE(v9) = 1;
    ProtectHandle(*((_QWORD *)this + 344), v7, 0LL, v9);
  }
  return v8 >= 0;
}
