/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0022148
 * Callers:
 *     UnInitializeInputComponents @ 0x1C001EB24 (UnInitializeInputComponents.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0022038 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00229BC (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::Uninitialize(CInpLockGuard *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_DWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteResourceLite(*(PERESOURCE *)this);
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
