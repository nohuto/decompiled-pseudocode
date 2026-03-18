/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C000853C
 * Callers:
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C00083C4 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0008438 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0008488 (-Initialize@CInputConfig@@SAJXZ.c)
 *     RegisterCoreMsgProviderPreferences @ 0x1C0008510 (RegisterCoreMsgProviderPreferences.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  InputExtensibilityCallout *v6; // rdi
  int v7; // r14d
  int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BOOL8 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-28h]

  v6 = gpInputExtensibilityCallout;
  v7 = a4;
  v8 = a3;
  v9 = 5LL * (int)a2;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5 * (int)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  RIMLockExclusive((char *)v6 + 8);
  *((_DWORD *)v6 + 2 * v9 + 10) = v8;
  v13 = v7 != 0;
  if ( v13 != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10, v11, v12);
  LODWORD(v14) = v7;
  *((_QWORD *)&v14 + 1) = a6;
  *(_OWORD *)((char *)v6 + 8 * v9 + 48) = v14;
  *((_QWORD *)v6 + v9 + 8) = a5;
  *((_QWORD *)v6 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 8, 0LL);
  KeLeaveCriticalRegion();
}
