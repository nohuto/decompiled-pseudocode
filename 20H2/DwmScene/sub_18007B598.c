/*
 * XREFs of sub_18007B598 @ 0x18007B598
 * Callers:
 *     sub_18006D8C4 @ 0x18006D8C4 (sub_18006D8C4.c)
 *     sub_18012500A @ 0x18012500A (sub_18012500A.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007B598(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx

  sub_180012938((__int64 *)(a2 + 48));
  v3 = *(volatile signed __int32 **)(a2 + 40);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return j_j__o_free(a2);
}
