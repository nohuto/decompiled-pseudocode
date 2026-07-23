/*
 * XREFs of _RtlAdjustPrivilege@16 @ 0x4B2E6D40
 * Callers:
 *     _RtlpSetPrivilege@8 @ 0x4B355FFE (_RtlpSetPrivilege@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenThreadToken@16 @ 0x4B2F2BC0 (_NtOpenThreadToken@16.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN Client, PBOOLEAN WasEnabled)
{
  NTSTATUS result; // eax
  int v5; // esi
  ULONG ReturnLength; // [esp+8h] [ebp-2Ch] BYREF
  HANDLE TokenHandle; // [esp+Ch] [ebp-28h] BYREF
  _TOKEN_PRIVILEGES PreviousState; // [esp+10h] [ebp-24h] BYREF
  _TOKEN_PRIVILEGES NewState; // [esp+20h] [ebp-14h] BYREF

  if ( Client == 1 )
    result = NtOpenThreadToken((HANDLE)0xFFFFFFFE, 0x28u, 0, &TokenHandle);
  else
    result = ZwOpenProcessToken((HANDLE)0xFFFFFFFF, 0x28u, &TokenHandle);
  if ( result >= 0 )
  {
    NewState.Privileges[0].Luid.LowPart = Privilege;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Luid.HighPart = 0;
    NewState.Privileges[0].Attributes = Enable != 0 ? 2 : 0;
    v5 = ZwAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    NtClose(TokenHandle);
    if ( v5 == 262 )
      v5 = -1073741727;
    if ( v5 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *WasEnabled = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *WasEnabled = Enable;
    }
    return v5;
  }
  return result;
}
