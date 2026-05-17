/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180085020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180045B7C (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(int a1, WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 1);
}
