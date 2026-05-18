/*
 * XREFs of sub_1800CF1B0 @ 0x1800CF1B0
 * Callers:
 *     sub_180028930 @ 0x180028930 (sub_180028930.c)
 *     sub_1800289A0 @ 0x1800289A0 (sub_1800289A0.c)
 *     sub_18004646C @ 0x18004646C (sub_18004646C.c)
 *     sub_1800B70E0 @ 0x1800B70E0 (sub_1800B70E0.c)
 *     sub_1800B7960 @ 0x1800B7960 (sub_1800B7960.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800CF1B0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180067BE8((__int64)a1);
}
