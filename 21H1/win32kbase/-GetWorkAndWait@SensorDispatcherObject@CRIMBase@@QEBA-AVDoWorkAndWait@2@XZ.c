/*
 * XREFs of ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0043F20
 * Callers:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0043E5C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::GetWorkAndWait(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rsi
  __int64 v6; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v5 = *(void **)(a1 + 48);
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 20) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = v6;
    ObfReferenceObject(v5);
    ObfReferenceObject(*(PVOID *)(a2 + 8));
  }
  else
  {
LABEL_7:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
