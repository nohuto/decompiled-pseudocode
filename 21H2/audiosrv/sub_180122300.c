/*
 * XREFs of sub_180122300 @ 0x180122300
 * Callers:
 *     sub_180122700 @ 0x180122700 (sub_180122700.c)
 *     sub_180122780 @ 0x180122780 (sub_180122780.c)
 *     sub_180122B70 @ 0x180122B70 (sub_180122B70.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_180122300(_QWORD *a1, __int64 *a2)
{
  sub_1800461B8(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1)(*a1, &unk_18015BE10, a2);
}
