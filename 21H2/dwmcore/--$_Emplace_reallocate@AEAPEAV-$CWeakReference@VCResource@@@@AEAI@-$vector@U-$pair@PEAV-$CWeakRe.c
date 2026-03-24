/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1801D9D04
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801DA74C (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3DCOLORVALUE@@_K1@Z @ 0x180063754 (-_Change_array@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3D.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        __int64 *a1,
        __int128 *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int128 *v8; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  SIZE_T v14; // rcx
  _OWORD *v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r10
  __int128 *v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm0
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  __int128 v24; // xmm0

  v5 = (unsigned __int64)a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v8 = a2;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v10 = v6 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v6 + 1;
  }
  else
  {
    v13 = v6 + 1;
  }
  v14 = 16 * v13;
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    v14 = -1LL;
  v15 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v16 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = (__int64)v15;
  *(_QWORD *)((char *)v15 + v16) = *a3;
  *(_DWORD *)((char *)v15 + v16 + 8) = *a4;
  v18 = (__int128 *)a1[1];
  v19 = (__int128 *)*a1;
  if ( v8 == v18 )
  {
    while ( v19 != v18 )
    {
      v24 = *v19++;
      *v15++ = v24;
    }
  }
  else
  {
    if ( v19 != v8 )
    {
      do
      {
        v20 = *v19++;
        *v15++ = v20;
      }
      while ( v19 != v8 );
      v18 = (__int128 *)a1[1];
    }
    if ( v8 != v18 )
    {
      v21 = (_OWORD *)(v17 + v16 + 16);
      do
      {
        v22 = *v8++;
        *v21++ = v22;
      }
      while ( v8 != v18 );
    }
  }
  std::vector<_D3DCOLORVALUE>::_Change_array(a1, v17, v10, v13);
  return v16 + *a1;
}
