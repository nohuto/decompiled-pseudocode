/*
 * XREFs of ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000AC9C
 * Callers:
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C0009EB4 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000E3D8 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AD970 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01ADA80 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C000AD04 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_FreeInputSpace(CInputConfig *this, struct _LIST_ENTRY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  CInputSpace::FreeRegions((CInputSpace *)&a2[1]);
  Win32FreePool(a2);
}
