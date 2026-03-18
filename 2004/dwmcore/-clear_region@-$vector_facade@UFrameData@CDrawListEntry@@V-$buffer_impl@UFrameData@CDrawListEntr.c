/*
 * XREFs of ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001BCA4
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180053ED0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?OnRemovedFromDrawList@CDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800BC030 (-OnRemovedFromDrawList@CDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z.c)
 *     ?clear@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A3CB0 (-clear@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A3E40 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001C01C (--$move@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iterator@PEAUFrame.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // sf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v4 = a2;
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = a2 + a3;
  v10 = v6 / 76;
  if ( v9 > v6 / 76 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_5:
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v10;
    v13 = v4 < 0;
    if ( v4 )
    {
      if ( !v5 )
      {
LABEL_12:
        _o__invalid_parameter_noinfo_noreturn(v9, v10);
        __debugbreak();
LABEL_13:
        v15 = v4;
        v16 = v14;
        v17 = v4;
        std::move<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
          &v14,
          v5 + 76 * v9,
          v11,
          &v16);
        v3 = a1[1];
        goto LABEL_3;
      }
      v13 = v4 < 0;
    }
    if ( (!v13 || !v4) && (v4 <= 0 || v10 >= v4) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v11 = v5 + 76 * v10;
  if ( v9 != v10 )
    goto LABEL_5;
LABEL_3:
  result = 76 * a3;
  a1[1] = v3 - 76 * a3;
  return result;
}
