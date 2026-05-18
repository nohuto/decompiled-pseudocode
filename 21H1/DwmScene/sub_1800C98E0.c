/*
 * XREFs of sub_1800C98E0 @ 0x1800C98E0
 * Callers:
 *     sub_180023060 @ 0x180023060 (sub_180023060.c)
 *     sub_1800230D0 @ 0x1800230D0 (sub_1800230D0.c)
 *     sub_180040B9C @ 0x180040B9C (sub_180040B9C.c)
 *     sub_1800B1810 @ 0x1800B1810 (sub_1800B1810.c)
 *     sub_1800B2090 @ 0x1800B2090 (sub_1800B2090.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800C98E0(_QWORD *a1)
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
  return sub_180062318((__int64)a1);
}
