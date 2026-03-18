/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18001069C
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180011F1C (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180010758 (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  char v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-18h]

  v5 = *a2;
  v6 = 0;
  v7 = 0LL;
  v8 = (a2[1] - *a2) >> 4;
  if ( v8 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = 2 * v9;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v5 + 8 * v10) - *(float *)a4) & _xmm) <= 0.0000011920929 )
        break;
      if ( *(float *)(v5 + 8 * v10) > *(float *)a4 )
        goto LABEL_12;
      v7 = (unsigned int)(v7 + 1);
      v9 = (unsigned int)v7;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_6;
    }
    if ( !*(_DWORD *)(v5 + 8 * v10 + 12) )
    {
      if ( !a5 )
      {
        v11 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x5Bu, 0LL);
        return v11;
      }
      v6 = 1;
    }
LABEL_12:
    LODWORD(v8) = v7;
    if ( !v6 )
      goto LABEL_6;
    if ( a5 == 1 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v7 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v5 + 16LL * (unsigned int)v7 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    LODWORD(v13) = *(_DWORD *)a4;
    *((_QWORD *)&v13 + 1) = *(unsigned int *)(a4 + 8);
    DWORD1(v13) = *(_DWORD *)(a4 + 4);
    *(_OWORD *)detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
                 a2,
                 (16LL * (unsigned int)v8) >> 4,
                 v7) = v13;
  }
  return 0;
}
