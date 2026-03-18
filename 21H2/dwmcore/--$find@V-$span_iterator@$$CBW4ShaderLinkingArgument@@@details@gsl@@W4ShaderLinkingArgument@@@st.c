/*
 * XREFs of ??$find@V?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800339C4
 * Callers:
 *     HasLighting @ 0x1800338B0 (HasLighting.c)
 *     HasWhiteNoise @ 0x180033940 (HasWhiteNoise.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall std::find<gsl::details::span_iterator<enum ShaderLinkingArgument const>,enum ShaderLinkingArgument>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _WORD *a4)
{
  __int128 v4; // xmm1
  _WORD *i; // rax
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 != *(_OWORD *)a3 || *((_QWORD *)a2 + 2) > *(_QWORD *)(a3 + 16) )
  {
    gsl::details::terminate(*(gsl::details **)a2);
    JUMPOUT(0x180033A57LL);
  }
  for ( i = (_WORD *)*((_QWORD *)a2 + 2); i != *(_WORD **)(a3 + 16); ++i )
  {
    if ( *i == *a4 )
      break;
  }
  *((_QWORD *)a2 + 2) = i;
  result = a1;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
  return result;
}
