/*
 * XREFs of ?GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x18018CA50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180074F60 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

__int64 __fastcall MPCSixDofProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // xmm0_8
  int v6; // r8d
  __int64 v7; // xmm0_8
  int v8; // xmm1_4
  int v9; // eax
  int v10; // xmm1_4
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v19; // [rsp+20h] [rbp-79h] BYREF
  int v20; // [rsp+30h] [rbp-69h]
  unsigned int v21; // [rsp+34h] [rbp-65h]
  __int64 v22; // [rsp+38h] [rbp-61h]
  int v23; // [rsp+40h] [rbp-59h]
  int v24; // [rsp+44h] [rbp-55h]
  int v25; // [rsp+48h] [rbp-51h]
  int v26; // [rsp+4Ch] [rbp-4Dh]
  int v27; // [rsp+50h] [rbp-49h]
  int v28; // [rsp+54h] [rbp-45h]
  int v29; // [rsp+58h] [rbp-41h]
  __int64 v30; // [rsp+5Ch] [rbp-3Dh]
  int v31; // [rsp+64h] [rbp-35h]
  float v32; // [rsp+68h] [rbp-31h]
  char v33; // [rsp+6Ch] [rbp-2Dh]
  __int16 v34; // [rsp+6Dh] [rbp-2Ch]
  char v35; // [rsp+6Fh] [rbp-2Ah]
  __int128 v36; // [rsp+70h] [rbp-29h]
  __int128 v37; // [rsp+80h] [rbp-19h]
  __int128 v38; // [rsp+90h] [rbp-9h]
  __int128 v39; // [rsp+A0h] [rbp+7h]
  __int128 v40; // [rsp+B0h] [rbp+17h]
  __int128 v41; // [rsp+C0h] [rbp+27h]
  __int64 v42; // [rsp+D0h] [rbp+37h]

  v3 = *(_DWORD *)(a1 + 5028);
  v4 = *(_QWORD *)(a1 + 5128);
  v22 = 0LL;
  v23 = 0;
  v6 = v3 & 1;
  v35 = 0;
  v42 = 0LL;
  HIDWORD(v19) = *(_DWORD *)(a1 + 5024);
  DWORD2(v19) = *(_DWORD *)(a1 + 5136);
  v20 = 5;
  *(_QWORD *)&v19 = v4;
  if ( *(_BYTE *)(a1 + 7592) )
    v21 = v6 != 0 ? 0x20 : 0;
  else
    v21 = v3 & 0x54 | (32 * v6) | (4 * (v3 & 2)) | ((v3 & 8 | (v3 >> 1) & 0x10) >> 3);
  v7 = *(_QWORD *)(a1 + 5116);
  v8 = *(_DWORD *)(a1 + 5084);
  v26 = 0;
  v29 = 0;
  v9 = *(_DWORD *)(a1 + 5124);
  v30 = v7;
  v32 = FLOAT_1_0;
  v24 = *(_DWORD *)(a1 + 5080);
  LODWORD(v7) = *(_DWORD *)(a1 + 5068);
  v25 = v8;
  v10 = *(_DWORD *)(a1 + 5064);
  v28 = v7;
  v27 = v10;
  v31 = v9;
  v34 = 257;
  if ( *(_BYTE *)(a1 + 7585) )
  {
    v11 = *(_DWORD *)(a1 + 5112);
    v22 = *(_QWORD *)(a1 + 5104);
    v33 = 1;
  }
  else
  {
    v11 = 0;
    v33 = 0;
    v22 = 0LL;
  }
  v12 = *(_OWORD *)(a1 + 104);
  v23 = v11;
  v13 = *(_OWORD *)(a1 + 120);
  v36 = v12;
  v14 = *(_OWORD *)(a1 + 136);
  v37 = v13;
  v15 = *(_OWORD *)(a1 + 152);
  v38 = v14;
  v16 = *(_OWORD *)(a1 + 168);
  v39 = v15;
  v17 = *(_OWORD *)(a1 + 184);
  v40 = v16;
  v41 = v17;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v19);
}
