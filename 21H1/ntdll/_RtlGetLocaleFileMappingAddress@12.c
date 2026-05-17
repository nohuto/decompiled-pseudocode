/*
 * XREFs of _RtlGetLocaleFileMappingAddress@12 @ 0x4B2EA2B0
 * Callers:
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 * Callees:
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtInitializeNlsFiles@12 @ 0x4B2F3970 (_NtInitializeNlsFiles@12.c)
 */

int __stdcall RtlGetLocaleFileMappingAddress(signed __int32 *a1, int *a2, int a3)
{
  int result; // eax
  signed __int32 v4; // ecx

  if ( !a1 )
    return -1073741585;
  if ( !a2 )
    return -1073741584;
  if ( gBaseAddress )
  {
    *a1 = gBaseAddress;
    *a2 = gDefaultLocaleId;
  }
  else
  {
    result = NtInitializeNlsFiles(a1, a2, 0);
    if ( result < 0 )
      return result;
    v4 = *a1;
    gDefaultLocaleId = *a2;
    if ( _InterlockedCompareExchange(&gBaseAddress, v4, 0) )
    {
      NtUnmapViewOfSection(-1, *a1);
      *a1 = gBaseAddress;
    }
  }
  return 0;
}
