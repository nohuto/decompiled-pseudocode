/*
 * XREFs of NtCreateProfileEx @ 0x14095AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        PGROUP_AFFINITY GroupAffinity)
{
  return ExpProfileCreate(
           (unsigned __int64)ProfileHandle,
           Process,
           (unsigned __int64)ProfileBase,
           ProfileSize,
           BucketSize,
           Buffer,
           BufferSize,
           ProfileSource,
           GroupCount,
           (unsigned __int64)GroupAffinity,
           0);
}
