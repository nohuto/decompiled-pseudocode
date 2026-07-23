/*
 * XREFs of _RtlEnumProcessHeaps@8 @ 0x4B356920
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return RtlpEnumProcessHeaps(0);
}
