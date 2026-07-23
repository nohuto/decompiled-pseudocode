/*
 * XREFs of _RtlQueryResourcePolicy@16 @ 0x4B2AFE50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D (_RtlpQueryPhysicalMemoryPolicy@4.c)
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18 (_RtlpQueryDiskSpacePolicy@8.c)
 *     _RtlpQueryDiskSpeedPolicy@4 @ 0x4B389DA1 (_RtlpQueryDiskSpeedPolicy@4.c)
 *     _RtlpQueryDiskWriteConstraintPolicy@8 @ 0x4B389DE4 (_RtlpQueryDiskWriteConstraintPolicy@8.c)
 */

int __stdcall RtlQueryResourcePolicy(int a1, int a2, int a3, int a4)
{
  PWSTR v5; // eax
  const wchar_t *NtSystemRoot; // eax

  if ( !a3 || a2 )
    return -1073741811;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0, 0);
  switch ( a1 )
  {
    case 0:
      if ( a4 == 4 )
        return RtlpQueryPhysicalMemoryPolicy(a3);
      return -1073741811;
    case 1:
      if ( a4 != 4 )
        return -1073741811;
      if ( (RtlGetSuiteMask() & 0x10000) != 0 )
        NtSystemRoot = L"C:\\data\\programs\\windowsapps";
      else
        NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
      return RtlpQueryDiskSpacePolicy(NtSystemRoot);
    case 2:
      if ( a4 != 4 )
        return -1073741811;
      return RtlpQueryDiskSpeedPolicy(a3);
    case 3:
      if ( a4 == 4 )
      {
        v5 = RtlGetNtSystemRoot();
        return RtlpQueryDiskWriteConstraintPolicy(v5, a3);
      }
      return -1073741811;
    default:
      return -1073741821;
  }
}
