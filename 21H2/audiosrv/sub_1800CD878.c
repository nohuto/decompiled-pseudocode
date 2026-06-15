/*
 * XREFs of sub_1800CD878 @ 0x1800CD878
 * Callers:
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800E5F48 @ 0x1800E5F48 (sub_1800E5F48.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CDFEC @ 0x1800CDFEC (sub_1800CDFEC.c)
 */

char **__fastcall sub_1800CD878(char **a1, char *a2, char *a3)
{
  char *v4; // rdi
  char **i; // r14
  char *j; // rsi
  __int64 v7; // rax
  char **result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  for ( i = a1; v4 != a3; v4 += 8 )
  {
    if ( (unsigned __int8)sub_1800CDFEC(a1, v4) )
      break;
  }
  if ( v4 != a3 )
  {
    for ( j = v4 + 8; j != a3; j += 8 )
    {
      if ( !(unsigned __int8)sub_1800CDFEC(a1, j) )
      {
        v7 = 0LL;
        if ( &v9 != j )
        {
          v7 = *(_QWORD *)j;
          *(_QWORD *)j = 0LL;
        }
        a1 = *(char ***)v4;
        *(_QWORD *)v4 = v7;
        if ( a1 )
          (*((void (__fastcall **)(char **))*a1 + 2))(a1);
        v4 += 8;
      }
    }
  }
  result = i;
  *i = v4;
  return result;
}
