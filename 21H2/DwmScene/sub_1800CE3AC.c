/*
 * XREFs of sub_1800CE3AC @ 0x1800CE3AC
 * Callers:
 *     sub_1800CE36C @ 0x1800CE36C (sub_1800CE36C.c)
 *     sub_1800CE37C @ 0x1800CE37C (sub_1800CE37C.c)
 *     sub_1800CE38C @ 0x1800CE38C (sub_1800CE38C.c)
 *     sub_1800CE39C @ 0x1800CE39C (sub_1800CE39C.c)
 *     sub_1800CE758 @ 0x1800CE758 (sub_1800CE758.c)
 *     sub_1800CE770 @ 0x1800CE770 (sub_1800CE770.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800CE3AC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180067BE8((__int64)a1);
}
