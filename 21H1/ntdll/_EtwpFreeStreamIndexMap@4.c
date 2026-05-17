/*
 * XREFs of _EtwpFreeStreamIndexMap@4 @ 0x4B2EE48E
 * Callers:
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __thiscall EtwpFreeStreamIndexMap(int *this)
{
  int result; // eax

  result = this[88];
  if ( result )
  {
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this[88]);
    this[88] = 0;
  }
  return result;
}
