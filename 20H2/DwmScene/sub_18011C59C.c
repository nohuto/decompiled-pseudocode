/*
 * XREFs of sub_18011C59C @ 0x18011C59C
 * Callers:
 *     sub_18008BFE0 @ 0x18008BFE0 (sub_18008BFE0.c)
 *     sub_180094970 @ 0x180094970 (sub_180094970.c)
 *     sub_1800DCEBC @ 0x1800DCEBC (sub_1800DCEBC.c)
 *     sub_1800EB2E0 @ 0x1800EB2E0 (sub_1800EB2E0.c)
 *     sub_1801059D4 @ 0x1801059D4 (sub_1801059D4.c)
 * Callees:
 *     sub_18011C3A4 @ 0x18011C3A4 (sub_18011C3A4.c)
 */

__int64 __fastcall sub_18011C59C(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  sub_18011C3A4(a1);
  result = a1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)a1 + 16LL), 2);
  return result;
}
