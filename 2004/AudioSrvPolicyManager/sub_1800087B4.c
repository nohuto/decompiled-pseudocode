/*
 * XREFs of sub_1800087B4 @ 0x1800087B4
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall sub_1800087B4(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return a1;
}
