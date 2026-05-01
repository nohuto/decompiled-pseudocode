/*
 * XREFs of ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18004121C
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040BE4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006D73C (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F640 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 *     ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006FDC0 (-RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpSystemSetProcessDefaultCpuSets(HANDLE ProcessHandle, PVOID ProcessInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !ProcessInformation )
    return NtSetInformationProcess(ProcessHandle, (PROCESSINFOCLASS)66, ProcessInformation, v2);
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
    return NtSetInformationProcess(ProcessHandle, (PROCESSINFOCLASS)66, ProcessInformation, v2);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v10 = 4LL;
      LastError = GetLastError();
      p_LastError = &LastError;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800B31E0,
        (unsigned __int8 *)dword_18009EB4C,
        0LL,
        0LL,
        3u,
        &v8);
    }
  }
  return -1073739509;
}
