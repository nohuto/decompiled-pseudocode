/*
 * XREFs of _NtWow64CsrClientCallServer@16 @ 0x4B2F4710
 * Callers:
 *     _CsrClientCallServer@16 @ 0x4B33E850 (_CsrClientCallServer@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CsrClientCallServer(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
