/*
 * XREFs of sub_1800AD490 @ 0x1800AD490
 * Callers:
 *     sub_1800AC5C0 @ 0x1800AC5C0 (sub_1800AC5C0.c)
 *     sub_1800B36BC @ 0x1800B36BC (sub_1800B36BC.c)
 *     sub_1800B3940 @ 0x1800B3940 (sub_1800B3940.c)
 *     sub_1800B399C @ 0x1800B399C (sub_1800B399C.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AD490(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 40);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
