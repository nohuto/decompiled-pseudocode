/*
 * XREFs of sub_180003420 @ 0x180003420
 * Callers:
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_1800678A8 @ 0x1800678A8 (sub_1800678A8.c)
 * Callees:
 *     sub_180002C8C @ 0x180002C8C (sub_180002C8C.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003420(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = a2;
  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147024809;
  v10 = 0LL;
  v5 = a1 + 88;
  sub_180002C8C(a1 + 88, a2, &v9, &v10, v8, &v11);
  if ( v10 == v5 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = *(_QWORD *)(v10 + 32);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(v10 + 32));
      *a3 = v6;
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return v3;
}
