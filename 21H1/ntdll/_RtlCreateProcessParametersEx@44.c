/*
 * XREFs of _RtlCreateProcessParametersEx@44 @ 0x4B335990
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 */

NTSTATUS __cdecl RtlCreateProcessParametersEx(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData,
        ULONG Flags)
{
  return RtlCreateProcessParametersInternal(
           pProcessParameters,
           &ImagePathName->Length,
           (int)DllPath,
           &CurrentDirectory->Length,
           &CommandLine->Length,
           Environment,
           (int *)WindowTitle,
           (int *)DesktopInfo,
           (int *)ShellInfo,
           (int *)RuntimeData,
           0,
           Flags);
}
