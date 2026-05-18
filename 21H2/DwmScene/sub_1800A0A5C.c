/*
 * XREFs of sub_1800A0A5C @ 0x1800A0A5C
 * Callers:
 *     sub_1800460C8 @ 0x1800460C8 (sub_1800460C8.c)
 *     sub_1800A0CD0 @ 0x1800A0CD0 (sub_1800A0CD0.c)
 *     sub_1800F9910 @ 0x1800F9910 (sub_1800F9910.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800A0A5C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[10];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  return sub_180067BE8((__int64)a1);
}
