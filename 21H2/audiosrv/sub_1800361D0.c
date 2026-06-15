/*
 * XREFs of sub_1800361D0 @ 0x1800361D0
 * Callers:
 *     sub_18000455C @ 0x18000455C (sub_18000455C.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_180047200 @ 0x180047200 (sub_180047200.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800361D0(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  char result; // al

  v1 = *a1;
  if ( *a1 )
  {
    v3 = 0LL;
    v4 = a1[1];
    if ( v4 )
    {
      do
      {
        v5 = *(void (__fastcall ****)(_QWORD, __int64))(v1 + 8 * v3);
        if ( v5 )
          (**v5)(v5, 1LL);
        *(_QWORD *)(v1 + 8 * v3++) = 0LL;
      }
      while ( v3 < v4 );
      v1 = *a1;
    }
    _o_free(v1);
    *a1 = 0LL;
  }
  result = 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
