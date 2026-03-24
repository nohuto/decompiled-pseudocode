/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18026C118
 * Callers:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18026C498 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 * Callees:
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // r8
  const void *v5; // r10
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a3 - (_QWORD)a2;
  v5 = a2;
  v8 = v4 / -24;
  if ( v4 / -24 < 0 && a4[2] < (unsigned __int64)(v4 / 24) || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8);
    __debugbreak();
  }
  v9 = *a4;
  v10 = (__int64)memmove_0((void *)(*a4 + 24 * a4[2] - v4), v5, v4) - v9;
  result = a1;
  a4[2] = v10 / 24;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
