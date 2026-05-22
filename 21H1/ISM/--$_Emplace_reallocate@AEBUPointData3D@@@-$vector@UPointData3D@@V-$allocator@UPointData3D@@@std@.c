/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x180075328
 * Callers:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180075530 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     ?_Change_array@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3D@@_K1@Z @ 0x180079474 (-_Change_array@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3.c)
 */

__int64 __fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r13
  _OWORD *v16; // rcx
  __int64 v17; // rcx
  _OWORD *v18; // r14
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  _QWORD *v21; // rcx
  size_t v22; // r8
  __int64 result; // rax
  void *v24; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 184;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 184;
  if ( v7 == 0x1642C8590B21642LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 184;
  v10 = v9 >> 1;
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 184 * v11;
  if ( v11 > 0x1642C8590B21642LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v24 = v13;
  try
  {
    v15 = 23 * v6;
    v16 = &v13[v15];
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
    v16[3] = a3[3];
    v16[4] = a3[4];
    v16[5] = a3[5];
    v16[6] = a3[6];
    v17 = (__int64)&v13[v15 + 16];
    *(_OWORD *)(v17 - 16) = a3[7];
    v18 = a3 + 8;
    *(_OWORD *)v17 = *v18;
    *(_OWORD *)(v17 + 16) = v18[1];
    *(_OWORD *)(v17 + 32) = v18[2];
    *(_QWORD *)(v17 + 48) = *((_QWORD *)v18 + 6);
    v19 = a1[1];
    v20 = *a1;
    v21 = v13;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v13, v20, a2 - (_BYTE *)*a1);
      v21 = &v14[v15 + 23];
      v22 = (_BYTE *)a1[1] - a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
    std::vector<PointData3D>::_Change_array(a1, v14, v8, v11);
    result = (__int64)*a1 + v15 * 8;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(184 * v11));
    throw;
  }
  return result;
}
