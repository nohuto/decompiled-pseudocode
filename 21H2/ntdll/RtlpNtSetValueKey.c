/*
 * XREFs of RtlpNtSetValueKey @ 0x180107DA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetValueKey @ 0x18009E1F0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall RtlpNtSetValueKey(void *a1, ULONG a2, void *Data, ULONG DataSize)
{
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName.Length = 0;
  return ZwSetValueKey(a1, &ValueName, 0, a2, Data, DataSize);
}
