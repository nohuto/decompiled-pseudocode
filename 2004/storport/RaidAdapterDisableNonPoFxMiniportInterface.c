/*
 * XREFs of RaidAdapterDisableNonPoFxMiniportInterface @ 0x1C002B7E8
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableNonPoFxMiniportInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[366].Buffer )
    return IoSetDeviceInterfaceState(a1 + 366, 0);
  return result;
}
