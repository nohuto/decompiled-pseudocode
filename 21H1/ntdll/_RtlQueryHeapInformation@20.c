/*
 * XREFs of _RtlQueryHeapInformation@20 @ 0x4B356D50
 * Callers:
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 *     _RtlpReadProcessHeaps@0 @ 0x4B35EAE4 (_RtlpReadProcessHeaps@0.c)
 *     _RtlpHpStackTraceEtwCallback@36 @ 0x4B36E340 (_RtlpHpStackTraceEtwCallback@36.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpHpStackTraceSerialize@12 @ 0x4B36E775 (_RtlpHpStackTraceSerialize@12.c)
 *     _RtlpQueryErrorInformationAddress@12 @ 0x4B36F94B (_RtlpQueryErrorInformationAddress@12.c)
 *     _RtlpHpTagQueryTags@12 @ 0x4B370317 (_RtlpHpTagQueryTags@12.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  if ( HeapInformationClass == -2147483647 )
    return RtlpQueryErrorInformationAddress(HIDWORD(HeapInformationLength));
  if ( HeapInformationClass )
  {
    if ( HeapInformationClass != 2 )
    {
      if ( HeapInformationClass == 4 )
        return RtlpHpTagQueryTags(HIDWORD(HeapInformationLength));
      if ( HeapInformationClass == 5 )
        return RtlpHpStackTraceSerialize(HIDWORD(HeapInformationLength));
      return -1073741811;
    }
    if ( (unsigned int)HeapInformationLength < 0x2C )
      return -1073741811;
    return RtlpQueryExtendedHeapInformation(HIDWORD(HeapInformationLength));
  }
  else if ( *((_DWORD *)HeapHandle + 2) == -571548178 || (*((_DWORD *)HeapHandle + 17) & 0x1000000) == 0 )
  {
    if ( (unsigned int)HeapInformationLength >= 4 )
    {
      if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
        *(_DWORD *)HeapInformation = 2;
      else
        *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 235);
      if ( HIDWORD(HeapInformationLength) )
        *(_DWORD *)HIDWORD(HeapInformationLength) = 4;
      return 0;
    }
    else
    {
      if ( HIDWORD(HeapInformationLength) )
        *(_DWORD *)HIDWORD(HeapInformationLength) = 4;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
