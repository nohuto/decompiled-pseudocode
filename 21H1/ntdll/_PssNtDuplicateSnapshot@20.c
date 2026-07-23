/*
 * XREFs of _PssNtDuplicateSnapshot@20 @ 0x4B3868E0
 * Callers:
 *     <none>
 * Callees:
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 */

int __stdcall PssNtDuplicateSnapshot(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        int a4,
        int a5)
{
  int result; // eax
  void *retaddr; // [esp+Ch] [ebp+4h]

  if ( ProcessHandle == (HANDLE)-1 )
  {
    result = PssNtValidateDescriptor(BaseAddress, retaddr);
    if ( result >= 0 )
      return PsspDuplicateSnapshotLocalToRemote(a4, a5);
  }
  else if ( SourceProcessHandle == (HANDLE)-1 )
  {
    return PsspDuplicateSnapshotRemoteToRemote(ProcessHandle, BaseAddress, (HANDLE)0xFFFFFFFF, a4, a5);
  }
  else
  {
    return PsspDuplicateSnapshotRemoteToRemote(ProcessHandle, BaseAddress, SourceProcessHandle, a4, a5);
  }
  return result;
}
