/*
 * XREFs of sub_180080934 @ 0x180080934
 * Callers:
 *     sub_1800805FC @ 0x1800805FC (sub_1800805FC.c)
 * Callees:
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 */

__int64 __fastcall sub_180080934(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  sub_180032190(a1 + 56, a2 + 48, (int (__fastcall *)(__int64, unsigned __int64, __int64))sub_1800805E0, a2, v4, &v5);
  result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
