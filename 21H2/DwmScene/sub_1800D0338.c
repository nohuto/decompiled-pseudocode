/*
 * XREFs of sub_1800D0338 @ 0x1800D0338
 * Callers:
 *     sub_1800D04B0 @ 0x1800D04B0 (sub_1800D04B0.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D0338(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = (__int64)&Spectre::Engine::DepthBuffer::`vftable';
  sub_1800258BC(a1 + 32, (__int64)(a1 + 32));
  `eh vector destructor iterator'(a1 + 24, 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_98);
  `eh vector destructor iterator'(a1 + 16, 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_98);
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180027A54((__int64)a1);
}
