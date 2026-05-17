/*
 * XREFs of _RtlQueryRegistryValues@20 @ 0x4B3512F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 */

int __stdcall RtlQueryRegistryValues(int a1, const WCHAR *a2, int a3, int a4, int a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 0);
}
