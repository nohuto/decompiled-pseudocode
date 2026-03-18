/*
 * XREFs of ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18025C7AC
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025D300 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     _o__hypot_0 @ 0x1800E39BA (_o__hypot_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021FAA4 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180220174 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18025C0A8 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x18025C17C (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18025C2DC (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x18025D284 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 */

float __fastcall CPathLengthOperation::GetLength(CPathLengthOperation *this, const struct CPathData *a2)
{
  float v4; // xmm8_4
  char *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm7_4
  char *v8; // rdi
  float v9; // xmm10_4
  float v10; // xmm11_4
  float v11; // xmm9_4
  int v12; // xmm1_4
  unsigned int v13; // xmm0_4
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // si
  int v17; // xmm1_4
  double v18; // xmm0_8
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-51h] BYREF
  char *v22; // [rsp+58h] [rbp-49h] BYREF
  __int128 v23; // [rsp+60h] [rbp-41h] BYREF
  const void *retaddr; // [rsp+100h] [rbp+5Fh]
  __int64 v25; // [rsp+110h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+118h] [rbp+77h] BYREF
  unsigned __int64 v27; // [rsp+120h] [rbp+7Fh] BYREF

  v4 = *((float *)a2 + 15);
  if ( v4 == 0.0 && CPathData::IsSimpleGeometry(a2) )
  {
    v25 = 0LL;
    v26 = 0LL;
    v5 = (char *)*((_QWORD *)a2 + 3);
    v6 = 0.0;
    v7 = 0.0;
    v8 = (char *)*((_QWORD *)a2 + 4);
    v9 = 0.0;
    v10 = 0.0;
    v22 = v5;
    while ( v5 != v8 )
    {
      v11 = 0.0;
      if ( *v5 )
      {
        switch ( *v5 )
        {
          case 1:
            if ( v5[2] )
              v11 = o__hypot_0((float)(v10 - v7), (float)(v9 - v6));
            break;
          case 2:
            v18 = o__hypot_0((float)(v7 - *((float *)v5 + 2)), (float)(v6 - *((float *)v5 + 3)));
            v7 = *((float *)v5 + 2);
            v6 = *((float *)v5 + 3);
            v11 = v18;
            break;
          case 5:
            v12 = *((_DWORD *)v5 + 7);
            LODWORD(v26) = *((_DWORD *)v5 + 6);
            v13 = *((_DWORD *)v5 + 4);
            HIDWORD(v26) = v12;
            v27 = __PAIR64__(*((_DWORD *)v5 + 5), v13);
            v20 = *((_QWORD *)v5 + 1);
            v21 = __PAIR64__(LODWORD(v6), LODWORD(v7));
            CBezierFlattener<float,CMilPoint2F>::SetPoints((__int64)this, &v21, &v20, &v27, &v26);
            if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v14, (__int64)&v23) >= 0 )
            {
              *((float *)this + 23) = v7;
              *((float *)this + 24) = v6;
              while ( 1 )
              {
                v16 = CBezierFlattener<float,CMilPoint2F>::Flatten(
                        (__int64)this,
                        (__int64)this + 100,
                        v15,
                        0LL,
                        0xFu,
                        &v25);
                v11 = v11 + CPathLengthOperation::SumPointDistances(this, v25);
                if ( !v16 )
                  break;
                v17 = *((_DWORD *)this + 54);
                *((_DWORD *)this + 23) = *((_DWORD *)this + 53);
                *((_DWORD *)this + 24) = v17;
              }
            }
            v7 = *((float *)v5 + 6);
            v6 = *((float *)v5 + 7);
            break;
          default:
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
      }
      else
      {
        v10 = *((float *)v5 + 2);
        v9 = *((float *)v5 + 3);
        v7 = v10;
        v6 = v9;
      }
      *((float *)v5 + 1) = v11;
      v4 = v4 + v11;
      Path::SegmentCollection::const_iterator::operator++(&v22);
      v5 = v22;
    }
    *((float *)a2 + 15) = v4;
  }
  return v4;
}
