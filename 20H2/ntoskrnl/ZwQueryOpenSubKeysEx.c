/*
 * XREFs of ZwQueryOpenSubKeysEx @ 0x1403FAC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
