/*
 * XREFs of ??$?0$0?0V?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@$0A@@?$span@U_LUID@@$0?0@gsl@@QEAA@AEAV?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@@Z @ 0x1800F8A4C
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall gsl::span<_LUID,-1>::span<_LUID,-1>(gsl::details *a1, __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, (a2[1] - *a2) >> 3);
  v5 = *(_QWORD *)a1 == -1LL;
  *((_QWORD *)a1 + 1) = v2;
  if ( v5 || !v2 && *(_QWORD *)a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x1800F8A93LL);
  }
  return a1;
}
