/*
 * XREFs of RtlpAddForwarderPath @ 0x1800DF0EC
 * Callers:
 *     RtlpComputePath @ 0x18006C7D0 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800DF12C (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
