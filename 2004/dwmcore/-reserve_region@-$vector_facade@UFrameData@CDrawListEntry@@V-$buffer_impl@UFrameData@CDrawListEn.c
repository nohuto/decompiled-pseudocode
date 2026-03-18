/*
 * XREFs of ?reserve_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUFrameData@CDrawListEntry@@_K0@Z @ 0x1801A3ED8
 * Callers:
 *     ??$emplace@W4Enum@BlendMode@@MVCMILMatrix@@@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@1@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@1@W4Enum@BlendMode@@MVCMILMatrix@@@Z @ 0x1801A2B84 (--$emplace@W4Enum@BlendMode@@MVCMILMatrix@@@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x1801A2CA0 (--$move_backward@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iterator@.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UFrameData@CDrawListEntry@@@detail@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@UFrameData@CDrawListEntry@@@0@0V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@Z @ 0x1801A2D5C (--$move_backward_uninitialized@V-$basic_iterator@UFrameData@CDrawListEntry@@@detail@@V-$checked_.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A3CF0 (-ensure_extra_capacity@-$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // sf
  __int64 v14; // xmm1_8
  __int64 v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF

  v22 = a3;
  detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v6 = *a1;
  v18 = 0LL;
  v7 = a1[1];
  *((_QWORD *)&v17 + 1) = 1LL;
  v8 = (unsigned __int128)((v7 - v6) * (__int128)0x6BCA1AF286BCA1BLL) >> 64;
  v18 = 0LL;
  v9 = (v7 - v6) / 76;
  v10 = v6 + 76 * v9;
  v11 = v9 - a2;
  *(_QWORD *)&v17 = v10;
  if ( !v10 )
    goto LABEL_13;
  v22 = v7;
  v18 = 1LL;
  v12 = (v7 - v6) / 76 - a2;
  v19 = v17;
  if ( v11 > 1 )
    v12 = 1LL;
  v20 = 1LL;
  v21 = v7 - 76 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry::FrameData>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
    (unsigned __int64)&v21,
    &v22,
    (__int64 *)&v19);
  if ( v11 <= 1 )
  {
    v15 = 76 * a2;
    goto LABEL_12;
  }
  *(_QWORD *)&v17 = v6;
  *((_QWORD *)&v17 + 1) = v9;
  v13 = v9 < 0;
  if ( v9 )
  {
    if ( !v6 )
      goto LABEL_13;
    v13 = v9 < 0;
  }
  if ( v13 && v9 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v5, v8);
    __debugbreak();
    JUMPOUT(0x1801A4027LL);
  }
  v18 = v9;
  v14 = v9;
  v15 = 76 * a2;
  v19 = v17;
  v20 = v14;
  std::move_backward<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
    (__int64)&v17,
    (const void *)(76 * a2 + v6),
    v10 - 76,
    &v19);
LABEL_12:
  a1[1] += 76LL;
  return v15 + v6;
}
