/*
 * XREFs of _RtlCreateUserThread@40 @ 0x4B2F04F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 */

NTSTATUS __cdecl RtlCreateUserThread(
        HANDLE ProcessHandle,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        BOOLEAN CreateSuspended,
        ULONG ZeroBits,
        SIZE_T MaximumStackSize,
        SIZE_T CommittedStackSize,
        PUSER_THREAD_START_ROUTINE StartAddress,
        PVOID Parameter,
        PHANDLE ThreadHandle,
        PCLIENT_ID ClientId)
{
  int v10; // ecx
  _BYTE v12[12]; // [esp-20h] [ebp-20h]

  *(_QWORD *)&v12[4] = MaximumStackSize;
  *(_DWORD *)v12 = ZeroBits;
  return RtlpCreateUserThreadEx(
           ProcessHandle,
           CreateSuspended == 1,
           *(SIZE_T *)v12,
           SHIDWORD(MaximumStackSize),
           v10,
           CommittedStackSize,
           SHIDWORD(CommittedStackSize),
           (int)StartAddress,
           (int)Parameter);
}
