/*
 * XREFs of sub_180136310 @ 0x180136310
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18005FD7C @ 0x18005FD7C (sub_18005FD7C.c)
 *     sub_180072A70 @ 0x180072A70 (sub_180072A70.c)
 *     sub_180072E20 @ 0x180072E20 (sub_180072E20.c)
 *     sub_1800D4B10 @ 0x1800D4B10 (sub_1800D4B10.c)
 *     unknown_libname_286 @ 0x1800D4B7C (unknown_libname_286.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 */

__int64 __fastcall sub_180136310(__int64 a1, char *a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+28h] BYREF

  if ( a3 == 1 && *(_BYTE *)(a1 + 201) )
  {
    sub_18005FD7C(&pv, a2, 0xFFFFFFFFFFFFFFFFuLL);
    *(_OWORD *)v8 = 0LL;
    if ( pv )
    {
      v4 = sub_1800D4B10(&v9, &pv);
      sub_1800D50A8(v8, v4);
      if ( v10 )
        sub_180052600(v10);
      if ( pv )
        CoTaskMemFree(pv);
    }
    sub_180048790(&pv, a1 - 8);
    sub_180048790(&v9, (__int64)pv);
    unknown_libname_286(&v10, v8);
    sub_180072A70(v6, v5, *(_DWORD *)(a1 + 204), &v9);
    sub_180072E20(&v9);
    sub_18000F708((__int64 *)&pv);
    if ( v8[1] )
      sub_180052600(v8[1]);
  }
  return 0LL;
}
