/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1802287A8
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1802291E0 (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800B6FA0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAXQEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@2@_K1@Z @ 0x180229444 (-_Change_array@-$vector@U-$pair@PEAV-$CWeakReference@VCResource@@@@I@std@@V-$allocator@U-$pair@P.c)
 */

char *__fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        __int128 **a1,
        char *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  __int128 *v9; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T size_of; // rax
  _OWORD *v15; // rax
  char *v16; // r14
  _OWORD *v17; // r10
  __int128 *v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm0
  _OWORD *v21; // rcx
  __int128 v22; // xmm0
  __int128 v24; // xmm0

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  v9 = (__int128 *)a2;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = a1[2] - *a1;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v4 = v13 + v12;
    if ( v13 + v12 < v11 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v15 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = (char *)v15 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = v15;
  *(_QWORD *)v16 = *a3;
  *((_DWORD *)v16 + 2) = *a4;
  v18 = a1[1];
  v19 = *a1;
  if ( v9 == v18 )
  {
    while ( v19 != v18 )
    {
      v24 = *v19++;
      *v15++ = v24;
    }
  }
  else
  {
    if ( v19 != v9 )
    {
      do
      {
        v20 = *v19++;
        *v15++ = v20;
      }
      while ( v19 != v9 );
      v18 = a1[1];
    }
    if ( v9 != v18 )
    {
      v21 = v16 + 16;
      do
      {
        v22 = *v9++;
        *v21++ = v22;
      }
      while ( v9 != v18 );
    }
  }
  std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Change_array(a1, v17, v11, v4);
  return v16;
}
