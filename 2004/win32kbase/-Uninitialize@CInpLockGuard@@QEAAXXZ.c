/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C000AE48
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00078C8 (UnInitializeInputComponents.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00086A4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000AD30 (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::Uninitialize(CInpLockGuard *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( *((_DWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_DWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteResourceLite(*(PERESOURCE *)this);
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
