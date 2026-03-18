/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1409E591C
 * Callers:
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E581C (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C5A6C0);
  do
  {
    result = ExAllocatePool2(64LL, 2080LL, 1819767877LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)result);
    result = (unsigned int)_InterlockedIncrement(&dword_140C5A6C4);
  }
  while ( (int)result < v0 );
  return result;
}
