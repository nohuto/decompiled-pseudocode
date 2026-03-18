/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UFrameData@CDrawListEntry@@@detail@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@UFrameData@CDrawListEntry@@@0@0V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@Z @ 0x1801A2D5C
 * Callers:
 *     ?reserve_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUFrameData@CDrawListEntry@@_K0@Z @ 0x1801A3ED8 (-reserve_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry::FrameData>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = result - 76;
      *a2 = v6;
      if ( !v5 || (a1 = a3[2]) == 0 || (--a1, a3[2] = a1, a1 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2);
        __debugbreak();
        JUMPOUT(0x1801A2DE9LL);
      }
      a1 *= 76LL;
      *(_OWORD *)(a1 + v5) = *(_OWORD *)v6;
      *(_OWORD *)(a1 + v5 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(a1 + v5 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(a1 + v5 + 48) = *(_OWORD *)(v6 + 48);
      *(_QWORD *)(a1 + v5 + 64) = *(_QWORD *)(v6 + 64);
      *(_DWORD *)(a1 + v5 + 72) = *(_DWORD *)(v6 + 72);
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
