/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140896360
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
