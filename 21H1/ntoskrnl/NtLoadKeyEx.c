/*
 * XREFs of NtLoadKeyEx @ 0x14068C7D0
 * Callers:
 *     NtLoadKey @ 0x14076D000 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  return CmLoadDifferencingKey(
           (int)TargetKey,
           (int)SourceFile,
           Flags,
           (int)TrustClassKey,
           (__int64)Event,
           DesiredAccess,
           (__int64)RootHandle,
           (int)Reserved,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
