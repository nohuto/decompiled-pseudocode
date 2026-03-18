/*
 * XREFs of sub_1405CDEA4 @ 0x1405CDEA4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CDD24 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405CE0CC @ 0x1405CE0CC (sub_1405CE0CC.c)
 *     sub_1406199DC @ 0x1406199DC (sub_1406199DC.c)
 */

__int64 __fastcall sub_1405CDEA4(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406199DC(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405CE0CC(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
