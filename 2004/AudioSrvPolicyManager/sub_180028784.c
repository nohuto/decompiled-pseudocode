/*
 * XREFs of sub_180028784 @ 0x180028784
 * Callers:
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 * Callees:
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180028784(__int64 a1, volatile signed __int32 *a2)
{
  __int64 **v3; // rcx
  __int64 *i; // rdx

  v3 = (__int64 **)(a1 + 56);
  for ( i = *v3; i && (volatile signed __int32 *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    sub_180017FBC(v3, i);
    *((_DWORD *)a2 + 121) = 0;
    if ( _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a2 + 32LL))(a2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
    }
  }
  return 0LL;
}
