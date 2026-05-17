/*
 * XREFs of PssValidateSnapshotDescriptor @ 0x18009D17C
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PssValidateSnapshotDescriptor(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1[109] < 0 || a1[112] < 0 || a1[115] < 0 || a1[118] < 0 || a1[122] < 0 || a1[126] < 0 || a1[141] < 0 )
    return 3221225480LL;
  return result;
}
