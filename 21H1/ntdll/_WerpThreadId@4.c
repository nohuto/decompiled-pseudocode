/*
 * XREFs of _WerpThreadId@4 @ 0x4B33B323
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

int __thiscall WerpThreadId(HANDLE ThreadHandle)
{
  _BYTE ThreadInformation[12]; // [esp+0h] [ebp-1Ch] BYREF
  int v3; // [esp+Ch] [ebp-10h]

  if ( NtQueryInformationThread(ThreadHandle, ThreadBasicInformation, ThreadInformation, 0x1Cu, 0) >= 0 )
    return v3;
  else
    return 0;
}
