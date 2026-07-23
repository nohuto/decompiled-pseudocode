/*
 * XREFs of _RtlImpersonateSelfEx@12 @ 0x4B2EBF70
 * Callers:
 *     _RtlImpersonateSelf@4 @ 0x4B2EBF50 (_RtlImpersonateSelf@4.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlImpersonateSelfEx(
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
        ACCESS_MASK AdditionalAccess,
        PHANDLE ThreadToken)
{
  int v3; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-34h] BYREF
  HANDLE TokenHandle; // [esp+28h] [ebp-1Ch] BYREF
  HANDLE NewTokenHandle; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-14h] BYREF
  __int16 v9; // [esp+38h] [ebp-Ch]

  if ( !ThreadToken && AdditionalAccess )
    return -1073741584;
  v8[1] = ImpersonationLevel;
  ObjectAttributes.Length = 24;
  ObjectAttributes.SecurityQualityOfService = v8;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  v8[0] = 12;
  v9 = 1;
  v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 2u, 0x200u, &TokenHandle);
  if ( v3 >= 0 )
  {
    v3 = NtDuplicateToken(TokenHandle, AdditionalAccess | 4, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
    if ( v3 >= 0 )
    {
      v3 = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &NewTokenHandle, 4u);
      if ( v3 >= 0 && ThreadToken )
        *ThreadToken = NewTokenHandle;
      else
        NtClose(NewTokenHandle);
    }
    NtClose(TokenHandle);
  }
  return v3;
}
