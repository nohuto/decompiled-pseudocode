/*
 * XREFs of sub_180077CDC @ 0x180077CDC
 * Callers:
 *     sub_180078460 @ 0x180078460 (sub_180078460.c)
 *     sub_1800BDB04 @ 0x1800BDB04 (sub_1800BDB04.c)
 *     sub_18012D1F4 @ 0x18012D1F4 (sub_18012D1F4.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007284C @ 0x18007284C (sub_18007284C.c)
 *     sub_180072924 @ 0x180072924 (sub_180072924.c)
 *     sub_180072AA4 @ 0x180072AA4 (sub_180072AA4.c)
 *     sub_1800781A0 @ 0x1800781A0 (sub_1800781A0.c)
 *     sub_18007EFE8 @ 0x18007EFE8 (sub_18007EFE8.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 *     sub_1800E3044 @ 0x1800E3044 (sub_1800E3044.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x18012537A (_Cnd_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_180077CDC(__int64 a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  volatile signed __int32 *v14; // rbx

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_18007EFE8(a1);
  sub_1800781A0(a1 + 1424);
  unknown_libname_103((__int64 *)(a1 + 1392));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  if ( *(_DWORD *)(a1 + 1192) )
    _o_terminate();
  sub_1800671C0((__int64 *)(a1 + 1136));
  if ( *(_BYTE *)(a1 + 1120) )
    sub_180067304(*(_QWORD *)(a1 + 1112));
  sub_18011C1A0(a1 + 1104);
  sub_1800258BC((__int64 *)(a1 + 1080), a1 + 1080);
  v2 = *(_QWORD *)(a1 + 984);
  if ( v2 )
  {
    sub_180072924((__int64 *)(v2 + 16), v2 + 16);
    j__o_free(v2);
  }
  v3 = *(volatile signed __int32 **)(a1 + 976);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  sub_1800671C0((__int64 *)(a1 + 888));
  sub_1800671C0((__int64 *)(a1 + 864));
  sub_1800671C0((__int64 *)(a1 + 840));
  if ( *(_BYTE *)(a1 + 824) )
    sub_180067304(*(_QWORD *)(a1 + 816));
  sub_18011C1A0(a1 + 808);
  sub_180072AA4(a1 + 728, a1 + 728, *(__int64 **)(*(_QWORD *)(a1 + 728) + 8LL));
  j_j__o_free(*(_QWORD *)(a1 + 728));
  sub_180012A18((__int64 *)(a1 + 704));
  sub_180019460((_QWORD *)(a1 + 568));
  v4 = *(volatile signed __int32 **)(a1 + 520);
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 504);
  if ( v5 )
  {
    if ( !_InterlockedDecrement(v5 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 488);
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 472);
  if ( v7 )
  {
    if ( !_InterlockedDecrement(v7 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_1800E3044(a1 + 368);
  sub_1800671C0((__int64 *)(a1 + 344));
  if ( *(_BYTE *)(a1 + 328) )
    sub_180067304(*(_QWORD *)(a1 + 320));
  sub_18011C1A0(a1 + 312);
  sub_1800671C0((__int64 *)(a1 + 288));
  v8 = *(_QWORD *)(a1 + 256);
  if ( v8 )
  {
    v9 = (*(_QWORD *)(a1 + 272) - v8) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = v9 + 39;
      v11 = *(_QWORD *)(v8 - 8);
      v12 = v8 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        return sub_1800780F8();
      }
      v8 = v11;
    }
    j_j__o_free(v8);
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  sub_18007284C((__int64 *)(a1 + 184), a1 + 184);
  sub_180081170(a1 + 168);
  sub_1800671C0((__int64 *)(a1 + 144));
  if ( *(_BYTE *)(a1 + 128) )
    sub_180067304(*(_QWORD *)(a1 + 120));
  sub_18011C1A0(a1 + 112);
  sub_180012A18((__int64 *)(a1 + 88));
  v13 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 80);
  if ( v13 )
    (**v13)(v13, 1LL);
  v14 = *(volatile signed __int32 **)(a1 + 72);
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_1800671C0((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180067304(*(_QWORD *)(a1 + 16));
  return sub_18011C1A0(a1 + 8);
}
