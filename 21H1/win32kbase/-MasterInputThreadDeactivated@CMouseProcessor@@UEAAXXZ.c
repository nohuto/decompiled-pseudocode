/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C004F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C004F390 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rcx

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
  CMouseProcessor::HandleMITTermination(this);
  *((_DWORD *)this + 3) = 1;
}
