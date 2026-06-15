/*
 * XREFs of sub_180133710 @ 0x180133710
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 */

__int64 __fastcall sub_180133710(_QWORD *a1, __int64 *a2)
{
  sub_1800461B8(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a1)(*a1, &unk_18015F1A8, a2);
}
