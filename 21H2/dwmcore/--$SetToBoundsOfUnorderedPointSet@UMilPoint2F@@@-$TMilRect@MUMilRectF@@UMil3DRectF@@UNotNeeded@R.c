/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800A7E20
 * Callers:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A7320 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7AB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  float *v3; // r9
  __int64 v4; // rdx
  float *result; // rax
  bool v6; // cf
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  v2 = *a2;
  if ( !*a2 )
    goto LABEL_7;
  v3 = (float *)a2[1];
  v4 = 1LL;
  *a1 = *v3;
  a1[1] = v3[1];
  a1[2] = *v3;
  result = (float *)*((unsigned int *)v3 + 1);
  *((_DWORD *)a1 + 3) = (_DWORD)result;
  if ( v2 > 1 )
  {
    result = v3 + 2;
    v6 = (unsigned __int64)v2 > 1;
    while ( v6 )
    {
      ++v4;
      v7 = a1[1];
      *a1 = fminf(*a1, *result);
      v8 = a1[2];
      a1[1] = fminf(v7, result[1]);
      v9 = a1[3];
      a1[2] = fmaxf(v8, *result);
      v10 = fmaxf(v9, result[1]);
      result += 2;
      a1[3] = v10;
      v6 = v4 < (unsigned __int64)v2;
      if ( v4 >= v2 )
        return result;
    }
LABEL_7:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return result;
}
