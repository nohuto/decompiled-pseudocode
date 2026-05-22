/*
 * XREFs of ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x18007D880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180074F60 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z @ 0x18007DFBC (-MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z.c)
 */

__int64 __fastcall MPCHandProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // edi
  __int128 v8; // xmm1
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v30; // [rsp+20h] [rbp-89h] BYREF
  __int128 v31; // [rsp+30h] [rbp-79h]
  __int128 v32; // [rsp+40h] [rbp-69h]
  __m256i v33; // [rsp+50h] [rbp-59h]
  __int128 v34; // [rsp+70h] [rbp-39h]
  __int128 v35; // [rsp+80h] [rbp-29h]
  __int128 v36; // [rsp+90h] [rbp-19h]
  __int128 v37; // [rsp+A0h] [rbp-9h]
  __int128 v38; // [rsp+B0h] [rbp+7h]
  __int128 v39; // [rsp+C0h] [rbp+17h]
  __int64 v40; // [rsp+D0h] [rbp+27h]

  memset_0(&v30, 0, 0xB8uLL);
  v6 = *(_BYTE *)(a1 + 5612) == 0;
  v7 = *(_DWORD *)(a1 + 5468);
  v8 = *(_OWORD *)(a1 + 120);
  v9 = *(_DWORD *)(a1 + 5620);
  v34 = *(_OWORD *)(a1 + 104);
  v10 = *(_OWORD *)(a1 + 136);
  HIDWORD(v30) = v7;
  v35 = v8;
  v11 = *(_OWORD *)(a1 + 152);
  LODWORD(v31) = 6;
  v36 = v10;
  v12 = *(_OWORD *)(a1 + 168);
  DWORD1(v31) = v9;
  v37 = v11;
  v13 = *(_OWORD *)(a1 + 184);
  v38 = v12;
  v39 = v13;
  if ( v6 )
  {
    HIDWORD(v40) = 0;
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 5604);
    v14 = 1;
    if ( (_DWORD)v5 == 2 )
    {
      HIDWORD(v40) = 5;
    }
    else
    {
      if ( (_DWORD)v5 == 1 )
        v14 = 3;
      HIDWORD(v40) = v14;
    }
    v15 = *(_QWORD *)(a1 + 10960);
    v33.m256i_i8[28] = *(_BYTE *)(a1 + 10944);
    v33.m256i_i8[30] = v33.m256i_i8[28];
    v16 = *(_DWORD *)(a1 + 10968);
    *((_QWORD *)&v31 + 1) = v15;
    v17 = *(_QWORD *)(a1 + 10948);
    LODWORD(v32) = v16;
    v33.m256i_i32[5] = *(_DWORD *)(a1 + 10956);
    *(__int64 *)((char *)&v33.m256i_i64[1] + 4) = v17;
  }
  if ( (*(_DWORD *)(a1 + 10780) != v9 || *(_DWORD *)(a1 + 10772) != v7) && ISMTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<ISMTracing>::get(v18, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHandProcessor_PointDataChanged_(v19, v7, v9);
  }
  v20 = v31;
  *(_OWORD *)(a1 + 10760) = v30;
  v21 = v32;
  *(_OWORD *)(a1 + 10776) = v20;
  v22 = *(_OWORD *)v33.m256i_i8;
  *(_OWORD *)(a1 + 10792) = v21;
  v23 = *(_OWORD *)&v33.m256i_u64[2];
  *(_OWORD *)(a1 + 10808) = v22;
  v24 = v34;
  *(_OWORD *)(a1 + 10824) = v23;
  v25 = v35;
  *(_OWORD *)(a1 + 10840) = v24;
  *(_OWORD *)(a1 + 10856) = v25;
  *(_OWORD *)(a1 + 10872) = v36;
  v26 = v38;
  *(_OWORD *)(a1 + 10888) = v37;
  v27 = v39;
  v28 = v40;
  *(_OWORD *)(a1 + 10904) = v26;
  *(_OWORD *)(a1 + 10920) = v27;
  *(_QWORD *)(a1 + 10936) = v28;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v30);
}
