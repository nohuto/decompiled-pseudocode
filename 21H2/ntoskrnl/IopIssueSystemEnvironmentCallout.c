/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14093F400
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
