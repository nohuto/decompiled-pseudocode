/*
 * XREFs of ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18029FF20
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1802A0AD4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802A100C (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802A10B8 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800EA63C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CTrimPathOperation::AppendSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  unsigned int Size; // eax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  _BYTE *v7; // r8
  __int128 v8; // [rsp+30h] [rbp-9h] BYREF
  const struct Path::Segment *v9; // [rsp+40h] [rbp+7h]
  __int128 v10; // [rsp+50h] [rbp+17h]
  const struct Path::Segment *v11; // [rsp+60h] [rbp+27h]
  __int128 v12; // [rsp+70h] [rbp+37h] BYREF
  char *v13; // [rsp+80h] [rbp+47h]
  __int64 v14; // [rsp+A8h] [rbp+6Fh] BYREF

  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v8, Size);
  v6 = v8;
  if ( (_QWORD)v8 == -1LL )
  {
    gsl::details::terminate(v5);
    __debugbreak();
  }
  v7 = (_BYTE *)*((_QWORD *)this + 1);
  *(_QWORD *)&v8 = a2;
  *((_QWORD *)&v8 + 1) = (char *)a2 + v6;
  *((_QWORD *)&v10 + 1) = (char *)a2 + v6;
  v12 = v8;
  v13 = (char *)a2 + v6;
  *(_QWORD *)&v10 = a2;
  v11 = a2;
  v8 = v10;
  v9 = a2;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    (__int64)this,
    &v14,
    v7,
    (__int64)&v8,
    &v12);
}
