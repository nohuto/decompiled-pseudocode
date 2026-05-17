/*
 * XREFs of RtlQueryHeapInformation @ 0x180073EA0
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1800F8090 (RtlpReadProcessHeaps.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180108DC0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x180073FCC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800742C4 (RtlpHpTagQueryTags.c)
 *     RtlpHpStackTraceSerialize @ 0x1801092C4 (RtlpHpStackTraceSerialize.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r10d

  if ( a2 == -2147483647 )
  {
    if ( a4 >= 8 )
    {
      *a3 = &RtlpHeapFailureInfo;
      v6 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    else
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    return v6;
  }
  else if ( a2 )
  {
    switch ( a2 )
    {
      case 2:
        if ( a4 < 0x58 )
          return 3221225485LL;
        else
          return RtlpQueryExtendedHeapInformation(a3, a4, a5);
      case 4:
        return RtlpHpTagQueryTags(a3, a4, a5);
      case 5:
        return RtlpHpStackTraceSerialize(a3, a4, a5);
      default:
        return 3221225485LL;
    }
  }
  else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    if ( a4 >= 4 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_DWORD *)a3 = 2;
      else
        *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 419);
      if ( a5 )
        *a5 = 4LL;
      return 0LL;
    }
    else
    {
      if ( a5 )
        *a5 = 4LL;
      return 3221225507LL;
    }
  }
  else
  {
    return 3221225474LL;
  }
}
