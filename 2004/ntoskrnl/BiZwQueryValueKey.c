/*
 * XREFs of BiZwQueryValueKey @ 0x1403987C8
 * Callers:
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
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
