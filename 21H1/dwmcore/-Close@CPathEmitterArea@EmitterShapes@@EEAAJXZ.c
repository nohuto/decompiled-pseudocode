/*
 * XREFs of ?Close@CPathEmitterArea@EmitterShapes@@EEAAJXZ @ 0x18020A930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020A04C (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterArea::Close(char **this)
{
  char *v2; // r9
  unsigned int i; // r8d
  __int64 v4; // r10
  __int64 v5; // rax

  std::_Sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
    this[2],
    this[3],
    (this[3] - this[2]) / 28,
    (unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64))EmitterShapes::SortTriangles);
  v2 = this[2];
  for ( i = 1; ; ++i )
  {
    v4 = i;
    if ( i >= (unsigned __int64)((this[3] - v2) / 28) )
      break;
    v5 = 28LL * (i - 1);
    *(float *)&v2[28 * v4 + 24] = *(float *)&v2[v5 + 24] + *(float *)&v2[28 * v4 + 24];
  }
  return 0LL;
}
