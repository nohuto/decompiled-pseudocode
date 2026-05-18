/*
 * XREFs of sub_1800FCD80 @ 0x1800FCD80
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FCD80(__int64 a1, char a2)
{
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx

  v4 = *(volatile signed __int32 **)(a1 + 32);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(volatile signed __int32 **)(a1 + 16);
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
