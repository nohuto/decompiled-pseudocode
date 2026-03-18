/*
 * XREFs of ?clear_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800812C0
 * Callers:
 *     ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180081190 (-clear@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGE.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18019215C (--$move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_array_iterator.c)
 */

unsigned __int64 __fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v6; // r9
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v4 = a1[1];
  v6 = *a1;
  result = 0x4EC4EC4EC4EC4EC5LL * ((v4 - *a1) >> 3);
  if ( a3 > result )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = 104 * a3;
  v8 = v6 + 8 * ((a1[1] - *a1) >> 3);
  if ( a3 != result )
  {
LABEL_5:
    v10 = 0LL;
    *(_QWORD *)&v9 = v6;
    *((_QWORD *)&v9 + 1) = result;
    v12 = 0LL;
    v11 = v9;
    result = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>)(
               &v9,
               v3 + v6,
               v8,
               &v11);
    v4 = a1[1];
  }
  a1[1] = v4 - v3;
  return result;
}
