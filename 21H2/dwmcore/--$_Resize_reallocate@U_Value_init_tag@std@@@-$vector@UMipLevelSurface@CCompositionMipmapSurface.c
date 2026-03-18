/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18020CD2C
 * Callers:
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x18020D314 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800B6FCC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // r10
  _OWORD *v11; // rcx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rdx
  _OWORD *v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *i; // rax
  __int128 v17; // xmm1

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (__int64)(a1[2] - *a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = (_OWORD *)(v10 + 32 * v7);
  v12 = a2 - v7;
  if ( a2 != v7 )
  {
    v13 = v11 + 1;
    do
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      *(v13 - 1) = 0LL;
      v11 += 2;
      *v13 = 0LL;
      v13 += 4;
      --v12;
    }
    while ( v12 );
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
  return std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Change_array(a1, v10, a2, v2);
}
