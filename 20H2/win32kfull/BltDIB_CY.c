/*
 * XREFs of BltDIB_CY @ 0x1C00860D0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00862E0 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C0266540 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C026B6C4 (MappingBGRF.c)
 */

__int64 __fastcall BltDIB_CY(__int128 *a1)
{
  int *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // ebx
  __int64 FixupScan; // rax
  unsigned __int16 *v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v23; // rax
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  unsigned int v27; // [rsp+E4h] [rbp-1Ch]
  int v28; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v29)(int *); // [rsp+110h] [rbp+10h]
  void (__fastcall *v30)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v31; // [rsp+168h] [rbp+68h]
  void (__fastcall *v32)(__int64, __int64, __int64, __int64, int); // [rsp+170h] [rbp+70h]
  __int64 v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  __int64 v35; // [rsp+1D0h] [rbp+D0h]
  __int64 v36; // [rsp+1D8h] [rbp+D8h]
  __int64 v37; // [rsp+1E8h] [rbp+E8h]
  __int64 v38; // [rsp+1F0h] [rbp+F0h]
  __int64 v39; // [rsp+1F8h] [rbp+F8h]
  int v40; // [rsp+200h] [rbp+100h]
  int v41; // [rsp+204h] [rbp+104h]
  int v42; // [rsp+208h] [rbp+108h]
  __int64 v43; // [rsp+210h] [rbp+110h]
  __int64 v44; // [rsp+218h] [rbp+118h]
  __int64 v45; // [rsp+220h] [rbp+120h]
  int v46; // [rsp+228h] [rbp+128h]
  __int64 v47; // [rsp+268h] [rbp+168h]
  _WORD *v48; // [rsp+270h] [rbp+170h]
  unsigned __int64 v49; // [rsp+278h] [rbp+178h]
  __int64 v50; // [rsp+280h] [rbp+180h]
  __int64 v51; // [rsp+288h] [rbp+188h]
  __int64 v52; // [rsp+290h] [rbp+190h]
  __int64 v53; // [rsp+298h] [rbp+198h]
  int v54; // [rsp+2A0h] [rbp+1A0h]

  v1 = &v24;
  v2 = 4LL;
  do
  {
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *(_OWORD *)v1 = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 + 1) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 + 2) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 + 3) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 + 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 + 5) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 + 6) = v9;
    v1 += 32;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = *(_DWORD *)(v34 + 4);
  while ( v16 )
  {
    --v16;
    FixupScan = GetFixupScan(&v24, v47);
    v32(v33, FixupScan, v52, v53, v54);
    if ( (v25 & 4) != 0 )
    {
      v21 = v48;
      do
      {
        v18 = GrayIdxWORD;
        *v21 = GrayIdxWORD[*(unsigned __int8 *)v21];
        v21 += 2;
      }
      while ( (unsigned __int64)v21 < v49 );
    }
    v19 = v24;
    if ( (v24 & 0x80u) != 0 )
    {
      v29(&v24);
      v19 = v24;
    }
    if ( (v19 & 0x800) != 0 )
    {
      AlphaBlendBGRF(&v24, v18);
      LOBYTE(v19) = v24;
    }
    if ( (v19 & 0x10) != 0 )
    {
      MappingBGRF(v48, v49, v36, v43);
      v23 = v46 + v43;
      if ( v23 == v44 )
        v23 = v45;
      v43 = v23;
    }
    v30(&v24, v50, v51, v26, v35, v37, v37 + v41, v42, v31);
    v20 = v40 + v37;
    if ( v20 == v38 )
      v20 = v39;
    v26 += v28;
    v37 = v20;
  }
  return v27;
}
