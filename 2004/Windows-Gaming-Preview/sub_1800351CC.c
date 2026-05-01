/*
 * XREFs of sub_1800351CC @ 0x1800351CC
 * Callers:
 *     sub_1800341BC @ 0x1800341BC (sub_1800341BC.c)
 *     sub_180036AB0 @ 0x180036AB0 (sub_180036AB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800351CC(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 216);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180035258(a1);
}
