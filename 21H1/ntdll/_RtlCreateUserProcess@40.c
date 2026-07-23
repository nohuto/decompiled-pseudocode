/*
 * XREFs of _RtlCreateUserProcess@40 @ 0x4B33FC00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 */

NTSTATUS __cdecl RtlCreateUserProcess(
        PUNICODE_STRING NtImagePathName,
        ULONG AttributesDeprecated,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE ParentProcess,
        BOOLEAN InheritHandles,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  _RTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters; // [esp+0h] [ebp-1Ch] BYREF

  ProcessExtendedParameters.JobHandle = 0;
  ProcessExtendedParameters.Version = 1;
  ProcessExtendedParameters.NodeNumber = HIWORD(AttributesDeprecated);
  ProcessExtendedParameters.ProcessSecurityDescriptor = ProcessSecurityDescriptor;
  ProcessExtendedParameters.ThreadSecurityDescriptor = ThreadSecurityDescriptor;
  ProcessExtendedParameters.ParentProcess = ParentProcess;
  ProcessExtendedParameters.DebugPort = DebugPort;
  ProcessExtendedParameters.TokenHandle = TokenHandle;
  return RtlCreateUserProcessEx(
           NtImagePathName,
           ProcessParameters,
           InheritHandles,
           &ProcessExtendedParameters,
           ProcessInformation);
}
