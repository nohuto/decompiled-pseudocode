/*
 * XREFs of sub_1800412D4 @ 0x1800412D4
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1800412D4(HANDLE ProcessHandle, PVOID ProcessInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !ProcessInformation )
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v10 = 4LL;
      LastError = GetLastError();
      p_LastError = &LastError;
      sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009EB4C, 0LL, 0LL, 3u, &v8);
    }
  }
  return -1073739509;
}
