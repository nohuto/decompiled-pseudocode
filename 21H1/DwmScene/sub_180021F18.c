/*
 * XREFs of sub_180021F18 @ 0x180021F18
 * Callers:
 *     sub_180023130 @ 0x180023130 (sub_180023130.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021F18(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 *v13; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  v2 = sub_18006AB3C(a1);
  sub_1801163DC(&unk_180208020, 3LL, "RenderDeviceD3D11 destructor -- RenderDeviceID=%d", v2);
  sub_1801163DC(&unk_180208020, 3LL, "-------------------------------------------------");
  v3 = *(_QWORD *)(a1 + 4640);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 4640) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  unknown_libname_101((__int64 *)(a1 + 4600));
  v4 = *(_QWORD *)(a1 + 4280);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 4280) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 4272);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 4272) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(a1 + 4264);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 4264) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 4256);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 4256) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 4168));
  v8 = *(_QWORD *)(a1 + 4152);
  v9 = *(__int64 **)(v8 + 8);
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      sub_180020058(a1 + 4152, a1 + 4152, (__int64 *)v9[2]);
      v10 = v9;
      v9 = (__int64 *)*v9;
      j_j__o_free(v10);
    }
    while ( !*((_BYTE *)v9 + 25) );
    v8 = *(_QWORD *)(a1 + 4152);
  }
  j_j__o_free(v8);
  v11 = *(_QWORD *)(a1 + 4136);
  v12 = *(__int64 **)(v11 + 8);
  if ( !*((_BYTE *)v12 + 25) )
  {
    do
    {
      sub_180020058(a1 + 4136, a1 + 4136, (__int64 *)v12[2]);
      v13 = v12;
      v12 = (__int64 *)*v12;
      j_j__o_free(v13);
    }
    while ( !*((_BYTE *)v12 + 25) );
    v11 = *(_QWORD *)(a1 + 4136);
  }
  j_j__o_free(v11);
  return sub_180069F90(a1);
}
