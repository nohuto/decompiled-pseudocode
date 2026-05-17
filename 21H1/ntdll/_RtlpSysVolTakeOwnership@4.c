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

NTSTATUS __thiscall RtlpSysVolTakeOwnership(UNICODE_STRING *this)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+10h] [ebp-68h] BYREF
  _DWORD v4[5]; // [esp+18h] [ebp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+2Ch] [ebp-4Ch] BYREF
  HANDLE FileHandle; // [esp+44h] [ebp-34h] BYREF
  HANDLE Handle; // [esp+48h] [ebp-30h] BYREF
  _DWORD v8[4]; // [esp+4Ch] [ebp-2Ch] BYREF
  _BYTE v9[2]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v10; // [esp+5Eh] [ebp-1Ah]
  __int16 v11; // [esp+62h] [ebp-16h]
  int v12; // [esp+64h] [ebp-14h]
  int v13; // [esp+68h] [ebp-10h]

  result = ZwOpenProcessTokenEx(-1, 40, 512, (int)&Handle);
  if ( result >= 0 )
  {
    v8[1] = 9;
    v8[2] = 0;
    v8[3] = 2;
    v8[0] = 1;
    if ( ZwAdjustPrivilegesToken((int)Handle, 0, (int)v8, 16, 0, 0) >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = this;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( NtOpenFile(&FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor(v4, 1);
        v10 = 0;
        v11 = 1280;
        v9[0] = 1;
        v9[1] = 2;
        v12 = 32;
        v13 = 544;
        if ( RtlSetOwnerSecurityDescriptor((int)v4, (int)v9, 0) >= 0 )
          NtSetSecurityObject((int)FileHandle, 1, (int)v4);
        NtClose(FileHandle);
      }
    }
    return NtClose(Handle);
  }
  return result;
}
