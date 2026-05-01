/*
 * XREFs of sub_180016298 @ 0x180016298
 * Callers:
 *     sub_1800161FC @ 0x1800161FC (sub_1800161FC.c)
 *     sub_180016384 @ 0x180016384 (sub_180016384.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016298(__int64 *a1, __int128 *a2, void **a3, _DWORD *a4)
{
  __int64 v8; // rax
  int v9; // ebx
  void *v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // r8
  __int64 v14; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !*a3 )
    *a4 = 0;
  v8 = *a1;
  v16 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v8 + 24))(a1, &v16);
  if ( v9 == -2147024662 )
  {
    v10 = operator new((unsigned int)*a4, (const struct std::nothrow_t *)&unk_18005AF88);
    v12 = *a3;
    v13 = v10;
    *a3 = v10;
    if ( v12 )
    {
      j_j__o_free(v12, v11);
      v13 = *a3;
    }
    if ( !v13 )
    {
      v9 = -2147024882;
LABEL_10:
      sub_180003268(retaddr, 96, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v9);
      return (unsigned int)v9;
    }
    v14 = *a1;
    v16 = *a2;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, void *, _DWORD *))(v14 + 24))(a1, &v16, v13, a4);
  }
  if ( v9 < 0 )
    goto LABEL_10;
  return (unsigned int)v9;
}
