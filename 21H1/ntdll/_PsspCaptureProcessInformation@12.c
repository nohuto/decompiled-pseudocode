/*
 * XREFs of _PsspCaptureProcessInformation@12 @ 0x4B38727C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 */

NTSTATUS __fastcall PsspCaptureProcessInformation(_DWORD *a1, void *a2, char a3)
{
  NTSTATUS result; // eax

  a1[3] = 32;
  result = ZwQueryInformationProcess(a2, ProcessBasicInformation, a1 + 3, 0x20u, 0);
  if ( result >= 0 )
  {
    result = ZwQueryInformationProcess(a2, ProcessTimes, a1 + 12, 0x20u, 0);
    if ( result >= 0 )
    {
      result = ZwQueryInformationProcess(a2, ProcessPriorityClass, a1 + 20, 2u, 0);
      if ( result >= 0 )
      {
        result = ZwQueryInformationProcess(a2, ProcessVmCounters, a1 + 22, 0x40u, 0);
        if ( result >= 0 )
        {
          if ( ZwQueryInformationProcess(a2, ProcessJobMemoryInformation, a1 + 38, 0x28u, 0) >= 0 )
            a1[1] |= 8u;
          if ( ZwQueryInformationProcess(a2, ProcessExecuteFlags, a1 + 48, 4u, 0) < 0 )
            a1[48] = 0;
          if ( ZwQueryInformationProcess(a2, ProcessCookie, a1 + 49, 4u, 0) < 0 )
            a1[49] = 0;
          if ( (a3 & 0x40) != 0 )
            PsspCaptureHandleTrace(a1, a2);
          *((_WORD *)a1 + 100) = 0;
          *((_WORD *)a1 + 101) = 256;
          a1[51] = a1 + 52;
          if ( ZwQueryInformationProcess(a2, ProcessImageFileNameWin32, a1 + 50, 0x108u, 0) < 0 )
          {
            a1[50] = 0;
            a1[51] = 0;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
