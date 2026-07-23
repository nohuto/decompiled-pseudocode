/*
 * XREFs of _GetProcessIptTraceSize@8 @ 0x4B3899B0
 * Callers:
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlReleasePrivilege@4 @ 0x4B346D00 (_RtlReleasePrivilege@4.c)
 *     AcquireDebugPrivilege @ 0x4B3898C0 (AcquireDebugPrivilege.c)
 */

NTSTATUS __fastcall GetProcessIptTraceSize(int a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  bool v5; // bl
  NTSTATUS v6; // esi
  _IO_STATUS_BLOCK v7; // [esp+10h] [ebp-80h] BYREF
  _DWORD InputBuffer[4]; // [esp+18h] [ebp-78h] BYREF
  __int16 v9; // [esp+28h] [ebp-68h]
  __int64 v10; // [esp+30h] [ebp-60h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4Ch] [ebp-44h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+64h] [ebp-2Ch] BYREF
  HANDLE FileHandle; // [esp+6Ch] [ebp-24h] BYREF
  _BYTE OutputBuffer[8]; // [esp+70h] [ebp-20h] BYREF
  int v15; // [esp+78h] [ebp-18h]
  int v16; // [esp+7Ch] [ebp-14h]

  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  memset(&ObjectAttributes.Attributes, 0, 12);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_4B3A3428;
  *a2 = 0;
  result = NtCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0x80u, 1u, 1u, 0x4Cu, 0, 0);
  if ( result >= 0 )
  {
    v5 = AcquireDebugPrivilege((PVOID *)&IoStatusBlock.Information);
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    InputBuffer[2] = 1;
    v9 = 1;
    v10 = a1;
    v6 = NtDeviceIoControlFile(FileHandle, 0, 0, 0, &v7, 0x220004u, InputBuffer, 0x30u, OutputBuffer, 0x18u);
    NtClose(FileHandle);
    if ( v5 )
      RtlReleasePrivilege((PVOID)IoStatusBlock.Information);
    if ( v6 >= 0 )
    {
      if ( v16 )
      {
        return -1073740757;
      }
      else
      {
        *a2 = v15;
        return 0;
      }
    }
    else
    {
      return v6;
    }
  }
  return result;
}
