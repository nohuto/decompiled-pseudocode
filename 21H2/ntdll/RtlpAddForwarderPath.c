/*
 * XREFs of RtlpAddForwarderPath @ 0x1800DEE9C
 * Callers:
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x1800DEEDC (RtlpAddSystemPath.c)
 */

__int64 __fastcall RtlpAddForwarderPath(char a1)
{
  if ( a1 )
    RtlpAddSystemPath(L"\\Forwarders\\alt");
  return RtlpAddSystemPath(L"\\Forwarders");
}
