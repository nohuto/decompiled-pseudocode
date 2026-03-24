/*
 * XREFs of ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x180046D9C
 * Callers:
 *     HasLighting @ 0x1800462A0 (HasLighting.c)
 *     HasWhiteNoise @ 0x180046CF4 (HasWhiteNoise.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

gsl::details *__fastcall std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>(
        gsl::details *a1,
        _QWORD *a2,
        _QWORD *a3,
        _WORD *a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  _WORD *i; // rcx
  gsl::details *result; // rax

  if ( *a2 != *a3 || a2[1] > a3[1] )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(a1);
    __debugbreak();
  }
  v6 = *(_QWORD *)(*a3 + 8LL) + 2LL * a3[1];
  v7 = *(_QWORD *)(*a2 + 8LL);
  for ( i = (_WORD *)(v7 + 2LL * a2[1]); i != (_WORD *)v6; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  result = a1;
  a2[1] = ((__int64)i - v7) >> 1;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}
