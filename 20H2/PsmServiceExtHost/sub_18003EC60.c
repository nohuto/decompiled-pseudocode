/*
 * XREFs of sub_18003EC60 @ 0x18003EC60
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     sub_18003E1B0 @ 0x18003E1B0 (sub_18003E1B0.c)
 *     sub_18003E324 @ 0x18003E324 (sub_18003E324.c)
 */

__int64 __fastcall sub_18003EC60(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 *v3; // r9

  result = sub_18003E324(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 656LL));
  if ( (_DWORD)result )
    return sub_18003E1B0(v3, result, v2);
  return result;
}
