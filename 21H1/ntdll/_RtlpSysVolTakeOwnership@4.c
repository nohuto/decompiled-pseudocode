/*
 * XREFs of _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD
 * Callers:
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 * Callees:
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740 (_RtlCreateSecurityDescriptor@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     _NtSetSecurityObject@12 @ 0x4B2F43F0 (_NtSetSecurityObject@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall RtlpSysVolTakeOwnership(_UNICODE_STRING *this)
{
  int result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+10h] [ebp-68h] BYREF
  _BYTE SecurityDescriptor[20]; // [esp+18h] [ebp-60h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+2Ch] [ebp-4Ch] BYREF
  HANDLE FileHandle; // [esp+44h] [ebp-34h] BYREF
  HANDLE TokenHandle; // [esp+48h] [ebp-30h] BYREF
  _TOKEN_PRIVILEGES NewState; // [esp+4Ch] [ebp-2Ch] BYREF
  _BYTE Owner[2]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v10; // [esp+5Eh] [ebp-1Ah]
  __int16 v11; // [esp+62h] [ebp-16h]
  int v12; // [esp+64h] [ebp-14h]
  int v13; // [esp+68h] [ebp-10h]

  result = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    NewState.Privileges[0].Luid.LowPart = 9;
    NewState.Privileges[0].Luid.HighPart = 0;
    NewState.Privileges[0].Attributes = 2;
    NewState.PrivilegeCount = 1;
    if ( ZwAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0, 0) >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = this;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( NtOpenFile(&FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v10 = 0;
        v11 = 1280;
        Owner[0] = 1;
        Owner[1] = 2;
        v12 = 32;
        v13 = 544;
        if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0) >= 0 )
          NtSetSecurityObject(FileHandle, 1u, SecurityDescriptor);
        NtClose(FileHandle);
      }
    }
    return NtClose(TokenHandle);
  }
  return result;
}
