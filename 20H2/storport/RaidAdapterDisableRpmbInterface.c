/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C002C6E8
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0079054 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
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
