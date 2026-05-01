/*
 * XREFs of MemUtilEmptyProcess @ 0x180085ABC
 * Callers:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x180070EE8 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     MemUtilPrioritizeWsPages @ 0x180085C58 (MemUtilPrioritizeWsPages.c)
 */

ULONG __fastcall MemUtilEmptyProcess(HANDLE ProcessHandle, unsigned int a2)
{
  char v3; // bl
  int v4; // r8d
  ULONG result; // eax
  int v6; // eax
  int v7; // eax
  _DWORD ProcessInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v4 = (a2 >> 1) & 1 | 2;
  if ( (a2 & 4) == 0 )
    v4 = (a2 >> 1) & 1;
  if ( !v4 || (result = MemUtilPrioritizeWsPages(ProcessHandle)) == 0 )
  {
    ProcessInformation[0] = 3;
    ProcessInformation[1] = 1;
    v9 = 4;
    if ( (v3 & 1) == 0 )
    {
      v6 = 15;
      if ( (v3 & 8) != 0 )
        v6 = 31;
      v9 = v6;
    }
    v7 = NtSetInformationProcess(
           ProcessHandle,
           ProcessThreadStackAllocation|ProcessUserModeIOPL,
           ProcessInformation,
           0xCu);
    if ( v7 >= 0 )
      return 0;
    else
      return RtlNtStatusToDosError(v7);
  }
  return result;
}
