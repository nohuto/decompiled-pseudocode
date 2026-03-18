/*
 * XREFs of ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x18006E9B4
 * Callers:
 *     ??$FillAllRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x1800720C8 (--$FillAllRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3DCOLORVALUE@@_K1@Z @ 0x18006EAB4 (-_Change_array@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3D.c)
 */

unsigned __int64 __fastcall std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>::_Emplace_reallocate<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        __int128 **a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int128 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  _OWORD *v13; // rax
  unsigned __int64 v14; // r14
  _OWORD *v15; // r10
  __int128 *v16; // rdx
  __int128 *v17; // rcx
  _OWORD *v18; // r8
  __int128 v19; // xmm0
  __int128 v21; // xmm0
  char *v22; // rcx

  v4 = a2 - (char *)*a1;
  v5 = a1[1] - *a1;
  v6 = (__int128 *)a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = v13;
  *(_OWORD *)((char *)v13 + v14) = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( v6 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *v17++;
      *v18++ = v19;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        v21 = *v17++;
        *v13++ = v21;
      }
      while ( v17 != v6 );
      v16 = a1[1];
    }
    if ( v6 != v16 )
    {
      v22 = (char *)v15 + v14 - (_QWORD)v6;
      do
      {
        *(__int128 *)((char *)v6 + (_QWORD)v22 + 16) = *v6;
        ++v6;
      }
      while ( v6 != v16 );
    }
  }
  std::vector<_D3DCOLORVALUE>::_Change_array(a1, v15, v8, v11);
  return (unsigned __int64)*a1 + v14;
}
