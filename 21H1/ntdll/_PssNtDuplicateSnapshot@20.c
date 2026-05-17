/*
 * XREFs of _PssNtDuplicateSnapshot@20 @ 0x4B3868E0
 * Callers:
 *     <none>
 * Callees:
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 */

int __stdcall PssNtDuplicateSnapshot(int a1, int a2, int a3, int a4, char a5)
{
  int result; // eax
  void *retaddr; // [esp+Ch] [ebp+4h]

  if ( a1 == -1 )
  {
    result = PssNtValidateDescriptor(a2, retaddr);
    if ( result >= 0 )
      return PsspDuplicateSnapshotLocalToRemote(a4, a5);
  }
  else if ( a3 == -1 )
  {
    return PsspDuplicateSnapshotRemoteToRemote(-1, a4, a5);
  }
  else
  {
    return PsspDuplicateSnapshotRemoteToRemote(a3, a4, a5);
  }
  return result;
}
