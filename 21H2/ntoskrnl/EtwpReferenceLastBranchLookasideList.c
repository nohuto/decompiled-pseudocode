/*
 * XREFs of EtwpReferenceLastBranchLookasideList @ 0x1409EE3D4
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409EE454 (EtwpUpdateLastBranchTracingConfiguration.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 EtwpReferenceLastBranchLookasideList()
{
  __int64 v0; // rdi
  int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int)(24 * EtwpLastBranchStackSize + 16);
  v1 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C5A6A0);
  do
  {
    result = ExAllocatePool2(64LL, v0, 2021094469LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpLastBranchLookAsideList, (PSLIST_ENTRY)result);
    result = (unsigned int)_InterlockedIncrement(&dword_140C5A6A4);
  }
  while ( (int)result < v1 );
  return result;
}
