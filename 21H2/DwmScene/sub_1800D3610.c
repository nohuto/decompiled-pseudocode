/*
 * XREFs of sub_1800D3610 @ 0x1800D3610
 * Callers:
 *     sub_18003DF78 @ 0x18003DF78 (sub_18003DF78.c)
 *     sub_18003E020 @ 0x18003E020 (sub_18003E020.c)
 *     sub_1800F974C @ 0x1800F974C (sub_1800F974C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800D3610(_QWORD *a1)
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
  return sub_180067BE8((__int64)a1);
}
