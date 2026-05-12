/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C002B894
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[354].Buffer )
    return IoSetDeviceInterfaceState(a1 + 354, 0);
  return result;
}
