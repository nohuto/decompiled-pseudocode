/*
 * XREFs of _RtlGetSystemBootStatus@16 @ 0x4B350B70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  return RtlpSystemBootStatusRequest(1, ReturnLength);
}
