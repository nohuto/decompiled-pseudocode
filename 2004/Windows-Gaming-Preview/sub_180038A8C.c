/*
 * XREFs of sub_180038A8C @ 0x180038A8C
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800149E4 @ 0x1800149E4 (sub_1800149E4.c)
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180038A8C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  void *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  int v10; // eax
  HSTRING v11; // rcx
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = 0LL;
  if ( !v6 || (v7 = sub_1800149E4((__int64)v6)) == 0 )
    v5 = -2147024882;
  if ( v5 >= 0 )
  {
    v4 = v7;
    v19 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(__int64 **)(a1 + 80);
  v9 = (__int64 *)*v8;
  while ( v9 != v8 )
  {
    string = 0LL;
    v16 = *((_OWORD *)v9 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = sub_180016730(*(_QWORD *)(a1 + 64), &v16, 23LL, &string);
    if ( v10 < 0 )
    {
      sub_180012300(
        retaddr,
        172,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        v10);
LABEL_13:
      v11 = string;
      goto LABEL_14;
    }
    v11 = string;
    if ( string )
    {
      sub_180014AD0(v4, 0, string, 1);
      goto LABEL_13;
    }
LABEL_14:
    WindowsDeleteString(v11);
    v12 = (__int64 **)v9[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v9 = i;
      v9 = i;
    }
    else
    {
      v9 = (__int64 *)v9[2];
      for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v9 = j;
    }
  }
  *a2 = v4;
  return 0LL;
}
