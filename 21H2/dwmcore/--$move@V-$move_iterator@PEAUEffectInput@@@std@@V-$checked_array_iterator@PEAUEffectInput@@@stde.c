/*
 * XREFs of ??$move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B31D0
 * Callers:
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800588EC (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v4; // rbx
  __int64 v8; // rdx
  bool v9; // cf
  __int64 *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = 0x4EC4EC4EC4EC4EC5LL * (a3 - a2);
  if ( v8 >= 0 )
  {
    if ( v8 <= 0 )
      goto LABEL_7;
    v9 = a4[1] - a4[2] < (unsigned __int64)v8;
  }
  else
  {
    v9 = a4[2] < (unsigned __int64)-v8;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v10 = (__int64 *)(*a4 + 104LL * a4[2]);
  while ( v4 != a3 )
  {
    EffectInput::operator=(v10, v4);
    v10 += 13;
    v4 += 13;
  }
  result = a1;
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
