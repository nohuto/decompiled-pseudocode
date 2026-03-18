/*
 * XREFs of CleanupSensorExplicitly @ 0x1C0022420
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01AC8E0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C00224A0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0025730 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ @ 0x1C01B490C (-ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  CBaseInput *v5; // rbx

  v4 = 6LL * (int)a1;
  v5 = *(&qword_1C023F018 + 6 * (int)a1);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v5 = *(&qword_1C023F018 + v4);
  }
  if ( CBaseInput::ExecutingOnSensorHostingThread(v5) )
  {
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
      CBaseInput::ivUnregisterChildLifetimeNotifications(v5);
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v5 + 40LL))(v5);
    CRIMBase::CleanupHandles(v5);
    *((_QWORD *)v5 + 159) = 0LL;
  }
}
