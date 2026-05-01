/*
 * XREFs of sub_1800411AC @ 0x1800411AC
 * Callers:
 *     sub_180041114 @ 0x180041114 (sub_180041114.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 */

NTSTATUS __fastcall sub_1800411AC(PVOID SystemInformation, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v5; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !SystemInformation )
  {
    v5 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v5 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)sub_180045CFC(SystemInformation, a2, a3, a4) )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v5);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v5);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v11 = 4LL;
    LastError = GetLastError();
    p_LastError = &LastError;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009EB4C, 0LL, 0LL, 3u, &v9);
  }
  return -1073739509;
}
