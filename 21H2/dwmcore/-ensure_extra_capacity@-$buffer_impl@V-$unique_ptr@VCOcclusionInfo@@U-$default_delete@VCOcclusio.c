/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8C7C
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800C8B9C (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800C8D8C (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1800C8DEC (--$uninitialized_move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  LPVOID v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - *a1) >> 3;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801673C4LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *a1) >> 3),
           (v3 - *a1) >> 3,
           v6 + a2);
    v8 = operator new(saturated_mul(v7, 8uLL));
    v9 = a1[1];
    v10 = *a1;
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v6;
    v11 = v8;
    v16 = 0LL;
    v17 = v15;
    v18 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
      &v15,
      v10,
      v9,
      &v17);
    detail::destruct_range<std::unique_ptr<COcclusionInfo>>(*a1, a1[1]);
    v12 = (void *)*a1;
    v13 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    DefaultHeap::Free(v12);
    v14 = *a1;
    a1[1] = *a1 + 8 * v6;
    result = v14 + 8 * v7;
    a1[2] = result;
  }
  return result;
}
