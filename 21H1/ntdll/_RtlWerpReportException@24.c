/*
 * XREFs of _RtlWerpReportException@24 @ 0x4B33AB60
 * Callers:
 *     <none>
 * Callees:
 *     _ReportExceptionInternal@24 @ 0x4B33A3B1 (_ReportExceptionInternal@24.c)
 */

NTSTATUS __cdecl RtlWerpReportException(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  int v5; // [esp+18h] [ebp+18h]
  _DWORD *v6; // [esp+1Ch] [ebp+1Ch]

  return ReportExceptionInternal(
           ProcessId,
           (int)CrashReportSharedMem,
           Flags,
           (unsigned int)CrashVerticalProcessHandle,
           v5,
           v6);
}
