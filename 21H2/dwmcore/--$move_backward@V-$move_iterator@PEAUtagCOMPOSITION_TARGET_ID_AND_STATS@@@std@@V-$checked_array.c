/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18019A2D8
 * Callers:
 *     ?reserve_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@_K0@Z @ 0x1800811C4 (-reserve_region@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSIT.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v6; // r9
  signed __int64 v7; // r8
  bool v8; // cf
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v6 = a3 - (_QWORD)a2;
  v7 = 0xB13B13B13B13B13BuLL * ((a3 - (__int64)a2) >> 3);
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)-v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * (((__int64)memmove_0((void *)(*a4 + 104LL * a4[2] - v6), a2, v6) - *a4) >> 3);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
