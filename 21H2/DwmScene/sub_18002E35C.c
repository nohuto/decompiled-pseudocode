/*
 * XREFs of sub_18002E35C @ 0x18002E35C
 * Callers:
 *     sub_180010120 @ 0x180010120 (sub_180010120.c)
 *     sub_18002E498 @ 0x18002E498 (sub_18002E498.c)
 *     sub_18002E540 @ 0x18002E540 (sub_18002E540.c)
 *     sub_18002E5A0 @ 0x18002E5A0 (sub_18002E5A0.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     sub_18002C9F8 @ 0x18002C9F8 (sub_18002C9F8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002E35C(_QWORD *a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rcx

  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  v2 = a1 + 210;
  v3 = a1[210];
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_18002C9B0((__int64)v2, (__int64)v2, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v2;
  }
  j_j__o_free(v3);
  v6 = a1[208];
  v7 = *(__int64 **)(v6 + 8);
  if ( !*((_BYTE *)v7 + 25) )
  {
    do
    {
      sub_18002C9B0((__int64)(a1 + 208), (__int64)(a1 + 208), (__int64 *)v7[2]);
      v8 = v7;
      v7 = (__int64 *)*v7;
      j_j__o_free(v8);
    }
    while ( !*((_BYTE *)v7 + 25) );
    v6 = a1[208];
  }
  j_j__o_free(v6);
  v9 = a1[206];
  v10 = *(__int64 **)(v9 + 8);
  if ( !*((_BYTE *)v10 + 25) )
  {
    do
    {
      sub_18002C9F8((__int64)(a1 + 206), (__int64)(a1 + 206), (__int64 *)v10[2]);
      v11 = v10;
      v10 = (__int64 *)*v10;
      j_j__o_free(v11);
    }
    while ( !*((_BYTE *)v10 + 25) );
    v9 = a1[206];
  }
  j_j__o_free(v9);
  v12 = a1[63];
  if ( v12 )
  {
    a1[63] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return sub_18006B074(a1);
}
