/*
 * XREFs of ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x1800BD744
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800BD5B8 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3DCOLORVALUE@@_K1@Z @ 0x180045B28 (-_Change_array@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3D.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(
        __int64 *a1,
        __int128 *a2,
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
  __int64 v15; // r10
  __int128 *v16; // rdx
  __int128 *v17; // rcx
  _OWORD *v18; // r8
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  unsigned __int64 v22; // rcx

  v4 = (unsigned __int64)a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
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
  v15 = (__int64)v13;
  *(_OWORD *)((char *)v13 + v14) = *a3;
  v16 = (__int128 *)a1[1];
  v17 = (__int128 *)*a1;
  if ( v6 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v20 = *v17++;
      *v18++ = v20;
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
      v16 = (__int128 *)a1[1];
    }
    if ( v6 != v16 )
    {
      v22 = v15 + v14 - (_QWORD)v6;
      do
      {
        *(__int128 *)((char *)v6 + v22 + 16) = *v6;
        ++v6;
      }
      while ( v6 != v16 );
    }
  }
  std::vector<_D3DCOLORVALUE>::_Change_array(a1, v15, v8, v11);
  return v14 + *a1;
}
