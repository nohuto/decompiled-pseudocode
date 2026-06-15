/*
 * XREFs of sub_1800463E8 @ 0x1800463E8
 * Callers:
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800463E8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = v2;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
