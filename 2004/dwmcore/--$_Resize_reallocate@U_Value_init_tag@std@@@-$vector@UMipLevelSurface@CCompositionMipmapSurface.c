/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BB714
 * Callers:
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1801BBCE0 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  SIZE_T v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  _OWORD *v12; // rbx
  _QWORD *v13; // rcx
  _OWORD *v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *i; // rax
  __int128 v17; // xmm1

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v4 = a1[1] - *a1;
  v5 = (__int64)(a1[2] - *a1) >> 5;
  v6 = v4 >> 5;
  v7 = v5 >> 1;
  if ( v5 <= 0x7FFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 < a2 )
      v8 = a2;
  }
  else
  {
    v8 = a2;
  }
  v9 = 32 * v8;
  if ( v8 > 0x7FFFFFFFFFFFFFFLL )
    v9 = -1LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v11 = a2 - v6;
  v12 = (_OWORD *)(v10 + 32 * v6);
  if ( v11 )
  {
    v13 = v12 + 1;
    do
    {
      *v12 = 0LL;
      v12[1] = 0LL;
      *(v13 - 1) = 0LL;
      v12 += 2;
      *v13 = 0LL;
      v13 += 4;
      --v11;
    }
    while ( v11 );
  }
  v14 = (_OWORD *)a1[1];
  v15 = (_OWORD *)v10;
  for ( i = (_OWORD *)*a1; i != v14; i += 2 )
  {
    *v15 = *i;
    v15 += 2;
    v17 = i[1];
    *(v15 - 1) = v17;
  }
  return std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(a1, v10, a2, v8);
}
