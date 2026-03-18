/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A1ED0
 * Callers:
 *     ?reserve_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUFrameData@CDrawListEntry@@_K0@Z @ 0x1801A20B8 (-reserve_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEn.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001BD38 (--$uninitialized_copy@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18006C9A4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  LPVOID v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbx
  void *v15; // rcx
  bool v16; // zf
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-18h]

  v2 = a1[2];
  v4 = a1[1];
  v5 = 0x6BCA1AF286BCA1BLL;
  result = (unsigned __int64)((unsigned __int128)((v2 - v4) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  if ( (v2 - v4) / 76 < a2 )
  {
    v7 = v4 - *a1;
    v8 = v7 / 76;
    v9 = v7 / 76 + a2;
    if ( v8 + a2 < v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v10 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            ((unsigned __int64)((unsigned __int128)((v2 - *a1) * (__int128)v5) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((v2 - *a1) * (__int128)v5) >> 64) >> 1),
            v9);
    v11 = operator new(saturated_mul(v10, 0x4CuLL));
    v12 = a1[1];
    v13 = *a1;
    *(_QWORD *)&v17 = v11;
    *((_QWORD *)&v17 + 1) = v8;
    v14 = (__int64)v11;
    v18 = 0LL;
    v19 = v17;
    v20 = 0LL;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
      (__int64)&v17,
      v13,
      v12,
      &v19);
    v15 = (void *)*a1;
    v16 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v14;
    if ( v16 )
      v15 = 0LL;
    operator delete(v15);
    a1[1] = *a1 + 76 * v8;
    result = *a1 + 76 * v10;
    a1[2] = result;
  }
  return result;
}
