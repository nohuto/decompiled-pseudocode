/*
 * XREFs of _EtwpShutdownCompression@4 @ 0x4B383186
 * Callers:
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __thiscall EtwpShutdownCompression(int *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( this[77] )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this[77]);
  result = (int)(this + 78);
  if ( this[78] )
  {
    v3 = 0;
    return NtFreeVirtualMemory(-1, (int)(this + 78), (int)&v3, 0x8000);
  }
  return result;
}
