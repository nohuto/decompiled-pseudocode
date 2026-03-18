/*
 * XREFs of ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C00519E0
 * Callers:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C005191C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::GetWorkAndWait(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rsi
  __int64 v9; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v8 = *(void **)(a1 + 48);
  if ( !v8 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 20) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = v9;
    ObfReferenceObject(v8);
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
