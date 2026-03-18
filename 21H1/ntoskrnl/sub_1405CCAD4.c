/*
 * XREFs of sub_1405CCAD4 @ 0x1405CCAD4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405CCCFC @ 0x1405CCCFC (sub_1405CCCFC.c)
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 */

__int64 __fastcall sub_1405CCAD4(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14065F0FC(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405CCCFC(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
