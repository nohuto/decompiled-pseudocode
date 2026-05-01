/*
 * XREFs of sub_1800808C8 @ 0x1800808C8
 * Callers:
 *     sub_1800805FC @ 0x1800805FC (sub_1800805FC.c)
 * Callees:
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 */

__int64 __fastcall sub_1800808C8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 result; // rax

  a3[6] = 0LL;
  a3[7] = 0LL;
  a3[8] = 0LL;
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = -1LL;
  a3[4] = a1 + 56;
  a3[3] = 1LL;
  a3[5] = a1;
  v3 = sub_180027784(7);
  *(_QWORD *)(v4 + 48) = v3;
  result = v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), (unsigned int)v6);
  if ( result <= v6 )
    __fastfail(v6 + 13);
  *(_QWORD *)(v4 + 56) = v5;
  return result;
}
