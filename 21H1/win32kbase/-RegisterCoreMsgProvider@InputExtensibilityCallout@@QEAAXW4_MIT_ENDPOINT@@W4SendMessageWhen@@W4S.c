/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0022E1C
 * Callers:
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0022CA4 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0022D18 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0022D68 (-Initialize@CInputConfig@@SAJXZ.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1C0022DF0 (RegisterCoreMsgProviderPreferences.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  InputExtensibilityCallout *v6; // rdi
  __int64 v9; // rsi
  _BOOL8 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h]

  v6 = gpInputExtensibilityCallout;
  v9 = 5LL * a2;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5 * a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  RIMLockExclusive((char *)v6 + 8);
  *((_DWORD *)v6 + 2 * v9 + 10) = a3;
  v10 = a4 != 0;
  if ( v10 != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  LODWORD(v11) = a4;
  *((_QWORD *)&v11 + 1) = a6;
  *(_OWORD *)((char *)v6 + 8 * v9 + 48) = v11;
  *((_QWORD *)v6 + v9 + 8) = a5;
  *((_QWORD *)v6 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 8, 0LL);
  KeLeaveCriticalRegion();
}
