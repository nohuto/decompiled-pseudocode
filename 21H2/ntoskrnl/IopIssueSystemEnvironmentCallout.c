/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14089A900
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
