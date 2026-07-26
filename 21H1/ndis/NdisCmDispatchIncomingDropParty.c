/*
 * XREFs of NdisCmDispatchIncomingDropParty @ 0x1C00B56B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCmDispatchIncomingDropParty(
        NDIS_STATUS DropStatus,
        NDIS_HANDLE NdisPartyHandle,
        PVOID Buffer,
        UINT Size)
{
  (*((void (__fastcall **)(NDIS_STATUS, _QWORD, PVOID, UINT))NdisPartyHandle + 3))(
    DropStatus,
    *((_QWORD *)NdisPartyHandle + 2),
    Buffer,
    Size);
}
