/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800C561C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18004BD30 (-ensure_extra_capacity@-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x18004D070 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // r10
  bool v8; // cc
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 3;
  v8 = v7 <= 0;
  if ( v7 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v7 )
      goto LABEL_8;
    v8 = v7 <= 0;
  }
  if ( !v8 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    __debugbreak();
    JUMPOUT(0x180148CB7LL);
  }
  v9 = *a4;
  v10 = (void *)(*a4 + 8 * a4[2]);
  memmove_0(v10, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v10 + v5 - v9) >> 3;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
