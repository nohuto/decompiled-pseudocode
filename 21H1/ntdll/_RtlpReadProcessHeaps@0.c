/*
 * XREFs of _RtlpReadProcessHeaps@0 @ 0x4B35EAE4
 * Callers:
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 * Callees:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 *     _RtlpPushPageDescriptor@8 @ 0x4B35E9DA (_RtlpPushPageDescriptor@8.c)
 */

char __stdcall RtlpReadProcessHeaps()
{
  char result; // al
  ULONG_PTR *v1; // [esp+0h] [ebp-30h]
  _DWORD HeapInformation[11]; // [esp+4h] [ebp-2Ch] BYREF

  HeapInformation[0] = -1;
  HeapInformation[3] = RtlpLeakCallbackRoutine;
  HeapInformation[1] = 0;
  HeapInformation[4] = 0;
  HeapInformation[2] = 5;
  result = RtlQueryHeapInformation(0, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x2CuLL, v1);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1);
  RtlpLDPreviousPage = 0;
  RtlpLDNumBlocks = 0;
  return result;
}
