/*
 * XREFs of sub_18006D75C @ 0x18006D75C
 * Callers:
 *     sub_1800384E4 @ 0x1800384E4 (sub_1800384E4.c)
 *     sub_18006D820 @ 0x18006D820 (sub_18006D820.c)
 * Callees:
 *     sub_18006DE90 @ 0x18006DE90 (sub_18006DE90.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_18006D75C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_18006DE90();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (volatile signed __int32 *)a1[10];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_180067BE8((__int64)a1);
}
