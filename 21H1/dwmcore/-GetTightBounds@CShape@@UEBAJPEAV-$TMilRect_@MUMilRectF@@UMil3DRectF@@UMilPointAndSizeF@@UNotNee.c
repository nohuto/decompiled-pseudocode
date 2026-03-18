/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180019120
 * Callers:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AB460 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019258 (-HasValidValues@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005C100 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BF56C (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  _DWORD *v12; // r8
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v20[6]; // [rsp+58h] [rbp-28h] BYREF

  v18 = 0LL;
  v3 = 0LL;
  v5 = a1;
  if ( !a3 )
    goto LABEL_2;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
  {
    v3 = v20;
    v13 = v12[1];
    v20[0] = *v12;
    v14 = v12[4];
    v20[1] = v13;
    v15 = v12[5];
    v20[2] = v14;
    v16 = v12[12];
    v20[3] = v15;
    v17 = v12[13];
    v20[4] = v16;
    v20[5] = v17;
LABEL_2:
    v6 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, v6, &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x368u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _OWORD *))(*(_QWORD *)v18 + 32LL))(v18, v3, v19);
    v19[1] = v19[0];
    *(_OWORD *)a2 = v19[0];
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered() )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
    else
    {
      v9 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304438, 0x374u, 0LL);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
