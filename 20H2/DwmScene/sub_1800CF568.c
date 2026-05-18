/*
 * XREFs of sub_1800CF568 @ 0x1800CF568
 * Callers:
 *     sub_1800CE3A0 @ 0x1800CE3A0 (sub_1800CE3A0.c)
 *     sub_180127ED8 @ 0x180127ED8 (sub_180127ED8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CF568(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a2 + 48);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return j_j__o_free(a2);
}
