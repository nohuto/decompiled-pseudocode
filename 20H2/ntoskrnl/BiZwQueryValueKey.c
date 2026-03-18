/*
 * XREFs of BiZwQueryValueKey @ 0x14039AC88
 * Callers:
 *     BiGetRegistryValue @ 0x140780018 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
