/*
 * XREFs of ZwCreateThreadEx @ 0x1403F4DE0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14060D1A8 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C0CA4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
