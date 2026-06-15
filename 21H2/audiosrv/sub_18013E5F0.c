/*
 * XREFs of sub_18013E5F0 @ 0x18013E5F0
 * Callers:
 *     sub_18013E6A0 @ 0x18013E6A0 (sub_18013E6A0.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D350 @ 0x18013D350 (sub_18013D350.c)
 */

__int64 __fastcall sub_18013E5F0(__int64 a1, _QWORD **a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = 0LL;
  v11 = 0LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    v7 = *a2;
    if ( *a2 || (v7 = *(_QWORD **)(a1 + 24)) != 0LL )
    {
      v8 = v7[2];
      v9 = (_QWORD *)*v7;
      if ( v8 )
      {
        sub_1800579A4(&v11, v8);
        v5 = v11;
      }
      sub_18013D350(&v11, a3);
      *a2 = v9;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
