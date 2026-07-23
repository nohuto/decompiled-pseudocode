/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140931070
 * Callers:
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpInitializeStackTracing @ 0x140930F0C (EtwpInitializeStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C53C60);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C53C64);
  }
  while ( (int)result < v0 );
  return result;
}
