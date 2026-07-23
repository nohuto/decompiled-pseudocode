/*
 * XREFs of LdrpQueryInformationCurrentProcess @ 0x4B32F4C0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

NTSTATUS __stdcall LdrpQueryInformationCurrentProcess(
        int a1,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  return ZwQueryInformationProcess(
           (HANDLE)0xFFFFFFFF,
           ProcessInformationClass,
           ProcessInformation,
           ProcessInformationLength,
           ReturnLength);
}
