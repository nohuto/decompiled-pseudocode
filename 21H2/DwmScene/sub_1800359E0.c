/*
 * XREFs of sub_1800359E0 @ 0x1800359E0
 * Callers:
 *     sub_180036B18 @ 0x180036B18 (sub_180036B18.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 * Callees:
 *     sub_180035404 @ 0x180035404 (sub_180035404.c)
 *     sub_180035708 @ 0x180035708 (sub_180035708.c)
 *     sub_1800A063C @ 0x1800A063C (sub_1800A063C.c)
 *     sub_1800A06C8 @ 0x1800A06C8 (sub_1800A06C8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800359E0(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int16 v4; // ax
  __int64 **v5; // rax
  __int64 v6; // rsi
  int v7; // ebx
  char v8; // al
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1[20] )
  {
    v2 = a1[21];
    if ( v2 )
    {
      v3 = sub_1800A06C8();
      v4 = sub_1800A063C(a1);
      v5 = sub_180035404((__int64)a1, &v12, v2, v4, v3);
    }
    else
    {
      v6 = a1[22];
      if ( !v6 )
        return;
      v7 = sub_1800A06C8();
      v8 = sub_1800A063C(a1);
      v5 = sub_180035708((__int64)a1, &v12, v6, v8, v7);
    }
    v9 = 0LL;
    if ( &v13 != (char *)v5 )
    {
      v9 = *v5;
      *v5 = 0LL;
    }
    v10 = a1[20];
    a1[20] = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    }
  }
}
