/*
 * XREFs of ??ZEPOINTFL@@QAEXAAV0@@Z @ 0x214AAD
 * Callers:
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 */

int *__thiscall EPOINTFL::operator-=(int *this, _DWORD *a2)
{
  subff3_c(this, this, a2);
  return subff3_c(this + 2, this + 2, a2 + 2);
}
