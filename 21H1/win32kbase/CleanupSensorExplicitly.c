/*
 * XREFs of CleanupSensorExplicitly @ 0x1C003F9F0
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01B49C0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C003FA70 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C009E350 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ @ 0x1C01BC9DC (-ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1)
{
  __int64 v1; // rdi
  CBaseInput *v2; // rbx

  v1 = 6LL * (int)a1;
  v2 = *(&qword_1C0247018 + 6 * (int)a1);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(&qword_1C0247018 + v1);
  }
  if ( CBaseInput::ExecutingOnSensorHostingThread(v2) )
  {
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
      CBaseInput::ivUnregisterChildLifetimeNotifications(v2);
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v2 + 40LL))(v2);
    CRIMBase::CleanupHandles(v2);
    *((_QWORD *)v2 + 159) = 0LL;
  }
}
