/*
 * XREFs of ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180040FA8
 * Callers:
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040EC0 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 */

NTSTATUS __fastcall RmpSystemSetWorkloadAllowedCpuSets(const void *a1, int a2)
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
  if ( !a1 )
    goto LABEL_2;
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v4 = 8 * MaximumProcessorGroupCount + 8;
    memcpy_0(v9, a1, 8LL * MaximumProcessorGroupCount);
LABEL_2:
    SystemInformation = v2;
    return NtSetSystemInformation(SystemFirmwareTableInformation|0x80, &SystemInformation, v4);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v12 = 4LL;
      LastError = GetLastError();
      p_LastError = &LastError;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B31E0,
        (unsigned __int8 *)dword_18009EB4C,
        0LL,
        0LL,
        3u,
        &v10);
    }
  }
  return -1073739509;
}
