/*
 * XREFs of sub_18010E8D0 @ 0x18010E8D0
 * Callers:
 *     sub_18010FAAE @ 0x18010FAAE (sub_18010FAAE.c)
 * Callees:
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 */

__int64 __fastcall sub_18010E8D0(_BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    sub_180112F8C(qword_18019E608, *(_QWORD *)(*(_QWORD *)a1 + 136LL), *(_QWORD *)(*(_QWORD *)a1 + 144LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 144LL) = 0LL;
  }
  return result;
}
