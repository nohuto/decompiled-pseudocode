/*
 * XREFs of _RtlExtendMemoryBlockLookaside@8 @ 0x4B34D550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 */

NTSTATUS __cdecl RtlExtendMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG Increment)
{
  return RtlExtendMemoryZone(*((_DWORD *)MemoryBlockLookaside + 2), Increment);
}
