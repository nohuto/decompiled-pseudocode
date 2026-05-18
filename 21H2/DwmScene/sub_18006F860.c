/*
 * XREFs of sub_18006F860 @ 0x18006F860
 * Callers:
 *     sub_1800277E8 @ 0x1800277E8 (sub_1800277E8.c)
 *     sub_18006FC60 @ 0x18006FC60 (sub_18006FC60.c)
 *     sub_1800B6AF8 @ 0x1800B6AF8 (sub_1800B6AF8.c)
 *     sub_18012634E @ 0x18012634E (sub_18012634E.c)
 *     sub_18012D008 @ 0x18012D008 (sub_18012D008.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006D474 @ 0x18006D474 (sub_18006D474.c)
 *     sub_18006E7FC @ 0x18006E7FC (sub_18006E7FC.c)
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     sub_18006F6B8 @ 0x18006F6B8 (sub_18006F6B8.c)
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F860(__int64 a1)
{
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_180070FFC();
  sub_18006E7FC((__int64 *)(a1 + 4120), a1 + 4120);
  sub_18011C1A0(a1 + 4104);
  *(_QWORD *)(a1 + 4096) = &Spectre::Engine::IGpuQueryPool::`vftable';
  sub_18006F6B8((_QWORD *)(a1 + 3992));
  sub_18006D474((__int64 *)(a1 + 3856), v2);
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
  `eh vector destructor iterator'((void *)(a1 + 1280), 0x28uLL, 0x40uLL, (void (*)(void *))sub_180046850);
  sub_1800E224C(a1 + 1056);
  sub_1800E224C(a1 + 832);
  sub_1800E224C(a1 + 608);
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
  sub_18006E8C4(a1 + 496, a1 + 496, *(__int64 **)(*(_QWORD *)(a1 + 496) + 8LL));
  j_j__o_free(*(_QWORD *)(a1 + 496));
  sub_180019460((_QWORD *)(a1 + 288));
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
  sub_180012A18((__int64 *)(a1 + 248));
  unknown_libname_103((__int64 *)(a1 + 208));
  unknown_libname_103((__int64 *)(a1 + 176));
  unknown_libname_103((__int64 *)(a1 + 144));
  unknown_libname_103((__int64 *)(a1 + 112));
  unknown_libname_103((__int64 *)(a1 + 80));
  sub_1800671C0((__int64 *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 40) )
    sub_180067304(*(_QWORD *)(a1 + 32));
  result = sub_18011C1A0(a1 + 24);
  v7 = *(volatile signed __int32 **)(a1 + 16);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
