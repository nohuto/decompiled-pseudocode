/*
 * XREFs of sub_180074FF4 @ 0x180074FF4
 * Callers:
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 * Callees:
 *     sub_180074F4C @ 0x180074F4C (sub_180074F4C.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 */

__int64 __fastcall sub_180074FF4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180074F4C(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 508LL) & 2) == 0 )
    return sub_180076240(a1, *(_QWORD *)(a3 + 16));
  result = sub_1800759A8(a1, a2, a3, 31LL);
  if ( (_DWORD)result == 2 )
    return sub_180076240(a1, *(_QWORD *)(a3 + 16));
  return result;
}
