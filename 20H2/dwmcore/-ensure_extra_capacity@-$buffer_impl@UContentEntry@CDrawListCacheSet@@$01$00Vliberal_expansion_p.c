/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18005EF34
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18005EE0C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18006C9A4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C50E0 (--$uninitialized_copy@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800D7E7C (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CDrawListCacheSet::ContentEntry **a1,
        unsigned __int64 a2)
{
  CDrawListCacheSet::ContentEntry *v2; // r10
  CDrawListCacheSet::ContentEntry *v4; // rcx
  unsigned __int64 result; // rax
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  CDrawListCacheSet::ContentEntry *v9; // rax
  CDrawListCacheSet::ContentEntry *v10; // r8
  CDrawListCacheSet::ContentEntry *v11; // rdx
  CDrawListCacheSet::ContentEntry *v12; // rbx
  CDrawListCacheSet::ContentEntry *v13; // rcx
  bool v14; // zf
  CDrawListCacheSet::ContentEntry *v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h]

  v2 = a1[2];
  v4 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - v4) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( (v2 - v4) / 24 < a2 )
  {
    v6 = v4 - *a1;
    v7 = v6 / 24;
    if ( v7 + a2 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180115EBALL);
    }
    v8 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v6, (v2 - *a1) / 24, v6 / 24 + a2);
    v9 = (CDrawListCacheSet::ContentEntry *)operator new(saturated_mul(v8, 0x18uLL));
    v10 = a1[1];
    v11 = *a1;
    *(_QWORD *)&v16 = v9;
    *((_QWORD *)&v16 + 1) = v7;
    v12 = v9;
    v17 = 0LL;
    v18 = v16;
    v19 = 0LL;
    ((void (__fastcall *)(__int128 *, CDrawListCacheSet::ContentEntry *, CDrawListCacheSet::ContentEntry *, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      &v16,
      v11,
      v10,
      &v18);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*a1);
    v13 = *a1;
    v14 = *a1 == (CDrawListCacheSet::ContentEntry *)(a1 + 3);
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *a1;
    result = 3 * v8;
    a1[1] = (CDrawListCacheSet::ContentEntry *)((char *)*a1 + 24 * v7);
    a1[2] = (CDrawListCacheSet::ContentEntry *)((char *)v15 + 24 * v8);
  }
  return result;
}
