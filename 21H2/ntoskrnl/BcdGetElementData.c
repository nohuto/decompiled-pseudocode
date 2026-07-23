/*
 * XREFs of BcdGetElementData @ 0x14096F608
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC980 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x14096F7E8 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
