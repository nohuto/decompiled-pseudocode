/*
 * XREFs of sub_180069F90 @ 0x180069F90
 * Callers:
 *     sub_180021F18 @ 0x180021F18 (sub_180021F18.c)
 *     sub_18006A390 @ 0x18006A390 (sub_18006A390.c)
 *     sub_1800B1228 @ 0x1800B1228 (sub_1800B1228.c)
 *     sub_180120A36 @ 0x180120A36 (sub_180120A36.c)
 *     sub_1801276F0 @ 0x1801276F0 (sub_1801276F0.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180018CC0 @ 0x180018CC0 (sub_180018CC0.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180067BA4 @ 0x180067BA4 (sub_180067BA4.c)
 *     sub_180068F2C @ 0x180068F2C (sub_180068F2C.c)
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     sub_180069DE8 @ 0x180069DE8 (sub_180069DE8.c)
 *     sub_18006B72C @ 0x18006B72C (sub_18006B72C.c)
 *     sub_1800DC97C @ 0x1800DC97C (sub_1800DC97C.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069F90(__int64 a1)
{
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_18006B72C();
  sub_180068F2C((__int64 *)(a1 + 4120), a1 + 4120);
  sub_1801168D0(a1 + 4104);
  *(_QWORD *)(a1 + 4096) = &Spectre::Engine::IGpuQueryPool::`vftable';
  sub_180069DE8((_QWORD *)(a1 + 3992));
  sub_180067BA4((__int64 *)(a1 + 3856), v2);
  v3 = *(volatile signed __int32 **)(a1 + 3848);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  `eh vector destructor iterator'((void *)(a1 + 1280), 0x28uLL, 0x40uLL, (void (*)(void *))sub_180040F80);
  sub_1800DC97C(a1 + 1056);
  sub_1800DC97C(a1 + 832);
  sub_1800DC97C(a1 + 608);
  v4 = *(volatile signed __int32 **)(a1 + 600);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 512));
  sub_180068FF4(a1 + 496, a1 + 496, *(__int64 **)(*(_QWORD *)(a1 + 496) + 8LL));
  j_j__o_free(*(_QWORD *)(a1 + 496));
  sub_180018CC0((_QWORD *)(a1 + 288));
  v5 = *(volatile signed __int32 **)(a1 + 280);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  sub_180012938((__int64 *)(a1 + 248));
  unknown_libname_101((__int64 *)(a1 + 208));
  unknown_libname_101((__int64 *)(a1 + 176));
  unknown_libname_101((__int64 *)(a1 + 144));
  unknown_libname_101((__int64 *)(a1 + 112));
  unknown_libname_101((__int64 *)(a1 + 80));
  sub_1800618F0((__int64 *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 40) )
    sub_180061A34(*(_QWORD *)(a1 + 32));
  result = sub_1801168D0(a1 + 24);
  v7 = *(volatile signed __int32 **)(a1 + 16);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
