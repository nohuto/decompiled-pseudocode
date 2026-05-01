/*
 * XREFs of sub_180038BF8 @ 0x180038BF8
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_180030490 @ 0x180030490 (sub_180030490.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038BF8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  void *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 *j; // rbx
  int v10; // eax
  __int64 **v11; // rax
  __int64 *i; // rax
  __int64 *v13; // rcx
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = 0LL;
  if ( !v6 || (v7 = sub_1800303A4((__int64)v6)) == 0 )
    v5 = -2147024882;
  if ( v5 >= 0 )
  {
    v4 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(__int64 **)(a1 + 80);
  j = (__int64 *)*v8;
  while ( j != v8 )
  {
    v15 = *((_OWORD *)j + 2);
    v10 = sub_180030490(v4, 0, &v15, 1);
    if ( v10 < 0 )
      sub_180012300(
        retaddr,
        193,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        v10);
    v11 = (__int64 **)j[2];
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v13 = *v11;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v13 + 25); v13 = (__int64 *)*v13 )
        j = v13;
    }
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
