/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18025F530
 * Callers:
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18025F0E8 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18025F5DC (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801B5DF8 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18025E4DC (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18025EE18 (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  float *v5; // rax
  bool v6; // al
  char v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+51h] [rbp+9h]
  int v9; // [rsp+54h] [rbp+Ch]

  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v5 = (float *)CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    v5[1] = a3 * *((float *)a2 + 1);
    CTrimPathOperation::AppendSegment(this, (const struct Path::Segment *)v5);
  }
  Path::Segment::Segment(&v7, 1);
  v8 = 0;
  v9 = 0;
  CTrimPathOperation::AppendSegment(this, (const struct Path::Segment *)&v7);
  v6 = *((_BYTE *)this + 396) == 0;
  *((_BYTE *)this + 397) = 0;
  ++*((_DWORD *)this + 8);
  *((_BYTE *)this + 396) = v6;
}
