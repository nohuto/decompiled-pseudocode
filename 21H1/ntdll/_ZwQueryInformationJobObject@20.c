/*
 * XREFs of _ZwQueryInformationJobObject@20 @ 0x4B2F3E20
 * Callers:
 *     _RtlGetSessionProperties@8 @ 0x4B346440 (_RtlGetSessionProperties@8.c)
 *     _TppJobpRundownJob@4 @ 0x4B3839D3 (_TppJobpRundownJob@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
