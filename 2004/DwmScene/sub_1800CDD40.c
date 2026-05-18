/*
 * XREFs of sub_1800CDD40 @ 0x1800CDD40
 * Callers:
 *     sub_1800386A8 @ 0x1800386A8 (sub_1800386A8.c)
 *     sub_180038750 @ 0x180038750 (sub_180038750.c)
 *     sub_1800F3E7C @ 0x1800F3E7C (sub_1800F3E7C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800CDD40(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180062318((__int64)a1);
}
