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

int __stdcall RtlQueryHeapInformation(int a1, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  if ( a2 == -2147483647 )
    return RtlpQueryErrorInformationAddress(a5);
  if ( a2 )
  {
    if ( a2 != 2 )
    {
      if ( a2 == 4 )
        return RtlpHpTagQueryTags(a5);
      if ( a2 == 5 )
        return RtlpHpStackTraceSerialize(a5);
      return -1073741811;
    }
    if ( a4 < 0x2C )
      return -1073741811;
    return RtlpQueryExtendedHeapInformation(a5);
  }
  else if ( *(_DWORD *)(a1 + 8) == -571548178 || (*(_DWORD *)(a1 + 68) & 0x1000000) == 0 )
  {
    if ( a4 >= 4 )
    {
      if ( *(_DWORD *)(a1 + 8) == -571548178 )
        *a3 = 2;
      else
        *a3 = *(unsigned __int8 *)(a1 + 235);
      if ( a5 )
        *a5 = 4;
      return 0;
    }
    else
    {
      if ( a5 )
        *a5 = 4;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
