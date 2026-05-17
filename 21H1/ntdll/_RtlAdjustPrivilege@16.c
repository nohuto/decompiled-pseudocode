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

int __stdcall RtlAdjustPrivilege(int a1, bool a2, char a3, bool *a4)
{
  int result; // eax
  int v5; // esi
  char v6[4]; // [esp+8h] [ebp-2Ch] BYREF
  HANDLE Handle; // [esp+Ch] [ebp-28h] BYREF
  int v8[3]; // [esp+10h] [ebp-24h] BYREF
  int v9; // [esp+1Ch] [ebp-18h]
  _DWORD v10[4]; // [esp+20h] [ebp-14h] BYREF

  if ( a3 == 1 )
    result = NtOpenThreadToken(-2, 40, 0, &Handle);
  else
    result = ZwOpenProcessToken(-1, 40, &Handle);
  if ( result >= 0 )
  {
    v10[1] = a1;
    v10[0] = 1;
    v10[2] = 0;
    v10[3] = a2 ? 2 : 0;
    v5 = ZwAdjustPrivilegesToken(Handle, 0, v10, 16, v8, v6);
    NtClose(Handle);
    if ( v5 == 262 )
      v5 = -1073741727;
    if ( v5 >= 0 )
    {
      if ( v8[0] )
        *a4 = (v9 & 2) != 0;
      else
        *a4 = a2;
    }
    return v5;
  }
  return result;
}
