/*
 * XREFs of RtlpAddForwarderPath @ 0x1800DED4C
 * Callers:
 *     RtlpComputePath @ 0x18006C6C0 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800DED8C (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
