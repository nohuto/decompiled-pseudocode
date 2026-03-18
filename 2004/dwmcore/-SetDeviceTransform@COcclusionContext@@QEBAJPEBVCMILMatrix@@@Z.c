/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180062884
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001ACA8 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180060FC0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18007905C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BFCB0 (-SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  const struct CMILMatrix *v2; // rdi
  unsigned int v4; // ebp
  char v5; // si
  const struct CMILMatrix *v6; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  __int128 v14; // xmm1
  _OWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]

  v2 = a2;
  v4 = 0;
  v5 = 0;
  if ( a2 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    v16 = 0;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v15, v6) )
    {
      if ( !*((_BYTE *)this + 1244) || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 1248, v2) )
        v5 = 1;
      *((_OWORD *)this + 78) = *(_OWORD *)v2;
      *((_OWORD *)this + 79) = *((_OWORD *)v2 + 1);
      *((_OWORD *)this + 80) = *((_OWORD *)v2 + 2);
      v9 = v15[0];
      *((_OWORD *)this + 81) = *((_OWORD *)v2 + 3);
      v10 = *((_DWORD *)v2 + 16);
      v11 = v15[1];
      *(_OWORD *)((char *)this + 1316) = v9;
      *((_DWORD *)this + 328) = v10;
      v12 = v15[2];
      v13 = v16;
      *(_OWORD *)((char *)this + 1332) = v11;
      *((_BYTE *)this + 1244) = 1;
      v14 = v15[3];
      *(_OWORD *)((char *)this + 1348) = v12;
      *(_OWORD *)((char *)this + 1364) = v14;
      *((_DWORD *)this + 345) = v13;
    }
    else
    {
      v4 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003304441, 0x4Eu, 0LL);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 1244) )
    {
      *((_BYTE *)this + 1244) = 0;
      v5 = 1;
    }
    v2 = 0LL;
    *((_QWORD *)this + 156) = 1065353216LL;
    *((_QWORD *)this + 157) = 0LL;
    *((_DWORD *)this + 316) = 0;
    *(_QWORD *)((char *)this + 1268) = 1065353216LL;
    *(_QWORD *)((char *)this + 1276) = 0LL;
    *((_DWORD *)this + 321) = 0;
    *((_QWORD *)this + 161) = 1065353216LL;
    *((_QWORD *)this + 162) = 0LL;
    *((_DWORD *)this + 326) = 0;
    *((_DWORD *)this + 327) = 1065353216;
    *((_WORD *)this + 656) = 32085;
    *(_QWORD *)((char *)this + 1316) = 1065353216LL;
    *(_QWORD *)((char *)this + 1324) = 0LL;
    *((_DWORD *)this + 333) = 0;
    *((_QWORD *)this + 167) = 1065353216LL;
    *((_QWORD *)this + 168) = 0LL;
    *((_DWORD *)this + 338) = 0;
    *(_QWORD *)((char *)this + 1356) = 1065353216LL;
    *(_QWORD *)((char *)this + 1364) = 0LL;
    *((_DWORD *)this + 343) = 0;
    *((_DWORD *)this + 344) = 1065353216;
    *((_WORD *)this + 690) = 32085;
  }
  if ( v5 )
    CArrayBasedCoverageSet::SetDeviceTransform((COcclusionContext *)((char *)this + 408), v2);
  return v4;
}
