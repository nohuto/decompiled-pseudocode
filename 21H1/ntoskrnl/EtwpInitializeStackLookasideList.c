/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140784888
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

_SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C53C60 = 0;
  dword_140C53C64 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
