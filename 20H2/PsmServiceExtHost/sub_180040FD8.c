/*
 * XREFs of sub_180040FD8 @ 0x180040FD8
 * Callers:
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

NTSTATUS __fastcall sub_180040FD8(void *Src, int a2)
{
  __int64 v2; // rsi
  ULONG v4; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-118h] BYREF
  __int64 SystemInformation; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v9[168]; // [rsp+48h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+F0h] [rbp-58h] BYREF
  DWORD *p_LastError; // [rsp+110h] [rbp-38h]
  __int64 v12; // [rsp+118h] [rbp-30h]

  v2 = a2;
  v4 = 8;
  if ( !Src )
    goto LABEL_2;
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v4 = 8 * MaximumProcessorGroupCount + 8;
    memcpy(v9, Src, 8LL * MaximumProcessorGroupCount);
LABEL_2:
    SystemInformation = v2;
    return NtSetSystemInformation(SystemFirmwareTableInformation|0x80, &SystemInformation, v4);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v12 = 4LL;
      LastError = GetLastError();
      p_LastError = &LastError;
      sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009EB4C, 0LL, 0LL, 3u, &v10);
    }
  }
  return -1073739509;
}
