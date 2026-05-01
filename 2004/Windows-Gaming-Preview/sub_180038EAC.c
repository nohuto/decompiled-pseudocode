/*
 * XREFs of sub_180038EAC @ 0x180038EAC
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016688 @ 0x180016688 (sub_180016688.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038EAC(__int64 a1, HSTRING *a2, HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *j; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  int v11; // edx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *v16; // rcx
  __int128 v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 80);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = *(__int64 **)(a1 + 64);
    v17[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v9 + 72))(
              v9,
              v17,
              26LL,
              &word_180051520,
              2);
      if ( v10 < 0 )
      {
        v11 = 240;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = sub_180016688(v9, v17, 0x1Au, a3);
      if ( v10 < 0 )
      {
        v11 = 233;
LABEL_6:
        sub_180003268(
          retaddr,
          v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          v10);
        return (unsigned int)v10;
      }
    }
    v8 = *a2 == 0LL;
    v13 = *(__int64 **)(a1 + 64);
    v17[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v13 + 72))(
              v13,
              v17,
              25LL,
              &word_180051520,
              2);
      if ( v10 < 0 )
      {
        v11 = 257;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = sub_180016688(v13, v17, 0x19u, a2);
      if ( v10 < 0 )
      {
        v11 = 249;
        goto LABEL_6;
      }
    }
    v14 = (__int64 **)j[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v16 = *v14;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
        j = v16;
    }
  }
  return 0LL;
}
