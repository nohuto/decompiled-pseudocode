/*
 * XREFs of ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800DD850
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE85C (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 *     ?_Change_array@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAXQEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@_K1@Z @ 0x1800E2024 (-_Change_array@-$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal.c)
 */

__int64 __fastcall std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
        const void **a1,
        _BYTE *a2,
        const void *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rax
  void *v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // r13
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  __int64 result; // rax
  void *v21; // [rsp+68h] [rbp+10h]

  v5 = (a2 - (_BYTE *)*a1) / 1328;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 1328;
  if ( v6 == 0x3159721ED7E753LL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 1328;
  v9 = v8 >> 1;
  if ( v8 <= 0x3159721ED7E753LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 1328 * v10;
  if ( v10 > 0x3159721ED7E753LL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = v12;
  v21 = v12;
  try
  {
    v14 = 166 * v5;
    v15 = &v12[v14];
    memcpy_0(&v12[v14], a3, 0x530uLL);
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = v15 + 166;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Change_array(
      a1,
      v13,
      v7,
      v10);
    result = (__int64)*a1 + v14 * 8;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(1328 * v10));
    throw;
  }
  return result;
}
