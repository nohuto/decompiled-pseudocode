/*
 * XREFs of ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000C440
 * Callers:
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C000ACC0 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000CA48 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AFCF0 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01AFE00 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C000C4A8 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
