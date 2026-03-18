/*
 * XREFs of sub_1405D4348 @ 0x1405D4348
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D3D00 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D41C8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405D4570 @ 0x1405D4570 (sub_1405D4570.c)
 *     sub_14065F530 @ 0x14065F530 (sub_14065F530.c)
 */

__int64 __fastcall sub_1405D4348(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14065F530(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405D4570(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
