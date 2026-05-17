/*
 * XREFs of _RtlExtendMemoryBlockLookaside@8 @ 0x4B34D550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExtendMemoryZone@8 @ 0x4B34D780 (_RtlExtendMemoryZone@8.c)
 */

int __stdcall RtlExtendMemoryBlockLookaside(int a1, int a2)
{
  return RtlExtendMemoryZone(*(_DWORD *)(a1 + 8), a2);
}
