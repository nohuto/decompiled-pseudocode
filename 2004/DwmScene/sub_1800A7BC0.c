/*
 * XREFs of sub_1800A7BC0 @ 0x1800A7BC0
 * Callers:
 *     sub_1800A6CF0 @ 0x1800A6CF0 (sub_1800A6CF0.c)
 *     sub_1800ADDEC @ 0x1800ADDEC (sub_1800ADDEC.c)
 *     sub_1800AE070 @ 0x1800AE070 (sub_1800AE070.c)
 *     sub_1800AE0CC @ 0x1800AE0CC (sub_1800AE0CC.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A7BC0(__int64 a1, char a2)
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
