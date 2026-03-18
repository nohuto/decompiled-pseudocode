/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180039C84
 * Callers:
 *     ?erase@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@2@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@2@@Z @ 0x18003734C (-erase@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18007E664 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800BF150 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 */

unsigned int __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rdx
  unsigned int result; // eax
  __int64 v12; // rdi
  __int64 i; // rbx
  CDrawListEntry *v14; // rcx
  bool v15; // sf
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v5 = a2;
  v6 = a1[1] - *a1;
  v8 = a2 + a3;
  v10 = v6 / 24;
  if ( v8 > v6 / 24 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_19;
  }
  result = 3 * v10;
  v3 = v4 + 24 * v10;
  if ( v8 != v6 / 24 )
  {
    *(_QWORD *)&v16 = v4;
    *((_QWORD *)&v16 + 1) = v6 / 24;
    v15 = v5 < 0;
    if ( v5 )
    {
      if ( !v4 )
        goto LABEL_16;
      v15 = v5 < 0;
    }
    if ( !v15 )
    {
LABEL_13:
      if ( v5 <= 0 || v10 >= v5 )
      {
        v17 = v5;
        v18 = v16;
        v19 = v5;
        result = std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
                   &v16,
                   v4 + 24 * v8,
                   v3,
                   &v18);
        goto LABEL_3;
      }
LABEL_16:
      _o__invalid_parameter_noinfo_noreturn(v8, v10);
      __debugbreak();
      JUMPOUT(0x180039D8FLL);
    }
LABEL_19:
    if ( v5 )
      goto LABEL_16;
    goto LABEL_13;
  }
LABEL_3:
  v12 = 24 * a3;
  for ( i = v3 - 24 * a3; i != v3; i += 24LL )
  {
    v14 = *(CDrawListEntry **)(i + 16);
    if ( v14 )
      result = CDrawListEntry::Release(v14);
  }
  a1[1] -= v12;
  return result;
}
