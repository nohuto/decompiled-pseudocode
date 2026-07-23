/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407D56B8
 * Callers:
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 */

_SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C53DC0 = 0;
  dword_140C53DC4 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
