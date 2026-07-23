/*
 * XREFs of _NtInitializeNlsFiles@12 @ 0x4B2F3970
 * Callers:
 *     _RtlGetLocaleFileMappingAddress@12 @ 0x4B2EA2B0 (_RtlGetLocaleFileMappingAddress@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  return Wow64SystemServiceCall();
}
