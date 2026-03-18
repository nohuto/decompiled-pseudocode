/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800AE7CC
 * Callers:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

float *__fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        unsigned __int64 *a2)
{
  float *v2; // r8
  unsigned __int64 v3; // r9
  float *result; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4

  if ( !*a2 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800AE851LL);
  }
  v2 = (float *)a2[1];
  v3 = 1LL;
  *a1 = *v2;
  a1[1] = v2[1];
  a1[2] = *v2;
  result = (float *)*((unsigned int *)v2 + 1);
  *((_DWORD *)a1 + 3) = (_DWORD)result;
  if ( *a2 > 1 )
  {
    result = v2 + 2;
    do
    {
      ++v3;
      v5 = a1[1];
      *a1 = fminf(*a1, *result);
      v6 = a1[2];
      a1[1] = fminf(v5, result[1]);
      v7 = fmaxf(v6, *result);
      result += 2;
      v8 = a1[3];
      a1[2] = v7;
      a1[3] = fmaxf(v8, *(result - 1));
    }
    while ( v3 < *a2 );
  }
  return result;
}
