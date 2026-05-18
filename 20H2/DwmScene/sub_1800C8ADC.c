/*
 * XREFs of sub_1800C8ADC @ 0x1800C8ADC
 * Callers:
 *     sub_1800C8A9C @ 0x1800C8A9C (sub_1800C8A9C.c)
 *     sub_1800C8AAC @ 0x1800C8AAC (sub_1800C8AAC.c)
 *     sub_1800C8ABC @ 0x1800C8ABC (sub_1800C8ABC.c)
 *     sub_1800C8ACC @ 0x1800C8ACC (sub_1800C8ACC.c)
 *     sub_1800C8E88 @ 0x1800C8E88 (sub_1800C8E88.c)
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800C8ADC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180062318((__int64)a1);
}
