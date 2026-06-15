/*
 * XREFs of sub_1800E6E00 @ 0x1800E6E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E6E00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = (*a2 - 8LL) & -(__int64)(*a2 != 0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 160LL))(v2);
}
