/*
 * XREFs of PsspCaptureProcessInformation @ 0x180114EAC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CB0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     PsspCaptureHandleTrace @ 0x180114B58 (PsspCaptureHandleTrace.c)
 */

NTSTATUS __fastcall PsspCaptureProcessInformation(_QWORD *a1, void *a2, char a3)
{
  NTSTATUS result; // eax

  a1[2] = 64LL;
  result = NtQueryInformationProcess(a2, ProcessBasicInformation, a1 + 2, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationProcess(a2, ProcessTimes, a1 + 10, 0x20u, 0LL);
    if ( result >= 0 )
    {
      result = NtQueryInformationProcess(a2, ProcessPriorityClass, a1 + 14, 2u, 0LL);
      if ( result >= 0 )
      {
        result = NtQueryInformationProcess(a2, ProcessVmCounters, a1 + 15, 0x70u, 0LL);
        if ( result >= 0 )
        {
          if ( NtQueryInformationProcess(a2, ProcessJobMemoryInformation, a1 + 29, 0x28u, 0LL) >= 0 )
            *((_DWORD *)a1 + 1) |= 8u;
          if ( NtQueryInformationProcess(a2, ProcessExecuteFlags, a1 + 34, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 68) = 0;
          if ( NtQueryInformationProcess(a2, ProcessCookie, (char *)a1 + 276, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 69) = 0;
          if ( (a3 & 0x40) != 0 )
            PsspCaptureHandleTrace((__int64)a1, a2);
          *((_WORD *)a1 + 141) = 256;
          *((_WORD *)a1 + 140) = 0;
          a1[36] = a1 + 37;
          if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, a1 + 35, 0x110u, 0LL) < 0 )
            *(_OWORD *)(a1 + 35) = 0LL;
          return 0;
        }
      }
    }
  }
  return result;
}
