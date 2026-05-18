/*
 * XREFs of sub_18001256C @ 0x18001256C
 * Callers:
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18001A310 @ 0x18001A310 (sub_18001A310.c)
 *     sub_18007F650 @ 0x18007F650 (sub_18007F650.c)
 *     sub_18007F750 @ 0x18007F750 (sub_18007F750.c)
 *     sub_18007F86C @ 0x18007F86C (sub_18007F86C.c)
 *     sub_18007F8F4 @ 0x18007F8F4 (sub_18007F8F4.c)
 *     sub_180080B78 @ 0x180080B78 (sub_180080B78.c)
 *     sub_1800ACC8C @ 0x1800ACC8C (sub_1800ACC8C.c)
 *     sub_1800ACD60 @ 0x1800ACD60 (sub_1800ACD60.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_18001256C(_OWORD *a1, double a2, double a3, double a4)
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
