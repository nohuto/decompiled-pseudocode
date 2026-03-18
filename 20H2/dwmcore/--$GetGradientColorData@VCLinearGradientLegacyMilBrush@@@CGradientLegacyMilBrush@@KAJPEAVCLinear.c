/*
 * XREFs of ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B4814
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B4A84 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 * Callees:
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x180073D8C (-GetOpacity@CLegacyMilBrush@@KAMMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801DBEF0 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DC250 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 */

__int64 __fastcall CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  float Opacity; // xmm0_4
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  _OWORD *v9; // rdi
  __int64 v10; // rbp
  _OWORD *v11; // rdx
  float v12; // xmm6_4
  float *v13; // rdx
  float v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 120);
  a2[1] = *a2;
  a2[4] = a2[3];
  Opacity = CLegacyMilBrush::GetOpacity(*(float *)(a1 + 72), *(_QWORD *)(a1 + 80));
  v7 = v4;
  v8 = *(_DWORD *)(v6 + 116) / 0x18u;
  if ( v8 )
  {
    v9 = (_OWORD *)(v3 + 8);
    v10 = v8;
    do
    {
      v11 = (_OWORD *)a2[1];
      v12 = *((double *)v9 - 1);
      v15 = v12;
      if ( (_OWORD *)a2[2] == v11 )
      {
        std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
          a2,
          v11,
          v9);
      }
      else
      {
        *v11 = *v9;
        a2[1] += 16LL;
      }
      v13 = (float *)a2[4];
      if ( (float *)a2[5] == v13 )
      {
        std::vector<float>::_Emplace_reallocate<float const &>(a2 + 3, v13, &v15);
      }
      else
      {
        a2[4] += 4LL;
        *v13 = v12;
      }
      v9 = (_OWORD *)((char *)v9 + 24);
      --v10;
    }
    while ( v10 );
    v4 = *a2;
    v7 = a2[1];
  }
  while ( v4 != v7 )
  {
    *(float *)(v4 + 12) = Opacity * *(float *)(v4 + 12);
    v4 += 16LL;
  }
  return 0LL;
}
