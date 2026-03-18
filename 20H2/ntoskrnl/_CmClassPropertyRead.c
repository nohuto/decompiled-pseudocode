/*
 * XREFs of _CmClassPropertyRead @ 0x140373D04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14075AF0C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140978338 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 > 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
