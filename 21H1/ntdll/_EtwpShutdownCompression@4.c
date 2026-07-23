/*
 * XREFs of _EtwpShutdownCompression@4 @ 0x4B383186
 * Callers:
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __thiscall EtwpShutdownCompression(PVOID *this)
{
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [esp+4h] [ebp-4h] BYREF

  if ( this[77] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, this[77]);
  result = (NTSTATUS)(this + 78);
  if ( this[78] )
  {
    LODWORD(RegionSize) = 0;
    return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, this + 78, &RegionSize, 0x8000u);
  }
  return result;
}
