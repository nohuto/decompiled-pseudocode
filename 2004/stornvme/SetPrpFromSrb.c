/*
 * XREFs of SetPrpFromSrb @ 0x1C0001AE8
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C0014A24 (ProtocolCommandToNVMe.c)
 * Callees:
 *     MdlToPrp @ 0x1C0003FE0 (MdlToPrp.c)
 *     SglToPrp @ 0x1C0015EFC (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
    result = MdlToPrp();
  else
    result = SglToPrp();
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 3840);
  return result;
}
