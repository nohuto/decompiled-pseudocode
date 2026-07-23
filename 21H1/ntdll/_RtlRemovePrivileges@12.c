/*
 * XREFs of _RtlRemovePrivileges@12 @ 0x4B346D90
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

NTSTATUS __cdecl RtlRemovePrivileges(HANDLE TokenHandle, PULONG PrivilegesToKeep, ULONG PrivilegeCount)
{
  HANDLE v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  ULONG v7; // ecx
  NTSTATUS result; // eax
  unsigned int *p_Attributes; // ecx
  __int64 v10; // rax
  unsigned int *v11; // ecx
  ULONG ReturnLength; // [esp+Ch] [ebp-1C0h] BYREF
  HANDLE v13; // [esp+10h] [ebp-1BCh]
  DWORD v14; // [esp+14h] [ebp-1B8h]
  unsigned int *v15; // [esp+18h] [ebp-1B4h]
  _TOKEN_PRIVILEGES TokenInformation[26]; // [esp+1Ch] [ebp-1B0h] BYREF

  v3 = TokenHandle;
  v4 = 0;
  v13 = TokenHandle;
  v5 = 0;
  v6 = 0;
  if ( PrivilegeCount )
  {
    while ( 1 )
    {
      v7 = PrivilegesToKeep[v6];
      if ( v7 - 2 > 0x22 )
        return -1073741811;
      v5 |= 1LL << v7;
      v4 |= (unsigned __int64)(1LL << v7) >> 32;
      if ( ++v6 >= PrivilegeCount )
      {
        v3 = v13;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    result = ZwQueryInformationToken(v3, 3u, TokenInformation, 0x1ACu, &ReturnLength);
    if ( result >= 0 )
    {
      v14 = 0;
      if ( TokenInformation[0].PrivilegeCount )
      {
        p_Attributes = &TokenInformation[0].Privileges[0].Attributes;
        v15 = &TokenInformation[0].Privileges[0].Attributes;
        do
        {
          v10 = 1LL << *(p_Attributes - 2);
          v11 = v15;
          if ( v4 & HIDWORD(v10) | v5 & (unsigned int)v10 )
          {
            v5 &= ~(_DWORD)v10;
            v4 &= ~HIDWORD(v10);
          }
          else
          {
            *v15 = 4;
          }
          p_Attributes = v11 + 3;
          v15 = p_Attributes;
          ++v14;
        }
        while ( v14 < TokenInformation[0].PrivilegeCount );
      }
      if ( v4 | v5 )
        return 262;
      else
        return ZwAdjustPrivilegesToken(v13, 0, TokenInformation, 0x1ACu, 0, 0);
    }
  }
  return result;
}
