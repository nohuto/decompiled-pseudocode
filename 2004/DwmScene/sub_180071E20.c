/*
 * XREFs of sub_180071E20 @ 0x180071E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 */

_QWORD *__fastcall sub_180071E20(_QWORD *a1, __int64 a2)
{
  sub_180018900((__int64)a1, a2);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
