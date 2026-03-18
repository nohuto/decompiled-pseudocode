/*
 * XREFs of ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802289CC
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall CPathData::GetPathData(__int64 a1, gsl::details *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *(_QWORD *)(a1 + 16);
  gsl::details::extent_type<-1>::extent_type<-1>(a2, *(_QWORD *)(a1 + 24) - v2);
  v5 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v2;
  if ( v5 || !v2 && *(_QWORD *)a2 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x180228A14LL);
  }
  return a2;
}
