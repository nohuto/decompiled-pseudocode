/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407D5548
 * Callers:
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  dword_140C53D80 = 0;
  dword_140C53D84 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
