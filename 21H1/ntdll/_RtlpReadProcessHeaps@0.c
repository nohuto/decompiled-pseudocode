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
  _DWORD v1[11]; // [esp+4h] [ebp-2Ch] BYREF

  v1[0] = -1;
  v1[3] = RtlpLeakCallbackRoutine;
  v1[1] = 0;
  v1[4] = 0;
  v1[2] = 5;
  result = RtlQueryHeapInformation(0, 2, v1, 0x2Cu, 0);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1);
  RtlpLDPreviousPage = 0;
  RtlpLDNumBlocks = 0;
  return result;
}
