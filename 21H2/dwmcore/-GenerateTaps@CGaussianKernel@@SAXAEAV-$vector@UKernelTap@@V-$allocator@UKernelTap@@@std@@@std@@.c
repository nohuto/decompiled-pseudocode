/*
 * XREFs of ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1800318E8
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180032270 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z @ 0x180031AB8 (-_Reallocate_exactly@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAX_K@Z.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     _o_expf_0 @ 0x1801018E0 (_o_expf_0.c)
 *     ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B2AD0 (--$_Emplace_reallocate@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAP.c)
 *     ??$emplace_back@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@$$QEAMAEAM1@Z @ 0x1802B2DC8 (--$emplace_back@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKern.c)
 */

unsigned __int64 __fastcall CGaussianKernel::GenerateTaps(unsigned __int64 *a1, char a2, float a3, float a4)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  unsigned __int64 result; // rax
  unsigned int v9; // r15d
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  float v12; // xmm7_4
  int v13; // esi
  float v14; // xmm10_4
  double v15; // xmm0_8
  float v16; // xmm9_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  unsigned __int64 v19; // rdx
  float v20; // xmm7_4
  float v21; // xmm0_4
  int v22; // [rsp+C0h] [rbp+40h] BYREF
  float v23; // [rsp+D0h] [rbp+50h] BYREF
  float v24; // [rsp+D8h] [rbp+58h] BYREF

  v6 = fmaxf(1.0, o_ceilf_0(a3 * a4));
  v7 = o_ceilf_0((float)(int)v6 * 0.5);
  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  v9 = (int)v7;
  v10 = (unsigned int)(int)v7;
  if ( v10 > result )
    result = std::vector<KernelTap>::_Reallocate_exactly(a1, (unsigned int)v10);
  v11 = 0LL;
  v12 = 0.0;
  v13 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = (float)v13 + (float)v13;
      v15 = ((double (*)(void))o_expf_0)();
      v16 = *(float *)&v15;
      v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v14 + 1.0) * (float)(v14 + 1.0)) ^ _xmm)
          / (float)((float)(a3 * a3) + (float)(a3 * a3));
      o_expf_0();
      if ( !v13 )
        v16 = *(float *)&v15 * 0.5;
      v22 = 0;
      v18 = v17 + v16;
      v23 = v17 + v16;
      v24 = (float)(v17 / (float)(v17 + v16)) + v14;
      if ( a2 )
        break;
      v19 = a1[1];
      if ( v19 == a1[2] )
      {
        std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
          (_DWORD)a1,
          v19,
          (unsigned int)&v24,
          (unsigned int)&v22,
          (__int64)&v23);
LABEL_15:
        v18 = v23;
        goto LABEL_9;
      }
      *(float *)v19 = (float)(v17 / (float)(v17 + v16)) + v14;
      a1[1] = v19 + 12;
      *(float *)(v19 + 8) = v18;
      *(_DWORD *)(v19 + 4) = 0;
LABEL_9:
      ++v13;
      v12 = v12 + v18;
      if ( v13 >= v9 )
      {
        result = *a1;
        v20 = v12 + v12;
        do
        {
          v21 = *(float *)(v11 + result + 8);
          v11 += 12LL;
          *(float *)(v11 + result - 4) = v21 / v20;
          --v10;
        }
        while ( v10 );
        return result;
      }
    }
    std::vector<KernelTap>::emplace_back<float,float &,float &>(a1, &v22, &v24, &v23);
    goto LABEL_15;
  }
  return result;
}
