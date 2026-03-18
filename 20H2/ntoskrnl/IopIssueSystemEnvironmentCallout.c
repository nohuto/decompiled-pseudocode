/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14089D330
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
