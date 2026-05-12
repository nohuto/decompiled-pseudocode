/*
 * XREFs of RaidAdapterDisableNonPoFxMiniportInterface @ 0x1C002C63C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0079054 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
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
