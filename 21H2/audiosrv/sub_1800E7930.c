/*
 * XREFs of sub_1800E7930 @ 0x1800E7930
 * Callers:
 *     sub_1800E8690 @ 0x1800E8690 (sub_1800E8690.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800E7930(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0LL;
  result = sub_1800CD4DC(a2, &v11);
  if ( (int)result >= 0 && v11 )
  {
    v10 = 0LL;
    v9[0] = 0LL;
    if ( (int)sub_1800CD548(&v11, &v10) >= 0 )
    {
      v4 = v10;
      sub_1800461B8(v9);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 192LL))(v4, v9) >= 0 && v9[0] == **(_QWORD **)a1 )
      {
        v5 = *(__int64 ***)(a1 + 8);
        v6 = *v5;
        v7 = (__int64 *)(*v5)[1];
        if ( (__int64 *)(*v5)[2] == v7 )
        {
          sub_1800CD5C4(*v5, (__int64)v7, &v10);
        }
        else
        {
          *v7 = v10;
          sub_180047458(v7);
          v6[1] += 8LL;
        }
      }
    }
    sub_1800461B8(v9);
    result = sub_1800461B8(&v10);
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
