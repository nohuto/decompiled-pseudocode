/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C00371C8
 * Callers:
 *     DriverCleanup @ 0x1C0077510 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !MS_USBXHCI_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBXHCI_ETW_PROVIDER_Context);
  MS_USBXHCI_ETW_PROVIDER_Context = 0LL;
  return result;
}
