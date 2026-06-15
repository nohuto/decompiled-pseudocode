/*
 * XREFs of sub_180064BF0 @ 0x180064BF0
 * Callers:
 *     sub_180064B70 @ 0x180064B70 (sub_180064B70.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_180064BF0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // r8
  int v6; // edx
  _QWORD *i; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  _QWORD *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = sub_180064CCC(a1 + 3, *((unsigned int *)a1 + 10), 24LL);
    if ( !v5 )
      sub_1800B8610(2147942414LL);
    v6 = *((_DWORD *)a1 + 10);
    for ( i = (_QWORD *)(v5 + 8 * ((unsigned int)(v6 - 1) + 2LL * (unsigned int)(v6 - 1) + 1)); --v6 >= 0; i -= 3 )
    {
      *i = a1[4];
      a1[4] = (__int64)i;
    }
  }
  v8 = (_QWORD *)a1[4];
  v9 = *v8;
  v8[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  a1[4] = v9;
  v8[1] = 0LL;
  *v8 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v8;
  else
    a1[1] = (__int64)v8;
  result = v8;
  *a1 = (__int64)v8;
  return result;
}
