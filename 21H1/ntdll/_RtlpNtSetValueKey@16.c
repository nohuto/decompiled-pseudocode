/*
 * XREFs of _RtlpNtSetValueKey@16 @ 0x4B36D350
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 */

NTSTATUS __stdcall RtlpNtSetValueKey(HANDLE KeyHandle, ULONG Type, PVOID Data, ULONG DataSize)
{
  _UNICODE_STRING ValueName; // [esp+0h] [ebp-8h] BYREF

  ValueName.Length = 0;
  return ZwSetValueKey(KeyHandle, &ValueName, 0, Type, Data, DataSize);
}
