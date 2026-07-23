/*
 * XREFs of NtLoadKey2 @ 0x14077DD40
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  return CmLoadDifferencingKey(
           (__int64)TargetKey,
           SourceFile,
           Flags,
           0LL,
           0LL,
           0,
           0LL,
           0,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
