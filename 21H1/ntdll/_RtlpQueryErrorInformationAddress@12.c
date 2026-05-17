/*
 * XREFs of _RtlpQueryErrorInformationAddress@12 @ 0x4B36F94B
 * Callers:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpQueryErrorInformationAddress(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  if ( a2 >= 4 )
  {
    *a1 = &RtlpHeapFailureInfo;
    if ( a3 )
      *a3 = 4;
    return 0;
  }
  else
  {
    if ( a3 )
      *a3 = 4;
    return -1073741789;
  }
}
