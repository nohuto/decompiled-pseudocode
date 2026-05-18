/*
 * XREFs of sub_18001264C @ 0x18001264C
 * Callers:
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 *     sub_18001BA00 @ 0x18001BA00 (sub_18001BA00.c)
 *     sub_180084F20 @ 0x180084F20 (sub_180084F20.c)
 *     sub_180085020 @ 0x180085020 (sub_180085020.c)
 *     sub_18008513C @ 0x18008513C (sub_18008513C.c)
 *     sub_1800851C4 @ 0x1800851C4 (sub_1800851C4.c)
 *     sub_180086448 @ 0x180086448 (sub_180086448.c)
 *     sub_1800B255C @ 0x1800B255C (sub_1800B255C.c)
 *     sub_1800B2630 @ 0x1800B2630 (sub_1800B2630.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_18001264C(_OWORD *a1, double a2, double a3, double a4)
{
  __int128 v4; // xmm0
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1 )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x831u);
  *a1 = v4;
  a1[1] = *(_OWORD *)&a2;
  a1[2] = *(_OWORD *)&a3;
  a1[3] = *(_OWORD *)&a4;
  return result;
}
