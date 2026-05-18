/*
 * XREFs of sub_18009B18C @ 0x18009B18C
 * Callers:
 *     sub_1800407F8 @ 0x1800407F8 (sub_1800407F8.c)
 *     sub_18009B400 @ 0x18009B400 (sub_18009B400.c)
 *     sub_1800F4040 @ 0x1800F4040 (sub_1800F4040.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_18009B18C(_QWORD *a1)
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
  return sub_180062318((__int64)a1);
}
