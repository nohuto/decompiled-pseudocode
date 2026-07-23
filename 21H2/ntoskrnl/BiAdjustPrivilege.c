/*
 * XREFs of BiAdjustPrivilege @ 0x140785ED0
 * Callers:
 *     BiReleasePrivilege @ 0x140785DF8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785E50 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1403FAB60 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1403FAB80 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x1403FADA0 (ZwAdjustPrivilegesToken.c)
 */

__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  NTSTATUS v6; // ebx
  ULONG v7; // eax
  NTSTATUS v9; // eax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  struct _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  struct _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  ReturnLength = 0;
  NewState.Privileges[0].Attributes = 0;
  Handle = (HANDLE)-1LL;
  PreviousState = 0LL;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 1u, 0x200u, &Handle);
    if ( v6 >= 0 )
      goto LABEL_3;
    v9 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, 0x200u, &Handle);
  }
  else
  {
    v9 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &Handle);
  }
  v6 = v9;
LABEL_3:
  if ( v6 >= 0 )
  {
    v12 = a1;
    NewState.Privileges[0].Luid = (LUID)a1;
    v7 = 0;
    NewState.PrivilegeCount = 1;
    if ( a2 )
      v7 = 2;
    NewState.Privileges[0].Attributes = v7;
    v6 = ZwAdjustPrivilegesToken(Handle, 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    if ( v6 == 262 )
      v6 = -1073741727;
    if ( v6 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *a3 = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  return (unsigned int)v6;
}
