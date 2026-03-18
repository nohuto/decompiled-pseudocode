/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1800C8A44
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C8940 (-ensure_extra_capacity@-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // r10
  bool v8; // cf
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 1;
  if ( v7 < 0 )
  {
    v8 = a4[2] < (unsigned __int64)-v7;
  }
  else
  {
    if ( v7 <= 0 )
      goto LABEL_5;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x1801672E3LL);
  }
LABEL_5:
  v9 = *a4;
  v10 = (void *)(*a4 + 2 * a4[2]);
  memmove_0(v10, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v10 + v5 - v9) >> 1;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
