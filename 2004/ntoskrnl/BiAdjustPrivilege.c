/*
 * XREFs of BiAdjustPrivilege @ 0x140773930
 * Callers:
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1403F3BA0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1403F3BC0 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x1403F3DE0 (ZwAdjustPrivilegesToken.c)
 */

__int64 __fastcall BiAdjustPrivilege(unsigned int a1, char a2, bool *a3)
{
  int v6; // ebx
  int v7; // eax
  NTSTATUS v9; // eax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+4Ch] [rbp-24h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int128 v16; // [rsp+58h] [rbp-18h]

  v11 = 0;
  v15 = 0;
  Handle = (HANDLE)-1LL;
  v16 = 0LL;
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
    v14 = a1;
    v7 = 0;
    v13 = 1;
    if ( a2 )
      v7 = 2;
    v15 = v7;
    v6 = ZwAdjustPrivilegesToken((__int64)Handle, 0LL);
    if ( v6 == 262 )
      v6 = -1073741727;
    if ( v6 >= 0 )
    {
      if ( (_DWORD)v16 )
        *a3 = (BYTE12(v16) & 2) != 0;
      else
        *a3 = a2 != 0;
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  return (unsigned int)v6;
}
