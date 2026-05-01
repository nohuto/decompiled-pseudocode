/*
 * XREFs of sub_18001F180 @ 0x18001F180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019324 @ 0x180019324 (sub_180019324.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001F180(__int64 a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = *(volatile signed __int32 **)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  sub_180019324(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 64LL);
  return a1;
}
