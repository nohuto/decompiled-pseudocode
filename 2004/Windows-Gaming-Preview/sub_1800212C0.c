/*
 * XREFs of sub_1800212C0 @ 0x1800212C0
 * Callers:
 *     sub_180021C10 @ 0x180021C10 (sub_180021C10.c)
 *     sub_180024C20 @ 0x180024C20 (sub_180024C20.c)
 *     sub_180024D60 @ 0x180024D60 (sub_180024D60.c)
 *     sub_180024DC0 @ 0x180024DC0 (sub_180024DC0.c)
 *     sub_180024E90 @ 0x180024E90 (sub_180024E90.c)
 *     sub_180024EF0 @ 0x180024EF0 (sub_180024EF0.c)
 *     sub_180024F60 @ 0x180024F60 (sub_180024F60.c)
 *     sub_180025000 @ 0x180025000 (sub_180025000.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800212C0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 27);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 27, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 88))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
