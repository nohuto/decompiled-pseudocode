/*
 * XREFs of sub_18006A838 @ 0x18006A838
 * Callers:
 *     sub_18006A8C8 @ 0x18006A8C8 (sub_18006A8C8.c)
 * Callees:
 *     sub_180066D08 @ 0x180066D08 (sub_180066D08.c)
 *     sub_180067094 @ 0x180067094 (sub_180067094.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A838(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // eax
  volatile signed __int32 *v5; // rbx

  v4 = sub_180067094(*a2 + 24LL);
  sub_180066D08((__int64)(a1 + 1), v4);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
