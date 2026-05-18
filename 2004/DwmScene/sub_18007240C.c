/*
 * XREFs of sub_18007240C @ 0x18007240C
 * Callers:
 *     sub_180072B90 @ 0x180072B90 (sub_180072B90.c)
 *     sub_1800B8234 @ 0x1800B8234 (sub_1800B8234.c)
 *     sub_1801278DC @ 0x1801278DC (sub_1801278DC.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180018CC0 @ 0x180018CC0 (sub_180018CC0.c)
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006CF7C @ 0x18006CF7C (sub_18006CF7C.c)
 *     sub_18006D054 @ 0x18006D054 (sub_18006D054.c)
 *     sub_18006D1D4 @ 0x18006D1D4 (sub_18006D1D4.c)
 *     sub_1800728D0 @ 0x1800728D0 (sub_1800728D0.c)
 *     sub_180079718 @ 0x180079718 (sub_180079718.c)
 *     sub_18007B8A0 @ 0x18007B8A0 (sub_18007B8A0.c)
 *     sub_1800DD774 @ 0x1800DD774 (sub_1800DD774.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x18011FAAA (_Cnd_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_18007240C(__int64 a1)
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
  sub_180079718(a1);
  sub_1800728D0(a1 + 1424);
  unknown_libname_101((__int64 *)(a1 + 1392));
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  if ( *(_DWORD *)(a1 + 1192) )
    _o_terminate();
  sub_1800618F0((__int64 *)(a1 + 1136));
  if ( *(_BYTE *)(a1 + 1120) )
    sub_180061A34(*(_QWORD *)(a1 + 1112));
  sub_1801168D0(a1 + 1104);
  sub_18001FFEC((__int64 *)(a1 + 1080), a1 + 1080);
  v2 = *(_QWORD *)(a1 + 984);
  if ( v2 )
  {
    sub_18006D054((__int64 *)(v2 + 16), v2 + 16);
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
  sub_1800618F0((__int64 *)(a1 + 888));
  sub_1800618F0((__int64 *)(a1 + 864));
  sub_1800618F0((__int64 *)(a1 + 840));
  if ( *(_BYTE *)(a1 + 824) )
    sub_180061A34(*(_QWORD *)(a1 + 816));
  sub_1801168D0(a1 + 808);
  sub_18006D1D4(a1 + 728, a1 + 728, *(__int64 **)(*(_QWORD *)(a1 + 728) + 8LL));
  j_j__o_free(*(_QWORD *)(a1 + 728));
  sub_180012938((__int64 *)(a1 + 704));
  sub_180018CC0((_QWORD *)(a1 + 568));
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
  sub_1800DD774(a1 + 368);
  sub_1800618F0((__int64 *)(a1 + 344));
  if ( *(_BYTE *)(a1 + 328) )
    sub_180061A34(*(_QWORD *)(a1 + 320));
  sub_1801168D0(a1 + 312);
  sub_1800618F0((__int64 *)(a1 + 288));
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
        return sub_180072828();
      }
      v8 = v11;
    }
    j_j__o_free(v8);
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  sub_18006CF7C((__int64 *)(a1 + 184), a1 + 184);
  sub_18007B8A0(a1 + 168);
  sub_1800618F0((__int64 *)(a1 + 144));
  if ( *(_BYTE *)(a1 + 128) )
    sub_180061A34(*(_QWORD *)(a1 + 120));
  sub_1801168D0(a1 + 112);
  sub_180012938((__int64 *)(a1 + 88));
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
  sub_1800618F0((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180061A34(*(_QWORD *)(a1 + 16));
  return sub_1801168D0(a1 + 8);
}
