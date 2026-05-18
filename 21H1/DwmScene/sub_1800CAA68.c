/*
 * XREFs of sub_1800CAA68 @ 0x1800CAA68
 * Callers:
 *     sub_1800CABE0 @ 0x1800CABE0 (sub_1800CABE0.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CAA68(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = (__int64)&Spectre::Engine::DepthBuffer::`vftable';
  sub_18001FFEC(a1 + 32, (__int64)(a1 + 32));
  `eh vector destructor iterator'(a1 + 24, 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_96);
  `eh vector destructor iterator'(a1 + 16, 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_96);
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
  return sub_180022184((__int64)a1);
}
