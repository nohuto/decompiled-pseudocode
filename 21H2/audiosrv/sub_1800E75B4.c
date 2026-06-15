/*
 * XREFs of sub_1800E75B4 @ 0x1800E75B4
 * Callers:
 *     sub_180044AA4 @ 0x180044AA4 (sub_180044AA4.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800E7160 @ 0x1800E7160 (sub_1800E7160.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E75B4(__int64 **a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  result = sub_1800CD4DC(a2, &v7);
  if ( (int)result >= 0 && v7 )
  {
    v8 = 0LL;
    if ( (int)sub_1800E7160(&v7, &v8) >= 0 )
    {
      v4 = *a1;
      v5 = (__int64 *)v4[1];
      if ( (__int64 *)v4[2] == v5 )
      {
        sub_1800CD5C4(v4, (__int64)v5, &v8);
      }
      else
      {
        *v5 = v8;
        sub_180047458(v5);
        v4[1] += 8LL;
      }
    }
    result = sub_1800461B8(&v8);
  }
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
