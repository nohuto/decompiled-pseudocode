/*
 * XREFs of ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A3D98
 * Callers:
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801A45F8 (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@0AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x1801A3D5C (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x1801A42C0 (--0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801A440C (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x1801A4BF0 (-_Change_array@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        const struct InfoMetadata::InputInfoMetadata *a4)
{
  _DWORD *v5; // r13
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  size_t v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rsi
  _DWORD *v17; // rbx
  _DWORD *v18; // rdi
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  _DWORD *v21; // rbx
  __int64 result; // rax
  _DWORD *v23; // [rsp+20h] [rbp-78h]
  _DWORD *v24; // [rsp+28h] [rbp-70h]
  unsigned __int64 v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+A0h] [rbp+8h]

  v5 = a2;
  v7 = ((__int64)a2 - *a1) / 328;
  v8 = (__int64)((unsigned __int128)((__int64)(a1[1] - *a1) * (__int128)0x63E7063E7063E707LL) >> 64) >> 7;
  v9 = (v8 >> 63) + v8;
  v25 = v9;
  if ( v9 == 0xC7CE0C7CE0C7CELL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) / 328LL;
  v12 = v11 >> 1;
  if ( v11 <= 0xC7CE0C7CE0C7CELL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v14 = 328 * v13;
  if ( v13 > 0xC7CE0C7CE0C7CELL )
    v14 = -1LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
  v16 = v15;
  v23 = v15;
  v26 = 328 * v7;
  v17 = &v15[41 * v7];
  v18 = v17 + 82;
  v27 = (__int64)(v17 + 82);
  try
  {
    *v17 = *a3;
    InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v17 + 2), a4);
    v28 = (__int64)v17;
    v19 = (_DWORD *)a1[1];
    v24 = v19;
    v20 = (_DWORD *)*a1;
    if ( v5 == v19 )
    {
      v18 = v16;
      while ( v20 != v19 )
      {
        *v18 = *v20;
        InfoMetadata::InputInfoMetadata::InputInfoMetadata(
          (InfoMetadata::InputInfoMetadata *)(v18 + 2),
          (const struct InfoMetadata::InputInfoMetadata *)(v20 + 2));
        v18 += 82;
        v20 += 82;
        v19 = v24;
      }
    }
    else
    {
      while ( v20 != v5 )
      {
        *v16 = *v20;
        InfoMetadata::InputInfoMetadata::InputInfoMetadata(v16 + 2, v20 + 2);
        v16 += 82;
        v20 += 82;
      }
      std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        (__int64)v16,
        (__int64)v16);
      v16 = v23;
      v28 = (__int64)v23;
      v21 = (_DWORD *)a1[1];
      while ( v5 != v21 )
      {
        *v18 = *v5;
        InfoMetadata::InputInfoMetadata::InputInfoMetadata(v18 + 2, v5 + 2);
        v18 += 82;
        v5 += 82;
      }
    }
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      (__int64)v18,
      (__int64)v18);
    std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Change_array(a1, v16, v25 + 1, v13);
    result = v26 + *a1;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(v28, v27);
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(328 * v13));
    throw;
  }
  return result;
}
