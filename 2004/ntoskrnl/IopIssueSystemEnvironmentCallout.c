/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140897680
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
