/*
 * XREFs of BcdGetElementData @ 0x140971D10
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140971EF0 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
