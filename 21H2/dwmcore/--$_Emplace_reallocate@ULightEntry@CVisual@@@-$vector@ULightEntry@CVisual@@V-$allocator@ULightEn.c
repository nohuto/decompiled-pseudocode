/*
 * XREFs of ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x18001534C
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180015218 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800B6FA0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char *__fastcall std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(
        _QWORD *a1,
        char *a2,
        _OWORD *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v6; // rbp
  char *v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // r14
  char *v15; // r15
  char *v16; // rdx
  char *v17; // rcx
  char *result; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  signed __int64 v21; // rax

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*a1];
  v6 = (__int64)(a1[1] - *a1) >> 4;
  v7 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v15 = *a3;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( v7 == v16 )
  {
    while ( v17 != v16 )
    {
      v19 = *(_OWORD *)v17;
      v17 += 16;
      *v13++ = v19;
    }
  }
  else
  {
    if ( v17 != v7 )
    {
      do
      {
        v20 = *(_OWORD *)v17;
        v17 += 16;
        *v13++ = v20;
      }
      while ( v17 != v7 );
      v16 = (char *)a1[1];
    }
    if ( v7 != v16 )
    {
      v21 = v15 - v7;
      do
      {
        *(_OWORD *)&v7[v21 + 16] = *(_OWORD *)v7;
        v7 += 16;
      }
      while ( v7 != v16 );
    }
  }
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  result = v15;
  *a1 = v14;
  a1[1] = &v14[v9];
  a1[2] = &v14[v3];
  return result;
}
