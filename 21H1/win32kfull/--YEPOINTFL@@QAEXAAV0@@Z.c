/*
 * XREFs of ??YEPOINTFL@@QAEXAAV0@@Z @ 0x214A85
 * Callers:
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 * Callees:
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 */

int *__thiscall EPOINTFL::operator+=(int *this, int *a2)
{
  addff3_c(this, this, a2);
  return addff3_c(this + 2, this + 2, a2 + 2);
}
