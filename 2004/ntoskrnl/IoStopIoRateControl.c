/*
 * XREFs of IoStopIoRateControl @ 0x1402008F4
 * Callers:
 *     PspIoRateEntryActivate @ 0x1405CED80 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405CEE88 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
