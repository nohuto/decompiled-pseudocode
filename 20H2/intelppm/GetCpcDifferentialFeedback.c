/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C0009300
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrEx @ 0x1C0008734 (ReadGenAddrEx.c)
 */

unsigned __int64 __fastcall GetCpcDifferentialFeedback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 result; // rax

  *a3 = ReadGenAddrEx((_BYTE *)(a1 + 272));
  result = ReadGenAddrEx((_BYTE *)(a1 + 296));
  *a4 = result;
  return result;
}
