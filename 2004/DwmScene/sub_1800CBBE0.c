/*
 * XREFs of sub_1800CBBE0 @ 0x1800CBBE0
 * Callers:
 *     sub_180035060 @ 0x180035060 (sub_180035060.c)
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 *     sub_180036E70 @ 0x180036E70 (sub_180036E70.c)
 *     sub_180037010 @ 0x180037010 (sub_180037010.c)
 *     sub_1800621B0 @ 0x1800621B0 (sub_1800621B0.c)
 *     sub_1800622DC @ 0x1800622DC (sub_1800622DC.c)
 *     sub_180062318 @ 0x180062318 (sub_180062318.c)
 *     sub_1800623E4 @ 0x1800623E4 (sub_1800623E4.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_1800928C0 @ 0x1800928C0 (sub_1800928C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CBBE0(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  __int64 result; // rax

  result = a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(32 * (a3 + 5LL * a2) + a1), a4);
  return result;
}
