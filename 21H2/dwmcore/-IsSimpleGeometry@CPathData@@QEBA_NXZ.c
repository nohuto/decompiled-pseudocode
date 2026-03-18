/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180270014
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801918C0 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x1802A00F4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800CAA30 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72);
  if ( !v1 )
  {
    v3 = (_BYTE *)*((_QWORD *)this + 2);
    v4 = (_BYTE *)*((_QWORD *)this + 3);
    v6 = v3;
    while ( v3 != v4 )
    {
      if ( (unsigned __int8)(*v3 - 3) <= 1u )
      {
        v1 = -1;
        goto LABEL_8;
      }
      Path::SegmentCollection::const_iterator::operator++(&v6);
      v3 = v6;
    }
    v1 = 1;
LABEL_8:
    *((_BYTE *)this + 72) = v1;
  }
  return v1 == 1;
}
