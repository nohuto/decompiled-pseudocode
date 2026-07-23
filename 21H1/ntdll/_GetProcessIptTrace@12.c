/*
 * XREFs of _GetProcessIptTrace@12 @ 0x4B3898E3
 * Callers:
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 * Callees:
 *     _ZwDeviceIoControlFile@40 @ 0x4B2F29D0 (_ZwDeviceIoControlFile@40.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     _RtlReleasePrivilege@4 @ 0x4B346D00 (_RtlReleasePrivilege@4.c)
 *     AcquireDebugPrivilege @ 0x4B3898C0 (AcquireDebugPrivilege.c)
 */

NTSTATUS __fastcall GetProcessIptTrace(int a1, void *a2, ULONG OutputBufferLength)
{
  NTSTATUS result; // eax
  bool v6; // bl
  NTSTATUS v7; // esi
  _DWORD InputBuffer[4]; // [esp+10h] [ebp-64h] BYREF
  __int16 v9; // [esp+20h] [ebp-54h]
  __int64 v10; // [esp+28h] [ebp-4Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+44h] [ebp-30h] BYREF
  _IO_STATUS_BLOCK v12; // [esp+5Ch] [ebp-18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+64h] [ebp-10h] BYREF
  HANDLE FileHandle; // [esp+6Ch] [ebp-8h] BYREF

  if ( OutputBufferLength < 8 )
    return -1073741811;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  memset(&ObjectAttributes.Attributes, 0, 12);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_4B3A3428;
  result = NtCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0x80u, 1u, 1u, 0x4Cu, 0, 0);
  if ( result >= 0 )
  {
    v6 = AcquireDebugPrivilege((PVOID *)&IoStatusBlock.Information);
    InputBuffer[2] = 2;
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    v9 = 1;
    v10 = a1;
    v7 = NtDeviceIoControlFile(FileHandle, 0, 0, 0, &v12, 0x220006u, InputBuffer, 0x30u, a2, OutputBufferLength);
    NtClose(FileHandle);
    if ( v6 )
      RtlReleasePrivilege((PVOID)IoStatusBlock.Information);
    return v7;
  }
  return result;
}
