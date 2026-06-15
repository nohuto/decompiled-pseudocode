/*
 * XREFs of sub_1800D0290 @ 0x1800D0290
 * Callers:
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800E5F48 @ 0x1800E5F48 (sub_1800E5F48.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_1800D0290(__int64 a1, __int64 **a2, __int64 *a3, char *a4)
{
  char *v4; // rbp
  char *v5; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *i; // rsi
  __int64 v13; // rcx
  __int64 **result; // rax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(char **)(a1 + 8);
  v5 = a4;
  v9 = a3;
  if ( a4 != v4 )
  {
    do
    {
      v10 = 0LL;
      if ( &v15 != v5 )
      {
        v10 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      v11 = *v9;
      *v9 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v9;
      v5 += 8;
    }
    while ( v5 != v4 );
    v4 = *(char **)(a1 + 8);
  }
  for ( i = v9; i != (__int64 *)v4; ++i )
  {
    v13 = *i;
    if ( *i )
    {
      *i = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
