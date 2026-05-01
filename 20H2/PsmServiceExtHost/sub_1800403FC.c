/*
 * XREFs of sub_1800403FC @ 0x1800403FC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 *     sub_180040460 @ 0x180040460 (sub_180040460.c)
 *     sub_180041808 @ 0x180041808 (sub_180041808.c)
 *     sub_180041BF8 @ 0x180041BF8 (sub_180041BF8.c)
 */

__int64 __fastcall sub_1800403FC(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _BYTE v4[184]; // [rsp+20h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)&qword_1800B41A8;
  sub_180041BF8(v4);
  sub_18003F99C((__int64)v4, v1);
  result = sub_180041808(a1, v1);
  if ( (int)result >= 0 )
  {
    result = sub_180040460(v1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
