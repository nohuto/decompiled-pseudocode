/*
 * XREFs of sub_180062460 @ 0x180062460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062318 @ 0x180062318 (sub_180062318.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180062460(__int64 a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = *(volatile signed __int32 **)(a1 + 80);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180062318(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
