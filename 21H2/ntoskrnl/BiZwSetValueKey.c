/*
 * XREFs of BiZwSetValueKey @ 0x14039B76C
 * Callers:
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
