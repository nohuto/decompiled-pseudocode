/*
 * XREFs of NtLoadKey2 @ 0x140781CE0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
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
