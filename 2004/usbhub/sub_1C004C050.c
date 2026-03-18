/*
 * XREFs of sub_1C004C050 @ 0x1C004C050
 * Callers:
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C004C050(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = sub_1C000F050(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 24LL);
  *(_QWORD *)(v5 + 16) = sub_1C001CF40;
  *(_QWORD *)(v5 + 24) = sub_1C001CF30;
  *(_QWORD *)(v5 + 32) = sub_1C0018B00;
  *(_QWORD *)(v5 + 40) = sub_1C0001010;
  *(_QWORD *)(v5 + 8) = v4;
  *(_DWORD *)v5 = 48;
  _InterlockedIncrement(v4 + 853);
  *(_DWORD *)(a3 + 48) = 0;
  result = 0LL;
  *(_QWORD *)(a3 + 56) = 0LL;
  return result;
}
