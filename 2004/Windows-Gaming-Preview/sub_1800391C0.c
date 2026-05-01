/*
 * XREFs of sub_1800391C0 @ 0x1800391C0
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800295F0 @ 0x1800295F0 (sub_1800295F0.c)
 *     sub_18002C534 @ 0x18002C534 (sub_18002C534.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016688 @ 0x180016688 (sub_180016688.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800391C0(__int64 a1, unsigned int a2, HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *j; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  int v11; // edx
  __int64 **v13; // rax
  __int64 *i; // rax
  __int64 *v15; // rcx
  __int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 80);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = *(__int64 **)(a1 + 64);
    v16[0] = *((_OWORD *)j + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, const WCHAR *, int))(*v9 + 72))(
              v9,
              v16,
              a2,
              &word_180051520,
              2);
      if ( v10 < 0 )
      {
        v11 = 301;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = sub_180016688(v9, v16, a2, a3);
      if ( v10 < 0 )
      {
        v11 = 294;
LABEL_6:
        sub_180003268(
          retaddr,
          v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          v10);
        return (unsigned int)v10;
      }
    }
    v13 = (__int64 **)j[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v15 = *v13;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
        j = v15;
    }
  }
  return 0LL;
}
