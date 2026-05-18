/*
 * XREFs of sub_1800CFE34 @ 0x1800CFE34
 * Callers:
 *     sub_1800D0B50 @ 0x1800D0B50 (sub_1800D0B50.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_1800CF5D0 @ 0x1800CF5D0 (sub_1800CF5D0.c)
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CFE34(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx

  sub_1800646EC(a1 + 133, (__int64)(a1 + 133));
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
  sub_1800CF5D0(a1 + 110, (__int64)(a1 + 110));
  sub_1800DBA24(a1 + 88);
  sub_1800DBA24(a1 + 66);
  sub_1800DBA24(a1 + 44);
  sub_1800DBA24(a1 + 22);
  return sub_1800DBA24(a1);
}
