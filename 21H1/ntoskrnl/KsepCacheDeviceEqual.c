/*
 * XREFs of KsepCacheDeviceEqual @ 0x1407BBCE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 */

_BOOL8 __fastcall KsepCacheDeviceEqual(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 40), 1u) == 0;
}
