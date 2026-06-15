/*
 * XREFs of sub_1800D18C8 @ 0x1800D18C8
 * Callers:
 *     sub_1800D2E00 @ 0x1800D2E00 (sub_1800D2E00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_1800D18C8(__int64 **a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      v9 = *j;
      if ( *j != *a4 )
      {
        *j = 0LL;
        v10 = *i;
        *i = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        ++i;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
