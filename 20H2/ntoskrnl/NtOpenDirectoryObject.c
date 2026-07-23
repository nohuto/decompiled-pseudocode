/*
 * XREFs of NtOpenDirectoryObject @ 0x1406B9E40
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DirectoryHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)DirectoryHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)ObpDirectoryObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)&v9);
  *DirectoryHandle = v9;
  return result;
}
