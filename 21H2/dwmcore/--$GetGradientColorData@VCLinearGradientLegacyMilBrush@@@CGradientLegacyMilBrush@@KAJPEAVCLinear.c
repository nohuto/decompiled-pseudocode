/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180208034
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x18005B9A0 (-GetOpacity@CLegacyMilBrush@@KAMMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18022B7F8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@QEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x1802A1624 (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 */

__int64 __fastcall CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  float Opacity; // xmm0_4
  __int64 v5; // rcx
  unsigned int v6; // edx
  _OWORD *v7; // rdi
  __int64 v8; // rsi
  _OWORD *v9; // rdx
  float v10; // xmm6_4
  float *v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rax
  float v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  a2[1] = *a2;
  a2[4] = a2[3];
  Opacity = CLegacyMilBrush::GetOpacity(*(float *)(a1 + 80), *(_QWORD *)(a1 + 88));
  v6 = *(_DWORD *)(v5 + 124) / 0x18u;
  if ( v6 )
  {
    v7 = (_OWORD *)(v2 + 8);
    v8 = v6;
    do
    {
      v9 = (_OWORD *)a2[1];
      v10 = *((double *)v7 - 1);
      v15 = v10;
      if ( v9 == (_OWORD *)a2[2] )
      {
        std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(a2, v9, v7);
      }
      else
      {
        *v9 = *v7;
        a2[1] += 16LL;
      }
      v11 = (float *)a2[4];
      if ( v11 == (float *)a2[5] )
      {
        std::vector<float>::_Emplace_reallocate<float const &>(a2 + 3, v11, &v15);
      }
      else
      {
        *v11 = v10;
        a2[4] = v11 + 1;
      }
      v7 = (_OWORD *)((char *)v7 + 24);
      --v8;
    }
    while ( v8 );
  }
  v12 = a2[1];
  for ( i = *a2; i != v12; i += 16LL )
    *(float *)(i + 12) = Opacity * *(float *)(i + 12);
  return 0LL;
}
