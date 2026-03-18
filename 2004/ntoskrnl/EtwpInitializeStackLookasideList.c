/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407C28C8
 * Callers:
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  dword_140C53B60 = 0;
  dword_140C53B64 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
