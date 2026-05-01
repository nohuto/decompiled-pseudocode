/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x1800780B4
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180075784 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  _DWORD v12[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-10h]

  v12[1] = 0;
  v13 = (unsigned __int64)(a1 + 4095) >> 12;
  v12[0] = 1;
  v10 = v12;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v11 = 16;
  v2 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v8 = a1;
    v7 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      byte_18009EAFD,
      v4,
      v5,
      (__int64)&v7,
      (__int64)&v8);
  }
  return v2;
}
