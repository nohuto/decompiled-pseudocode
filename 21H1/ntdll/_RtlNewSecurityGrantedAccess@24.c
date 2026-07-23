/*
 * XREFs of _RtlNewSecurityGrantedAccess@24 @ 0x4B336330
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlNewSecurityGrantedAccess(
        ACCESS_MASK AccessMask,
        _DWORD *a2,
        _DWORD *a3,
        HANDLE TokenHandle,
        PGENERIC_MAPPING GenericMapping,
        _DWORD *a6)
{
  _DWORD *v6; // esi
  unsigned int v7; // ebx
  int v8; // edi
  ACCESS_MASK v9; // eax
  bool v10; // sf
  BOOLEAN v11; // al
  ULONG ReturnLength; // [esp+Ch] [ebp-60h] BYREF
  _DWORD *v14; // [esp+10h] [ebp-5Ch]
  _DWORD *v15; // [esp+14h] [ebp-58h]
  BOOLEAN Result; // [esp+1Bh] [ebp-51h] BYREF
  _BYTE TokenInformation[56]; // [esp+1Ch] [ebp-50h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [esp+54h] [ebp-18h] BYREF

  v6 = a2;
  v7 = 0;
  v8 = (int)TokenHandle;
  v14 = a3;
  v15 = a6;
  Result = 0;
  if ( !TokenHandle )
    v8 = -5;
  ZwQueryInformationToken((HANDLE)v8, 0xAu, TokenInformation, 0x38u, &ReturnLength);
  RtlMapGenericMask(&AccessMask, GenericMapping);
  v9 = AccessMask;
  *v15 = AccessMask;
  if ( (v9 & 0x1000000) != 0 )
  {
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid.LowPart = 8;
    RequiredPrivileges.Privilege[0].Luid.HighPart = 0;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v10 = ZwPrivilegeCheck((HANDLE)v8, &RequiredPrivileges, &Result) < 0;
    v11 = Result;
    if ( (v10 || !Result) && !Result )
      return -1073741727;
    *v15 &= ~0x1000000u;
  }
  else
  {
    v11 = Result;
  }
  if ( *v14 >= 0x14u )
  {
    v6[1] = 0;
    if ( v11 )
    {
      *v6 = 1;
      v6[3] = 0;
      v7 = 0x80000000;
      v6[2] = 8;
    }
    else
    {
      *v6 = 0;
      v6[2] = 0;
      v6[3] = 0;
    }
    v6[4] = v7;
    return 0;
  }
  else
  {
    *v14 = 20;
    return -1073741789;
  }
}
