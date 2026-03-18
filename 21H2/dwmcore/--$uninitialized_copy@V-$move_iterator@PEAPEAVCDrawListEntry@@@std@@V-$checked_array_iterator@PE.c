/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800DF734
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18008750C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v7; // r10
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 result; // rax
  __int64 v11; // xmm1_8
  bool v12; // cf

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 3;
  if ( v7 < 0 )
  {
    v12 = a4[2] < (unsigned __int64)-v7;
  }
  else
  {
    if ( v7 <= 0 )
      goto LABEL_3;
    v12 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  if ( v12 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x18016ED39LL);
  }
LABEL_3:
  v8 = *a4;
  v9 = (void *)(*a4 + 8 * a4[2]);
  memmove_0(v9, a2, a3 - (_QWORD)a2);
  result = a1;
  a4[2] = ((__int64)v9 + v5 - v8) >> 3;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
