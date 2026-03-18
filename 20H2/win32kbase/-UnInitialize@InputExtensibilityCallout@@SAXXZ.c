/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007E00
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C009C2A0 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C0007E4C (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(InputExtensibilityCallout *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  InputExtensibilityCallout *v5; // rbx

  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CloseCoreMsgPort(a1);
    v5 = gpInputExtensibilityCallout;
    if ( gpInputExtensibilityCallout )
    {
      if ( *((_QWORD *)gpInputExtensibilityCallout + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
      Win32FreePool(v5);
    }
    gpInputExtensibilityCallout = 0LL;
  }
}
