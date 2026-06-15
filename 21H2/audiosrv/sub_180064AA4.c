/*
 * XREFs of sub_180064AA4 @ 0x180064AA4
 * Callers:
 *     sub_180064A70 @ 0x180064A70 (sub_180064A70.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_180064AA4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  _QWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = sub_180064CCC(a1 + 24, *(unsigned int *)(a1 + 40), 24LL);
    if ( !v7 )
      sub_1800B8610(2147942414LL);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)(v7 + 8 * ((unsigned int)(v8 - 1) + 2LL * (unsigned int)(v8 - 1) + 1)); --v8 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *v10;
  v10[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  result = v10;
  *(_QWORD *)(a1 + 32) = v11;
  v10[1] = 0LL;
  *v10 = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
