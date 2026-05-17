/*
 * XREFs of PsspCaptureHandleTrace @ 0x180114B98
 * Callers:
 *     PsspCaptureProcessInformation @ 0x180114EEC (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DF80 (NtCreateSection.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rcx
  int v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v8; // [rsp+58h] [rbp-A8h]
  ULONG ProcessInformationLength; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+64h] [rbp-9Ch]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * ProcessInformation[2];
    if ( v5 > 0xFFFFFFFF )
      return -1073741675;
    ProcessInformationLength = 160 * ProcessInformation[2];
    if ( (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      v10 = 0;
      ProcessInformationLength = v5 + 176;
      result = NtCreateSection();
      if ( result >= 0 )
      {
        v8 = 0LL;
        v12 = 0LL;
        v6 = ZwMapViewOfSection();
        if ( v6 >= 0 )
        {
          memset(v8, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v8, ProcessInformationLength, &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection();
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = Handle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection();
            return NtClose(Handle);
          }
        }
        else
        {
          NtClose(Handle);
          return v6;
        }
      }
    }
  }
  return result;
}
