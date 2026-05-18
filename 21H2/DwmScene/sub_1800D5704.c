/*
 * XREFs of sub_1800D5704 @ 0x1800D5704
 * Callers:
 *     sub_1800D6420 @ 0x1800D6420 (sub_1800D6420.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_1800D4EA0 @ 0x1800D4EA0 (sub_1800D4EA0.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D5704(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx

  sub_180069FBC(a1 + 133, (__int64)(a1 + 133));
  v2 = (volatile signed __int32 *)a1[113];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  sub_1800D4EA0(a1 + 110, (__int64)(a1 + 110));
  sub_1800E12F4(a1 + 88);
  sub_1800E12F4(a1 + 66);
  sub_1800E12F4(a1 + 44);
  sub_1800E12F4(a1 + 22);
  return sub_1800E12F4(a1);
}
