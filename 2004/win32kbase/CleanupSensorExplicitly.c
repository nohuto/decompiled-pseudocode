/*
 * XREFs of CleanupSensorExplicitly @ 0x1C004C440
 * Callers:
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01AEC60 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004C4C0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ @ 0x1C01B6C7C (-ivUnregisterChildLifetimeNotifications@CBaseInput@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CleanupSensorExplicitly(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  CBaseInput *v5; // rbx

  v4 = 6LL * (int)a1;
  v5 = *(&qword_1C0241018 + 6 * (int)a1);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v5 = *(&qword_1C0241018 + v4);
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
