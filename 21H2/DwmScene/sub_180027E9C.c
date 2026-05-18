/*
 * XREFs of sub_180027E9C @ 0x180027E9C
 * Callers:
 *     sub_18002C210 @ 0x18002C210 (sub_18002C210.c)
 * Callees:
 *     sub_1800266F8 @ 0x1800266F8 (sub_1800266F8.c)
 *     sub_1800268EC @ 0x1800268EC (sub_1800268EC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180027E9C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_1800268EC((__int64)&v5);
  *(_OWORD *)a2 = 0LL;
  sub_1800266F8(a2, (__int64 *)&v5);
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v3 = *((_QWORD *)&v5 + 1);
      (***((void (__fastcall ****)(_QWORD))&v5 + 1))(*((_QWORD *)&v5 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v5 + 1) + 8LL))(*((_QWORD *)&v5 + 1));
    }
  }
  return a2;
}
